#include <catch.hpp>

#include <SI/electric_current.h>
#include <SI/inductance.h>
#include <SI/magnetic_flux.h>
#include <SI/stream.h>
#include <sstream>

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

TEST_CASE("GIVEN a 1 atto Henry WHEN passed to a streaming operator THEN "
          "result is '1aH'") {
  constexpr auto value = 1_aH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aH");
}

TEST_CASE("GIVEN a 1 femto Henry WHEN passed to a streaming operator THEN "
          "result is '1fH'") {
  constexpr auto value = 1_fH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fH");
}

TEST_CASE("GIVEN a 1 pico Henry WHEN passed to a streaming operator THEN "
          "result is '1pH'") {
  constexpr auto value = 1_pH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pH");
}

TEST_CASE("GIVEN a 1 nano Henry WHEN passed to a streaming operator THEN "
          "result is '1pH'") {
  constexpr auto value = 1_nH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nH");
}

TEST_CASE("GIVEN a 1 micro Henry WHEN passed to a streaming operator THEN "
          "result is '1uH'") {
  constexpr auto value = 1_uH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uH");
}

TEST_CASE("GIVEN a 1 milli Henry WHEN passed to a streaming operator THEN "
          "result is '1mH'") {
  constexpr auto value = 1_mH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mH");
}

TEST_CASE("GIVEN a 1 Henry WHEN passed to a streaming operator THEN result is "
          "'1H'") {
  constexpr auto value = 1_H;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1H");
}

TEST_CASE("GIVEN a 1 kilo Henry WHEN passed to a streaming operator THEN "
          "result is '1kH'") {
  constexpr auto value = 1_kH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kH");
}

TEST_CASE("GIVEN a 1 mega Henry WHEN passed to a streaming operator THEN "
          "result is '1MH'") {
  constexpr auto value = 1_MH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MH");
}

TEST_CASE("GIVEN a 1 giga Henry WHEN passed to a streaming operator THEN "
          "result is '1GH'") {
  constexpr auto value = 1_GH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GH");
}

TEST_CASE("GIVEN a 1 tera Henry WHEN passed to a streaming operator THEN "
          "result is '1TH'") {
  constexpr auto value = 1_TH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TH");
}

TEST_CASE("GIVEN a 1 exa Henry WHEN passed to a streaming operator THEN "
          "result is '1EH'") {
  constexpr auto value = 1_EH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1EH");
}

TEST_CASE("GIVEN a 1 peta Henry WHEN passed to a streaming operator THEN "
          "result is '1PH'") {
  constexpr auto value = 1_PH;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1PH");
}