#include <catch.hpp>

#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _g THEN result is a "
          "mass value AND ratio is 1/1000") {
  constexpr auto one = 1_g;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_g;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mg THEN result is a "
          "mass value AND ratio is 1/1000000") {
  constexpr auto one = 1_mg;
  static_assert(std::ratio_equal<std::micro, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mg;
  static_assert(std::ratio_equal<std::micro, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kg THEN result is a "
          "mass value AND ratio is 1/1") {
  constexpr auto one = 1_kg;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kg;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
