#include <catch.hpp>

#include <SI/velocity.h>
#include <type_traits>

using namespace SI::literals;

TEST_CASE("GIVEN a length value in meters WHEN divided by time value in "
          "seconds THEN result is a velocity value AND ratio of result is 1") {
  constexpr auto one = 1_m / 1_s;

  static_assert(
      std::is_same<decltype(one), const SI::velocity_t<std::ratio<1>>>::value,
      "Returned value is a velocity");
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_mf = 1.0_m;
  constexpr auto one_sf = 1.0_s;
  constexpr auto one_f = one_mf / one_sf;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in h THEN "
          "result is a velocity value AND ratio of result is 1000 to 3600") {
  constexpr auto one = 1_km / 1_h;
  static_assert(
      std::ratio_equal<std::ratio<1000, 3600>, decltype(one)::ratio>::value,
      "One s is 1000 / 3600");
  static_assert(one.raw_value() == 1);
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in seconds "
          "THEN result is a velocity value AND ratio of result is kilo") {
  constexpr auto one = 1_km / 1_s;
  static_assert(std::is_same<decltype(one),
                             const SI::velocity_t<std::ratio<1000, 1>>>::value);
}

TEST_CASE(
    "GIVEN a length value of 10 km WHEN divided by time value of 2 s THEN "
    "result is 5000m/s") {
  constexpr auto kms = 10_km / 2_s;
  constexpr auto ms = 10000_m / 2_s;

  static_assert(kms.raw_value() == 5);
  static_assert(kms == ms);
}
