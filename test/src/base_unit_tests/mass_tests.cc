#include <catch.hpp>

#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _g THEN result is a "
          "mass value AND ratio is 1/1000") {
  constexpr auto one = 1_g;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_g;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mg THEN result is a "
          "mass value AND ratio is 1/1000000") {
  constexpr auto one = 1_mg;

  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_mg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kg THEN result is a "
          "mass value AND ratio is 1/1") {
  constexpr auto one = 1_kg;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_kg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::ratio<1>>>::value);
}
