#include <catch.hpp>

#include <SI/electric_potential.h>
#include <SI/magnetic_field.h>
#include <SI/stream.h>
#include <SI/time.h>
#include <sstream>

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

TEST_CASE("GIVEN a 1 atto Tesla WTEN passed to a streaming operator THEN "
          "result is '1aT'") {
  constexpr auto value = 1_aT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aT");
}

TEST_CASE("GIVEN a 1 femto Tesla WTEN passed to a streaming operator THEN "
          "result is '1fT'") {
  constexpr auto value = 1_fT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fT");
}

TEST_CASE("GIVEN a 1 pico Tesla WTEN passed to a streaming operator THEN "
          "result is '1pT'") {
  constexpr auto value = 1_pT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pT");
}

TEST_CASE("GIVEN a 1 nano Tesla WTEN passed to a streaming operator THEN "
          "result is '1pT'") {
  constexpr auto value = 1_nT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nT");
}

TEST_CASE("GIVEN a 1 micro Tesla WTEN passed to a streaming operator THEN "
          "result is '1uT'") {
  constexpr auto value = 1_uT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uT");
}

TEST_CASE("GIVEN a 1 milli Tesla WTEN passed to a streaming operator THEN "
          "result is '1mT'") {
  constexpr auto value = 1_mT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mT");
}

TEST_CASE("GIVEN a 1 Tesla WTEN passed to a streaming operator THEN result is "
          "'1T'") {
  constexpr auto value = 1_T;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1T");
}

TEST_CASE("GIVEN a 1 kilo Tesla WTEN passed to a streaming operator THEN "
          "result is '1kT'") {
  constexpr auto value = 1_kT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kT");
}

TEST_CASE("GIVEN a 1 mega Tesla WTEN passed to a streaming operator THEN "
          "result is '1MT'") {
  constexpr auto value = 1_MT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MT");
}

TEST_CASE("GIVEN a 1 giga Tesla WTEN passed to a streaming operator THEN "
          "result is '1GT'") {
  constexpr auto value = 1_GT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GT");
}

TEST_CASE("GIVEN a 1 tera Tesla WTEN passed to a streaming operator THEN "
          "result is '1TT'") {
  constexpr auto value = 1_TT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TT");
}

TEST_CASE("GIVEN a 1 exa Tesla WTEN passed to a streaming operator THEN "
          "result is '1ET'") {
  constexpr auto value = 1_ET;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1ET");
}

TEST_CASE("GIVEN a 1 peta Tesla WTEN passed to a streaming operator THEN "
          "result is '1PT'") {
  constexpr auto value = 1_PT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1PT");
}