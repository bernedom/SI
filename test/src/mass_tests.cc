#include <catch.hpp>

#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("g returns ratio 1 to 1") {
  constexpr auto one = 1_g;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_g;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("mg returns ratio 1 to 1000") {
  constexpr auto one = 1_mg;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mg;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("kg returns ratio 1000 to 1") {
  constexpr auto one = 1_kg;
  static_assert(std::ratio_equal<std::kilo, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kg;
  static_assert(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
