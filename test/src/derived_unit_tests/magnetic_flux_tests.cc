#include <catch.hpp>

#include <SI/electric_potential.h>
#include <SI/magnetic_flux.h>
#include <SI/time.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 1000") {
  constexpr auto one = 1_mWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Wb THEN result is a "
          "magnetic_flux type AND ratio 1 to 1") {
  constexpr auto one = 1_Wb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Wb;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::magnetic_flux_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kWb THEN result is a "
          "magnetic_flux type AND ratio 1000 to 1") {
  constexpr auto one = 1_kWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MWb THEN result is a "
          "magnetic_flux type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GWb THEN result is a "
          "magnetic_flux type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TWb THEN result is a "
          "magnetic_flux type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PWb THEN result is a "
          "magnetic_flux type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::peta>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a electric_potential value WHEN multiplied with a time "
    "value THEN result is a magnetic_flux value",
    "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>> f{1};
  constexpr SI::time_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = f * l;
  constexpr auto result_commutative = l * f;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_flux_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a magnetic_flux value WHEN divided by time THEN then "
                   "result is a electric_potential value",
                   "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::time_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = e / l;
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by electric_potential THEN then "
    "result is a accelereatin value",
    "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>> f{1};

  constexpr auto result = e / f;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}
