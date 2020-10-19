#include <catch2/catch.hpp>

#include <SI/velocity.h>

using namespace SI;

TEST_CASE("GIVEN a value WHEN constructed with literal _c THEN result is a "
          "velocity type AND ratio is 299792458 to 1 (light speed)") {
  constexpr auto one = 1_c;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::velocity_t<int64_t, std::ratio<299792458, 1>>>::value);

  constexpr auto one_f = 1.0_c;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::velocity_t<long double, std::ratio<299792458, 1>>>::value);
}

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
  STATIC_REQUIRE(one.value() == 1);
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

  STATIC_REQUIRE(kms.value() == 5);
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

TEST_CASE("GIVEN a value of 10km/h WHEN compared to a value of 80kmh THEN "
          "10km/h is smaller") {
  constexpr auto ten_kmh = 10.0_km / 1.0_h;
  constexpr auto eighty_kmh = 80.0_km / 1.0_h;

  STATIC_REQUIRE(std::is_same<decltype(ten_kmh), decltype(eighty_kmh)>::value);

  STATIC_REQUIRE(ten_kmh < eighty_kmh);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _km_p_h THEN result is a "
    "velocity type AND ratio 1000 to 3600") {
  constexpr auto one_kmh_literal = 1_km_p_h;
  constexpr auto one_kmh_literal_double = 1.0_km_p_h;
  constexpr auto expected_type = 1_km / 1_h;

  STATIC_REQUIRE(
      std::is_same<decltype(expected_type), decltype(one_kmh_literal)>::value);
  STATIC_REQUIRE(one_kmh_literal == expected_type);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_kmh_literal)::ratio,
                                  std::ratio<1000, 3600>>::value);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_kmh_literal_double)::ratio,
                                  std::ratio<1000, 3600>>::value);
  STATIC_REQUIRE(std::is_same<decltype(one_kmh_literal),
                              const SI::kilometre_per_hour_t<int64_t>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(one_kmh_literal_double),
                   const SI::kilometre_per_hour_t<long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _m_p_h THEN result is a "
          "velocity type AND ratio 1") {
  constexpr auto one_m_ps_literal = 1_m_p_s;
  constexpr auto one_m_ps_literal_double = 1.0_m_p_s;
  constexpr auto expected_type = 1_m / 1_s;

  STATIC_REQUIRE(
      std::is_same<decltype(expected_type), decltype(one_m_ps_literal)>::value);
  STATIC_REQUIRE(one_m_ps_literal == expected_type);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_m_ps_literal)::ratio,
                                  std::ratio<1>>::value);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_m_ps_literal_double)::ratio,
                                  std::ratio<1>>::value);
  STATIC_REQUIRE(std::is_same<decltype(one_m_ps_literal),
                              const SI::metre_per_second_t<int64_t>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(one_m_ps_literal_double),
                   const SI::metre_per_second_t<long double>>::value);
}
