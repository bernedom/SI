#include <catch.hpp>

#include <SI/detail/number_parser.h>

using namespace SI::detail::parsing;

TEST_CASE("GIVEN a numeric value as string WHEN passed to a digit "
          "structure THEN "
          "stored value is an integer") {
  using digit_0 = Digit<10, '0'>;
  STATIC_REQUIRE(digit_0::value == 0);

  using digit_9 = Digit<10, '9'>;
  STATIC_REQUIRE(digit_9::value == 9);

  STATIC_REQUIRE(digit_9::is_valid_digit);
}

TEST_CASE("GIVEN a hexadeciamal alphanumeric value as String WHEN passed to a "
          "digit structure THEN stored value is the corresponding integer") {
  using digit_a = Digit<16, 'a'>;
  STATIC_REQUIRE(digit_a::value == 10);

  using digit_A = Digit<16, 'A'>;
  STATIC_REQUIRE(digit_A::value == 10);

  using digit_f = Digit<16, 'f'>;
  STATIC_REQUIRE(digit_f::value == 15);

  using digit_F = Digit<16, 'F'>;
  STATIC_REQUIRE(digit_F::value == 15);
}

TEST_CASE(
    "GIVEN a digit separator WHEN passed to Digit THEN digit is not valid") {
  using digit = Digit<10, '\''>;
  STATIC_REQUIRE(digit::is_valid_digit == false);
}

TEST_CASE(
    "GIVEN a single digit string WHEN passed to number structure THEN stored "
    "value is an integer") {
  using number_1 = Number<'1'>;
  STATIC_REQUIRE(number_1::value == 1);

  using number_9 = Number<'9'>;
  STATIC_REQUIRE(number_9::value == 9);
}

TEST_CASE("GIVEN a single digit string WHEN passed to number structure THEN "
          "magnitude is 0 ") {
  using number_1 = Number<'1'>;
  STATIC_REQUIRE(number_1::magnitude == 0);

  using number_9 = Number<'9'>;
  STATIC_REQUIRE(number_9::magnitude == 0);
}

TEST_CASE("GIVEN a single digit string WHEN passed to number structure THEN "
          "power is 10^0 (1) ") {
  using number_1 = Number<'1'>;
  STATIC_REQUIRE(number_1::power == 1);

  using number_9 = Number<'9'>;
  STATIC_REQUIRE(number_9::power == 1);
}

TEST_CASE("GIVEN a single digit string AND string is prefixed WHEN "
          "passed to number structure THEN magnitude is 0") {
  using number_1hex = Number<'0', 'x', '1'>;
  STATIC_REQUIRE(number_1hex::magnitude == 0);

  using number_1HEX = Number<'0', 'X', '1'>;
  STATIC_REQUIRE(number_1HEX::magnitude == 0);

  using number_1bin = Number<'0', 'b', '1'>;
  STATIC_REQUIRE(number_1bin::magnitude == 0);

  using number_1BIN = Number<'0', 'B', '1'>;
  STATIC_REQUIRE(number_1BIN::magnitude == 0);

  using number_1oct = Number<'0', '1'>;
  STATIC_REQUIRE(number_1oct::magnitude == 0);
}

TEST_CASE("GIVEN a multiple digit string AND string contains no special "
          "characters WHEN passed to number structure THEN "
          "magnitude is number of arguments - 1") {
  using number_10 = Number<'1', '0'>;
  STATIC_REQUIRE(number_10::magnitude == 1);

  using number_100 = Number<'1', '0', '0'>;
  STATIC_REQUIRE(number_100::magnitude == 2);
}

TEST_CASE("GIVEN a multiple digit string AND string contains no prefix AND "
          "string contains one digit separator WHEN passed to number struct "
          "THEN magnitude is number of arguments -2") {

  using number_10 = Number<'1', '\'', '0'>;
  STATIC_REQUIRE(number_10::magnitude == 1);

  using number_100 = Number<'1', '0', '\'', '0'>;
  STATIC_REQUIRE(number_100::magnitude == 2);
}

TEST_CASE("GIVEN a multiple digit string AND string contains no prefix AND "
          "string contains two digit separator WHEN passed to number struct "
          "THEN magnitude is number of arguments -3") {

  using number_100 = Number<'1', '\'', '0', '\'', '0'>;
  STATIC_REQUIRE(number_100::magnitude == 2);
}

