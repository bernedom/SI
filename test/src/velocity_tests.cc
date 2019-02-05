#include <catch.hpp>

#include <SI/velocity.h>
#include <type_traits>

using namespace SI::literals;

TEST_CASE("m/s returns ratio 1 to 1") {
  constexpr auto one = 1_m / 1_s;

  static_assert(
      std::is_same<decltype(one), const SI::velocity<std::ratio<1>>>::value,
      "Returned value is a velocity");
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_mf = 1.0_m;
  constexpr auto one_sf = 1.0_s;
  constexpr auto one_f = one_mf / one_sf;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("km/h returns ratio 1000 to 3600") {
  constexpr auto one = 1_km / 1_h;
  static_assert(
      std::ratio_equal<std::ratio<1000, 3600>, decltype(one)::ratio>::value,
      "One s is 1000 / 3600");
  static_assert(one.raw_value() == 1);
}

TEST_CASE("km/s returns ratio 1000/1") {
  constexpr auto one = 1_km / 1_s;
  static_assert(std::is_same<decltype(one),
                             const SI::velocity<std::ratio<1000, 1>>>::value);
}

TEST_CASE("5 km/s returns is equal 5000 m/s") {
  constexpr auto one_kms = 5_km / 1_s;
  constexpr auto one_ms = 5000_m / 1_s;

  static_assert(one_kms == one_ms);
}
