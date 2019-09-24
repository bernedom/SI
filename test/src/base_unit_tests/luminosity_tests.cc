#include <catch.hpp>

#include <SI/luminosity.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _acd THEN result is a "
          "luminosity type AND ratio 1 to 10^18") {
  constexpr auto one = 1_acd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_acd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pcd THEN result is a "
          "luminosity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pcd THEN result is a "
          "luminosity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ncd THEN result is a "
          "luminosity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ncd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ncd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ucd THEN result is a "
          "luminosity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ucd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ucd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::micro>>::value);
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

TEST_CASE("GIVEN a value WHEN constructed with literal _Mcd THEN result is a "
          "luminosity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gcd THEN result is a "
          "luminosity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tcd THEN result is a "
          "luminosity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pcd THEN result is a "
          "luminosity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ecd THEN result is a "
          "luminosity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Ecd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Ecd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto candela WHEN passed to a streaming operator THEN "
          "result is '1acd'") {
  constexpr auto value = 1_acd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1acd");
}

TEST_CASE("GIVEN a 1 femto candela WHEN passed to a streaming operator THEN "
          "result is '1fcd'") {
  constexpr auto value = 1_fcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fcd");
}

TEST_CASE("GIVEN a 1 pico candela WHEN passed to a streaming operator THEN "
          "result is '1pcd'") {
  constexpr auto value = 1_pcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pcd");
}

TEST_CASE("GIVEN a 1 nano candela WHEN passed to a streaming operator THEN "
          "result is '1pcd'") {
  constexpr auto value = 1_ncd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1ncd");
}

TEST_CASE("GIVEN a 1 micro candela WHEN passed to a streaming operator THEN "
          "result is '1ucd'") {
  constexpr auto value = 1_ucd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1ucd");
}

TEST_CASE("GIVEN a 1 milli candela WHEN passed to a streaming operator THEN "
          "result is '1mcd'") {
  constexpr auto value = 1_mcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mcd");
}

TEST_CASE(
    "GIVEN a 1 candela WHEN passed to a streaming operator THEN result is "
    "'1cd'") {
  constexpr auto value = 1_cd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1cd");
}

TEST_CASE("GIVEN a 1 kilo candela WHEN passed to a streaming operator THEN "
          "result is '1kcd'") {
  constexpr auto value = 1_kcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kcd");
}

TEST_CASE("GIVEN a 1 mega candela WHEN passed to a streaming operator THEN "
          "result is '1Mcd'") {
  constexpr auto value = 1_Mcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Mcd");
}

TEST_CASE("GIVEN a 1 giga candela WHEN passed to a streaming operator THEN "
          "result is '1Gcd'") {
  constexpr auto value = 1_Gcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Gcd");
}

TEST_CASE("GIVEN a 1 tera candela WHEN passed to a streaming operator THEN "
          "result is '1Tcd'") {
  constexpr auto value = 1_Tcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Tcd");
}

TEST_CASE("GIVEN a 1 exa candela WHEN passed to a streaming operator THEN "
          "result is '1Ecd'") {
  constexpr auto value = 1_Ecd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Ecd");
}

TEST_CASE("GIVEN a 1 peta candela WHEN passed to a streaming operator THEN "
          "result is '1Pcd'") {
  constexpr auto value = 1_Pcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Pcd");
}
