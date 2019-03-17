#include <catch.hpp>

#include <SI/luminosity.h>

using namespace SI::literals;

/// @todo adjust test names
TEST_CASE("cd returns ratio 1 to 1") {
  constexpr auto one = 1_cd;
  STATIC_REQUIRE(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_cd;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value);
}

TEST_CASE("mcd returns ratio 1 to 1000") {
  constexpr auto one = 1_mcd;
  STATIC_REQUIRE(std::ratio_equal<std::milli, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_mcd;
  STATIC_REQUIRE(std::ratio_equal<std::milli, decltype(one_f)::ratio>::value);
}

TEST_CASE("kcd returns ratio 1000 to 1") {
  constexpr auto one = 1_kcd;
  STATIC_REQUIRE(std::ratio_equal<std::kilo, decltype(one)::ratio>::value);

  constexpr auto one_f = 1.0_kcd;
  STATIC_REQUIRE(std::ratio_equal<std::kilo, decltype(one_f)::ratio>::value);
}
