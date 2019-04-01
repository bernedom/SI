#include <catch.hpp>

#include <SI/velocity.h>

using namespace SI::literals;

TEST_CASE("GIVEN a length value in meters WHEN divided by time value in "
          "seconds THEN result is a velocity value AND ratio of result is 1") {
  constexpr auto one = 1_m / 1_s;

  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::velocity_t<int64_t, std::ratio<1>>>::value);
  STATIC_REQUIRE(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value);

  constexpr auto one_mf = 1.0_m;
  constexpr auto one_sf = 1.0_s;
  constexpr auto one_f = one_mf / one_sf;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value);
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in h THEN "
          "result is a velocity value AND ratio of result is 1000 to 3600") {
  constexpr auto one = 1_km / 1_h;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1000, 3600>, decltype(one)::ratio>::value);
  STATIC_REQUIRE(one.raw_value() == 1);
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in seconds "
          "THEN result is a velocity value AND ratio of result is kilo") {
  constexpr auto one = 1_km / 1_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::velocity_t<int64_t, std::ratio<1000, 1>>>::value);
}

TEST_CASE(
    "GIVEN a length value of 10 km WHEN divided by time value of 2 s THEN "
    "result is 5000m/s") {
  constexpr auto kms = 10_km / 2_s;
  constexpr auto ms = 10000_m / 2_s;

  STATIC_REQUIRE(kms.raw_value() == 5);
  STATIC_REQUIRE(kms == ms);
}

TEMPLATE_TEST_CASE(
    "GIVEN velocity value WHEN multiplied with time THEN result is a "
    "length value",
    "[length][operator_tests]", int64_t, long double) {

  constexpr SI::velocity_t<TestType, std::ratio<1>> v{1};
  constexpr SI::time_t<TestType, std::ratio<1>> T{1};

  constexpr auto result = v * T;
  constexpr auto result_commutative = T * v;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::length_t<TestType, std::ratio<1>>>::value);

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}