#include <catch.hpp>

#include <SI/illuminance.h>
#include <SI/luminous_flux.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _alx THEN result is a "
          "illuminance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_alx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_alx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _flx THEN result is a "
          "illuminance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_flx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_flx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _plx THEN result is a "
          "illuminance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nlx THEN result is a "
          "illuminance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ulx THEN result is a "
          "illuminance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ulx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ulx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mlx THEN result is a "
          "illuminance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _lx THEN result is a "
          "illuminance type AND ratio 1 to 1") {
  constexpr auto one = 1_lx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_lx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _klx THEN result is a "
          "illuminance type AND ratio 1000 to 1") {
  constexpr auto one = 1_klx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_klx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mlx THEN result is a "
          "illuminance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Glx THEN result is a "
          "illuminance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Glx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Glx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tlx THEN result is a "
          "illuminance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Plx THEN result is a "
          "illuminance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Elx THEN result is a "
          "illuminance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Elx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Elx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a luminous_flux value WHEN divided by an "
                   "area value THEN "
                   "result is a illuminance value",
                   "[illuminance][operator/]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> luminous_flux{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = luminous_flux / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::illuminance_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a illuminance value WHEN multiplied by an "
                   "area value "
                   "THEN result is a luminous_flux value",
                   "[illuminance][operator*]", int64_t, long double) {
  constexpr SI::illuminance_t<TestType, std::ratio<1>> illuminance{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = illuminance * area;
  constexpr auto result_commutative = area * illuminance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminous_flux_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a luminous_flux value WHEN divided by a "
                   "illuminance value THEN "
                   "result is an area value",
                   "[luminous_flux][operator/]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> luminous_flux{1};
  constexpr SI::illuminance_t<TestType, std::ratio<1>> illuminance{1};

  constexpr auto result = luminous_flux / illuminance;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}