TEST_CASE("GIVEN a multiple digit string WHEN passed to number structure THEN"
          "power is base^magnitude") {
  using number_10 = Number<'1', '0'>;
  STATIC_REQUIRE(number_10::power == 10);

  using number_100 = Number<'1', '0', '0'>;
  STATIC_REQUIRE(number_100::power == 10 * 10);
}

TEST_CASE("GIVEN a two digit string WHEN passed to number structure THEN "
          "stored value is an integer") {
  using number_10 = Number<'1', '0'>;
  STATIC_REQUIRE(number_10::value == 10);

  using number_12 = Number<'1', '2'>;
  STATIC_REQUIRE(number_12::value == 12);
}

TEST_CASE("GIVEN a three digit string WHEN passed to number structure THEN "
          "stored value is an integer") {
  using number_101 = Number<'1', '0', '1'>;
  STATIC_REQUIRE(number_101::value == 101);

  using number_123 = Number<'1', '2', '3'>;
  STATIC_REQUIRE(number_123::value == 123);
}

TEST_CASE("GIVEN a single digit number WHEN passed to power THEN power is "
          "base^0 == 1") {
  using power = Power<10, '1'>;
  STATIC_REQUIRE(power::power == 1);

  using power_5 = Power<5, '1'>;
  STATIC_REQUIRE(power_5::power == 1);
}

TEST_CASE("GIVEN a number with two digits WHEN passed to power THEN power is "
          "base^1") {
  using power = Power<10, '1', '2'>;
  STATIC_REQUIRE(power::power == 10);

  using power_2 = Power<2, '1', '1'>;
  STATIC_REQUIRE(power_2::power == 2);
}

TEST_CASE("GIVEN a number with two digits WHEN passed to power THEN power is "
          "base^2") {
  using power = Power<10, '1', '2', '3'>;
  STATIC_REQUIRE(power::power == 10 * 10);

  using power_2 = Power<2, '1', '1', '1'>;
  STATIC_REQUIRE(power_2::power == 2 * 2);
}

TEST_CASE("GIVEN a number WHEN passed with prefix 0x THEN base is 16") {
  using number = Number<'0', 'x', '1'>;
  STATIC_REQUIRE(number::base == 16);

  using number_cap = Number<'0', 'X', '1'>;
  STATIC_REQUIRE(number_cap::base == 16);
}

TEST_CASE("GIVEN a multidigit number WHEN passed with prefix 0x THEN base is "
          "16 AND result is caluculated accordingly") {
  using number = Number<'0', 'x', '1', '0'>;
  STATIC_REQUIRE(number::value == 0x10);

  using number_FF = Number<'0', 'X', 'F', 'F'>;
  STATIC_REQUIRE(number_FF::value == 0XFF);
}

TEST_CASE("GIVEN a number WHEN passed with prefix 0b THEN base is 2") {
  using number = Number<'0', 'b', '1'>;
  STATIC_REQUIRE(number::base == 2);

  using number_cap = Number<'0', 'B', '1'>;
  STATIC_REQUIRE(number_cap::base == 2);
}

TEST_CASE("GIVEN a multidigit number WHEN passed with prefix 0x THEN base is "
          "2 AND result is caluculated accordingly") {
  using number = Number<'0', 'b', '1', '0'>;
  STATIC_REQUIRE(number::value == 0b10);

  using number_11 = Number<'0', 'B', '1', '1'>;
  STATIC_REQUIRE(number_11::value == 0B11);
}

TEST_CASE("GIVEN a number WHEN passed with prefix 0 THEN base is 8") {
  using number = Number<'0', '1'>;
  STATIC_REQUIRE(number::base == 8);
}

TEST_CASE("GIVEN a multidigit number WHEN passed with prefix 0 THEN base is "
          "8 AND result is caluculated accordingly") {
  using number = Number<'0', '1', '0'>;
  STATIC_REQUIRE(number::value == 010);

  using number_77 = Number<'0', '7', '7'>;
  STATIC_REQUIRE(number_77::value == 077);
}

TEST_CASE("GIVEN A multidigit number AND the number contains a digit separator"
          "WHEN passed to digit separator THEN digit separator is ignored") {

  using number = Number<'1', '2', '\'', '3'>;
  STATIC_REQUIRE(number::value == 123);
}

TEST_CASE("GIVEN A multidigit number AND the number contains multiple digit "
          "separators"
          "WHEN passed to digit separator THEN digit separator is ignored") {

  using number = Number<'1', '\'', '2', '\'', '4'>;
  STATIC_REQUIRE(number::value == 124);
}
