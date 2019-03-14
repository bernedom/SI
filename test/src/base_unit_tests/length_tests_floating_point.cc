#include <catch.hpp>

#include <SI/length.h>

using namespace SI;

TEST_CASE("km returns ratio 1000 to 1 floating point") {
  constexpr auto one_k = 1.0_km;
  static_assert(decltype(one_k)::ratio::num == 1000, "one km is 1000 / 1");
  static_assert(decltype(one_k)::ratio::den == 1, "one km is 1000/ 1");
}

TEST_CASE("mm returns ratio 1 to 1000 floating point") {
  constexpr auto one_mm = 1.0_mm;
  static_assert(decltype(one_mm)::ratio::num == 1, "one mm is 1/ 1000");
  static_assert(decltype(one_mm)::ratio::den == 1000, "one kmmm is 1/ 1000");
}

TEST_CASE("m returns ratio 1 to 1 floating point") {
  constexpr auto one_m = 1.0_m;
  static_assert(decltype(one_m)::ratio::num == 1, "one mm is 1/ 1");
  static_assert(decltype(one_m)::ratio::den == 1, "one kmmm is 1/ 1");
}

TEST_CASE("cm returns ratio 1 to 100 floating point") {
  constexpr auto one_cm = 1.0_cm;
  static_assert(std::ratio_equal<decltype(one_cm)::ratio, std::centi>::value,
                "cm returns ratio std::centi");
}