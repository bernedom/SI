#include <SI/area.h>
#include <SI/stream.h>
#include <catch2/catch.hpp>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN value AND value is integral WHEN constructed with literal _m2 "
          "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1_m2;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m2 "
    "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1.0_m2;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _cm2 "
    "THEN ratio is 10^-4 AND exponent is 2") {
  constexpr auto a = 1_cm2;
  STATIC_REQUIRE(std::ratio_equal<typename decltype(a)::ratio,
                                  std::ratio<1, 10000>>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m2 "
    "THEN ratio is 10^-4 AND exponent is 2") {
  constexpr auto a = 1.0_cm2;
  STATIC_REQUIRE(std::ratio_equal<typename decltype(a)::ratio,
                                  std::ratio<1, 10000>>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _mm2 "
    "THEN ratio is 10^-6 AND exponent is 2") {
  constexpr auto a = 1_mm2;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE("GIVEN value AND value is floating point WHEN constructed with "
          "literal _mm2 "
          "THEN ratio is 10^-6 AND exponent is 2") {
  constexpr auto a = 1.0_mm2;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
}

TEST_CASE("GIVEN value AND value is integral WHEN constructed with literal _m3 "
          "THEN ratio is 1 AND exponent is 3") {
  constexpr auto a = 1_m3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::ratio<1>>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m3 "
    "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1.0_m3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::ratio<1>>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _cm3 "
    "THEN ratio is 10^-6 AND exponent is 3") {
  constexpr auto a = 1_cm3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::micro>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m3 "
    "THEN ratio is 10^-6 AND exponent is 3") {
  constexpr auto a = 1.0_cm3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::micro>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _mm3 "
    "THEN ratio is 10^-9 AND exponent is 3") {
  constexpr auto a = 1_mm3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::nano>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE("GIVEN value AND value is floating point WHEN constructed with "
          "literal _mm3 "
          "THEN ratio is 10^-9 AND exponent is 3") {
  constexpr auto a = 1.0_mm3;
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::ratio, std::nano>::value);

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<3>>::value);
}

TEST_CASE("GIVEN two length values in meters WHEN multiplied THEN result is "
          "square meters") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  constexpr auto expected = 1_m2;

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(a)::exponent, std::ratio<2>>::value);
  STATIC_REQUIRE(std::is_same<decltype(a), decltype(expected)>::value);
}

TEST_CASE("GIVEN three length values WHEN multiplied THEN result is volume") {
  constexpr auto l = 1_m;
  constexpr auto v = l * l * l;

  constexpr auto expected = 1_m3;

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(v)::exponent, std::ratio<3>>::value);
  STATIC_REQUIRE(std::is_same<decltype(v), decltype(expected)>::value);
}

TEST_CASE("GIVEN an area value AND a length value WHEN multiplied THEN result "
          "is volume type") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;
  constexpr auto v = a * l;

  constexpr auto expected = 1_m3;

  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(v)::exponent, std::ratio<3>>::value);
  STATIC_REQUIRE(std::is_same<decltype(v), decltype(expected)>::value);
}

TEST_CASE("GIVEN two length values AND ratio is 10^-3 WHEN multiplied THEN "
          "ratio of result is 10^-6") {
  constexpr auto l = 2_mm;
  constexpr auto a = l * l;
  constexpr auto expected = 4_mm2;

  STATIC_REQUIRE(std::is_same<decltype(a), decltype(expected)>::value);
  STATIC_REQUIRE(expected == a);
}

TEST_CASE("GIVEN a lenght value with ratio 1 AND a length value with ratio "
          "10^-3 WHEN multiplied THEN ratio of result is 10^-6") {
  constexpr auto l = 2_m;
  constexpr auto l_mm = 2_mm;
  constexpr auto a = l * l_mm;
  constexpr auto a_commutative = l_mm * l;
  constexpr auto expected = 4000_mm2;

  STATIC_REQUIRE(std::is_same<decltype(a), decltype(a_commutative)>::value);
  STATIC_REQUIRE(std::is_same<std::remove_const<decltype(a)>::type,
                              SI::area_t<int64_t, std::milli>>::value);

  STATIC_REQUIRE(expected == a);
  STATIC_REQUIRE(a == a_commutative);
  STATIC_REQUIRE(a_commutative == a);
}

TEST_CASE(
    "GIVEN a 1 square millimetre WHEN passed to a streaming operator THEN "
    "result is '1mm2'") {
  constexpr auto value = 1_mm2;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1mm2");
}

TEST_CASE(
    "GIVEN a 1  square centimetre WHEN passed to a streaming operator THEN "
    "result is '1cm2'") {
  constexpr auto value = 1_cm2;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1cm2");
}

TEST_CASE(
    "GIVEN a 1 square metre WHEN passed to a streaming operator THEN result is "
    "'1m2'") {
  constexpr auto value = 1_m2;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1m2");
}

TEST_CASE("GIVEN a 1 cubic millimetre WHEN passed to a streaming operator THEN "
          "result is '1mm3'") {
  constexpr auto value = 1_mm3;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1mm3");
}

TEST_CASE(
    "GIVEN a 1  cubic centimetre WHEN passed to a streaming operator THEN "
    "result is '1cm3'") {
  constexpr auto value = 1_cm3;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1cm3");
}

TEST_CASE(
    "GIVEN a 1 cubic metre WHEN passed to a streaming operator THEN result is "
    "'1m3'") {
  constexpr auto value = 1_m3;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1m3");
}

TEST_CASE("GIVEN a string of '1mm2' WHEN streamed into square_milli_metre_t "
          "THEN result "
          "is a value of 1 milli_square metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1mm2";
  SI::square_milli_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mm2);
}

TEST_CASE("GIVEN a string of '1cm2' WHEN streamed into square_centimetre_t "
          "THEN result "
          "is a value of 1 kilo_square metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1cm2";
  SI::square_centi_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_cm2);
}

TEST_CASE(
    "GIVEN a string of '1m2' WHEN streamed into square_metre_t THEN result "
    "is a value of 1 square metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1m2";
  SI::square_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_m2);
}

TEST_CASE("GIVEN a string of '1mm3' WHEN streamed into cubic_milli_metre_t "
          "THEN result "
          "is a value of 1 milli_cubic metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1mm3";
  SI::cubic_milli_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mm3);
}

TEST_CASE("GIVEN a string of '1cm3' WHEN streamed into cubic_centimetre_t "
          "THEN result "
          "is a value of 1 kilo_cubic metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1cm3";
  SI::cubic_centi_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_cm3);
}

TEST_CASE(
    "GIVEN a string of '1m3' WHEN streamed into cubic_metre_t THEN result "
    "is a value of 1 cubic metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1m3";
  SI::cubic_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_m3);
}
