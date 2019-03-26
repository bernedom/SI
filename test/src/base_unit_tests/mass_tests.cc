#include <catch.hpp>

#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _fg THEN result is a "
          "mass type AND ratio 1 to 10^18") {
  constexpr auto one = 1_fg;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_fg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pg THEN result is a "
          "mass type AND ratio 1 to 10^15") {
  constexpr auto one = 1_pg;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_pg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ng THEN result is a "
          "mass type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ng;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ng;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ug THEN result is a "
          "mass type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ug;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ug;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::nano>>::value);
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

TEST_CASE("GIVEN a value WHEN constructed with literal _t THEN result is a "
          "mass value AND ratio is 1000/1") {
  constexpr auto one = 1_t;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_t;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::kilo>>::value);
}
