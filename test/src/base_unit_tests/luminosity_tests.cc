#include <catch.hpp>

#include <SI/luminosity.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _cd THEN result is a "
          "luminosity type AND ratio 1 to 1") {
  constexpr auto one = 1_cd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_cd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mcd THEN result is a "
          "luminosity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kcd THEN result is a "
          "luminosity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kcd;

  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::kilo>>::value);
}
