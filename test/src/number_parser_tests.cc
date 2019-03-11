#include <catch.hpp>

#include <SI/detail/number_parser.h>

using namespace SI::detail::parsing;

TEST_CASE("GIVEN a numeric value as string WHEN passed to a digit "
          "structure THEN "
          "stored value is an integer") {
  using digit_0 = Digit<10, '0'>;
  static_assert(digit_0::value == 0);

  using digit_9 = Digit<10, '9'>;
  static_assert(digit_9::value == 9);
}

TEST_CASE("GIVEN a hexadeciamal alphanumeric value as String WHEN passed to a "
          "digit structure THEN stored value is the corresponding integer") {
  using digit_a = Digit<16, 'a'>;
  static_assert(digit_a::value == 10);

  using digit_A = Digit<16, 'A'>;
  static_assert(digit_A::value == 10);

  using digit_f = Digit<16, 'f'>;
  static_assert(digit_f::value == 15);

  using digit_F = Digit<16, 'F'>;
  static_assert(digit_F::value == 15);
}

TEST_CASE(
    "GIVEN a single digit string WHEN passed to number structure THEN stored "
    "value is an integer") {
  using number_1 = Number<'1'>;
  static_assert(number_1::value == 1);

  using number_9 = Number<'9'>;
  static_assert(number_9::value == 9);
}

TEST_CASE("GIVEN a single digit string WHEN passed to number structure THEN "
          "magnitude is 1 ") {
  using number_1 = Number<'1'>;
  static_assert(number_1::magnitude == 0);

  using number_9 = Number<'9'>;
  static_assert(number_9::magnitude == 0);
}

TEST_CASE("GIVEN a single digit string WHEN passed to number structure THEN "
          "power is 10^0 (1) ") {
  using number_1 = Number<'1'>;
  static_assert(number_1::power == 1);

  using number_9 = Number<'9'>;
  static_assert(number_9::power == 1);
}

TEST_CASE("GIVEN a multiple digit string WHEN passed to number structure THEN "
          "magnitude is number of arguments - 1") {
  using number_10 = Number<'1', '0'>;
  static_assert(number_10::magnitude == 1);

  using number_100 = Number<'1', '0', '0'>;
  static_assert(number_100::magnitude == 2);
}

TEST_CASE("GIVEN a multiple digit string WHEN passed to number structure THEN"
          "power is base^magnitude") {
  using number_10 = Number<'1', '0'>;
  static_assert(number_10::power == 10);

  using number_100 = Number<'1', '0', '0'>;
  static_assert(number_100::power == 10 * 10);
}

TEST_CASE("GIVEN a two digit string WHEN passed to number structure THEN "
          "stored value is an integer") {
  using number_10 = Number<'1', '0'>;
  static_assert(number_10::value == 10);

  using number_12 = Number<'1', '2'>;
  static_assert(number_12::value == 12);
}

TEST_CASE("GIVEN a three digit string WHEN passed to number structure THEN "
          "stored value is an integer") {
  using number_101 = Number<'1', '0', '1'>;
  static_assert(number_101::value == 101);

  using number_123 = Number<'1', '2', '3'>;
  static_assert(number_123::value == 123);
}

TEST_CASE("GIVEN a single digit number WHEN passed to power THEN power is "
          "base^0 == 1") {
  using power = Power<10, '1'>;
  static_assert(power::power == 1);

  using power_5 = Power<5, '1'>;
  static_assert(power_5::power == 1);
}

TEST_CASE("GIVEN a number with two digits WHEN passed to power THEN power is "
          "base^1") {
  using power = Power<10, '1', '2'>;
  static_assert(power::power == 10);

  using power_2 = Power<2, '1', '2'>;
  static_assert(power_2::power == 2);
}

TEST_CASE("GIVEN a number with two digits WHEN passed to power THEN power is "
          "base^2") {
  using power = Power<10, '1', '2', '3'>;
  static_assert(power::power == 10 * 10);

  using power_2 = Power<2, '1', '2', '3'>;
  static_assert(power_2::power == 2 * 2);
}

/// @todo test parsing of hex number 0x...
/// @todo test parsing of binary number 0b...
/// @todo test parsing of oct number 0... (leading 0)
/// @todo test parinsg of digit separator '
