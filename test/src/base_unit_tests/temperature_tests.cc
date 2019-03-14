#include <catch.hpp>

#include <SI/temperature.h>

using namespace SI::literals;

TEST_CASE("K returns ratio 1 to 1") {
  constexpr auto one = 1_K;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value,
                "One s is 1 / 1");

  constexpr auto one_f = 1.0_K;
  static_assert(std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value,
                "One s is 1 / 1");
}

TEST_CASE("mK returns ratio 1 to 1000") {
  constexpr auto one = 1_mK;
  static_assert(std::ratio_equal<std::milli, decltype(one)::ratio>::value,
                "One s is 1 / 1000");

  constexpr auto one_f = 1.0_mK;
  static_assert(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value,
                "One s is 1 / 1000");
}

TEST_CASE("kK returns ratio 1000 to 1") {
  constexpr auto one = 1_kK;
  static_assert(std::ratio_equal<std::kilo, decltype(one)::ratio>::value,
                "One s is 1000 / 1");

  constexpr auto one_f = 1.0_kK;
  static_assert(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value,
                "One s is 1000 / 1");
}
