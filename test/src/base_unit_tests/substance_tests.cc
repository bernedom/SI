#include <catch.hpp>

#include <SI/substance.h>

using namespace SI::literals;

TEST_CASE("mol returns ratio 1 to 1") {
  constexpr auto one = 1_mol;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_mol;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("mmol returns ratio 1 to 1000") {
  constexpr auto one = 1_mmol;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mmol;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("kmol returns ratio 1000 to 1") {
  constexpr auto one = 1_kmol;
  static_assert(std::ratio_equal<std::kilo, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kmol;
  static_assert(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
