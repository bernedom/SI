#include <catch.hpp>

#include <SI/substance.h>

using namespace SI::literals;

/// @todo adjust test names
TEST_CASE("mol returns ratio 1 to 1") {
  constexpr auto one = 1_mol;
  STATIC_REQUIRE(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_mol;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value);
}

TEST_CASE("mmol returns ratio 1 to 1000") {
  constexpr auto one = 1_mmol;
  STATIC_REQUIRE(std::ratio_equal<std::milli, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_mmol;
  STATIC_REQUIRE(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value);
}

TEST_CASE("kmol returns ratio 1000 to 1") {
  constexpr auto one = 1_kmol;
  STATIC_REQUIRE(std::ratio_equal<std::kilo, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_kmol;
  STATIC_REQUIRE(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value);
}
