#include <catch.hpp>

#include <SI/area.h>
#include <SI/force.h>
#include <SI/pressure.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _apa THEN result is a "
          "pressure type AND ratio 1 to 10^15") {
  constexpr auto one = 1_apa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_apa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fpa THEN result is a "
          "pressure type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ppa THEN result is a "
          "pressure type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ppa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ppa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _npa THEN result is a "
          "pressure type AND ratio 1 to 10^9") {
  constexpr auto one = 1_npa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_npa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _upa THEN result is a "
          "pressure type AND ratio 1 to 10^6") {
  constexpr auto one = 1_upa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_upa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mpa THEN result is a "
          "pressure type AND ratio 1 to 1000") {
  constexpr auto one = 1_mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pa THEN result is a "
          "pressure type AND ratio 1 to 1") {
  constexpr auto one = 1_pa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_pa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kpa THEN result is a "
          "pressure type AND ratio 1000 to 1") {
  constexpr auto one = 1_kpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mpa THEN result is a "
          "pressure type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gpa THEN result is a "
          "pressure type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tpa THEN result is a "
          "pressure type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ppa THEN result is a "
          "pressure type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Ppa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Ppa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Epa THEN result is a "
          "pressure type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Epa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Epa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by an area value THEN "
                   "result is a pressure value",
                   "[pressure][operator/]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> force{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = force / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::pressure_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a pressure value WHEN multiplied by an area value "
                   "THEN result is a force value",
                   "[pressure][operator*]", int64_t, long double) {
  constexpr SI::pressure_t<TestType, std::ratio<1>> pressure{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = pressure * area;
  constexpr auto result_commutative = area * pressure;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::force_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by a pressure value THEN "
                   "result is an area value",
                   "[force][operator/]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> force{1};
  constexpr SI::pressure_t<TestType, std::ratio<1>> pressure{1};

  constexpr auto result = force / pressure;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}