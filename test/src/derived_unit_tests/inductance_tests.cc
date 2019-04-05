#include <catch.hpp>

#include <SI/electric_current.h>
#include <SI/inductance.h>
#include <SI/magnetic_flux.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aH THEN result is a "
          "inductance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fH THEN result is a "
          "inductance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pH THEN result is a "
          "inductance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nH THEN result is a "
          "inductance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uH THEN result is a "
          "inductance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mH THEN result is a "
          "inductance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _H THEN result is a "
          "inductance type AND ratio 1 to 1") {
  constexpr auto one = 1_H;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_H;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kH THEN result is a "
          "inductance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MH THEN result is a "
          "inductance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GH THEN result is a "
          "inductance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TH THEN result is a "
          "inductance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PH THEN result is a "
          "inductance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EH THEN result is a "
          "inductance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EH;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::inductance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EH;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::inductance_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a magnetic_flux value WHEN divided by an "
                   "electric_current value THEN "
                   "result is a inductance value",
                   "[inductance][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = magnetic_flux / electric_current;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::inductance_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a inductance value WHEN multiplied by an "
                   "electric_current value "
                   "THEN result is a magnetic_flux value",
                   "[inductance][operator*]", int64_t, long double) {
  constexpr SI::inductance_t<TestType, std::ratio<1>> inductance{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = inductance * electric_current;
  constexpr auto result_commutative = electric_current * inductance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_flux_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a magnetic_flux value WHEN divided by a "
                   "inductance value THEN "
                   "result is an electric_current value",
                   "[magnetic_flux][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::inductance_t<TestType, std::ratio<1>> inductance{1};

  constexpr auto result = magnetic_flux / inductance;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}
