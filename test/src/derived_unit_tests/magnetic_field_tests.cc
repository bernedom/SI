#include <catch.hpp>

#include <SI/electric_potential.h>
#include <SI/magnetic_field.h>
#include <SI/time.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mT THEN result is a "
          "magnetic_field type AND ratio 1 to 1000") {
  constexpr auto one = 1_mT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _T THEN result is a "
          "magnetic_field type AND ratio 1 to 1") {
  constexpr auto one = 1_T;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_T;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::magnetic_field_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kT THEN result is a "
          "magnetic_field type AND ratio 1000 to 1") {
  constexpr auto one = 1_kT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MT THEN result is a "
          "magnetic_field type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GT THEN result is a "
          "magnetic_field type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TT THEN result is a "
          "magnetic_field type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PT THEN result is a "
          "magnetic_field type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::peta>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by an area value THEN "
    "result is a magnetic_field value",
    "[magnetic_field][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = magnetic_flux / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_field_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_field value WHEN multiplied by an area value "
    "THEN result is a magnetic_flux value",
    "[magnetic_field][operator*]", int64_t, long double) {
  constexpr SI::magnetic_field_t<TestType, std::ratio<1>> magnetic_field{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = magnetic_field * area;
  constexpr auto result_commutative = area * magnetic_field;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_flux_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by a magnetic_field value THEN "
    "result is an area value",
    "[magnetic_flux][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::magnetic_field_t<TestType, std::ratio<1>> magnetic_field{1};

  constexpr auto result = magnetic_flux / magnetic_field;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}