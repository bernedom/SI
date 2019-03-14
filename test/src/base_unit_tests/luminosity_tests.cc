#include <catch.hpp>

#include <SI/luminosity.h>

using namespace SI::literals;

TEST_CASE("cd returns ratio 1 to 1") {
  constexpr auto one = 1_cd;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_cd;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("mcd returns ratio 1 to 1000") {
  constexpr auto one = 1_mcd;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mcd;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("kcd returns ratio 1000 to 1") {
  constexpr auto one = 1_kcd;
  static_assert(std::ratio_equal<std::kilo, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kcd;
  static_assert(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
