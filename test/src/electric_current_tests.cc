#include <catch.hpp>

#include <SI/electric_current.h>

using namespace SI::literals;

TEST_CASE("A returns ratio 1 to 1") {
  constexpr auto one = 1_A;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_A;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("mA returns ratio 1 to 1000") {
  constexpr auto one = 1_mA;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mA;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("kA returns ratio 1000 to 1") {
  constexpr auto one = 1_kA;
  static_assert(std::ratio_equal<std::kilo, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kA;
  static_assert(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
