#include <catch2/catch.hpp>

#include <SI/momentum.h>

using namespace SI::literals;

TEST_CASE(
    "GIVEN a velocity value in meters per second WHEN multiplied by mass value "
    "in "
    "kilograms THEN result is a momentum value AND ratio of result is 1") {
  constexpr auto velocity = 1_m / 1_s;
  constexpr auto one = velocity * 1_kg;

  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::momentum_t<int64_t, std::ratio<1>>>::value);
  STATIC_REQUIRE(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value);

  constexpr auto one_mf = 1.0_m;
  constexpr auto one_sf = 1.0_s;
  constexpr auto one_Mf = 1.0_kg;
  constexpr auto one_vf = one_mf / one_sf;
  constexpr auto one_f = one_vf * one_Mf;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value);
}

TEMPLATE_TEST_CASE("GIVEN momentum value WHEN divided by mass THEN result is a "
                   "velocity value",
                   "[length][operator_tests]", int64_t, long double) {

  constexpr SI::momentum_t<TestType, std::ratio<1>> o{1};
  constexpr SI::mass_t<TestType, std::ratio<1>> M{1};

  constexpr auto result = o / M;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::velocity_t<TestType, std::ratio<1>>>::value);
}

