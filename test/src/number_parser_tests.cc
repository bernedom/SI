#include <catch.hpp>

#include <limits>
#include <type_traits>

template <intmax_t _base, char _Str_digit> struct Digit {
  static_assert((_Str_digit >= '0' && _Str_digit <= '9') ||
                (_Str_digit >= 'a' && _Str_digit <= 'f') ||
                (_Str_digit >= 'A' && _Str_digit <= 'F'));

  static_assert(_base > 2);

  static constexpr intmax_t value =
      (_Str_digit >= '0' && _Str_digit <= '9')
          ? _Str_digit - '0'
          : (_Str_digit >= 'a' && _Str_digit <= 'f')
                ? 10 + (_Str_digit - 'a')
                : (_Str_digit >= 'A' && _Str_digit <= 'F')
                      ? 10 + (_Str_digit - 'A')
                      : std::numeric_limits<intmax_t>::max();
  static_assert(value < _base, "Digit is valid for base");
};

template <intmax_t _base, char _digit, char... _digits> struct Power_impl {

  using recursive_power = Power_impl<_base, _digits...>;
  static constexpr intmax_t power = recursive_power::power * _base;
};

// terminating case for power variadic template
template <intmax_t _base, char _digit> struct Power_impl<_base, _digit> {
  static constexpr intmax_t power = 1;
};

template <intmax_t _base, char... _digits>
struct Power : Power_impl<_base, _digits...> {};

template <intmax_t _base> struct Power<_base> {
  static constexpr intmax_t power = 1;
};

template <intmax_t _power, char _digit, char... _digits> struct Number_impl {
  using digit = Digit<10, _digit>;

  using recursive_number = Number_impl<_power, _digits...>;
  static constexpr intmax_t value =
      Digit<10, _digit>::value * _power + recursive_number::value;

  static constexpr intmax_t magnitude = sizeof...(_digits);
  static constexpr intmax_t power = Power<10, _digit, _digits...>::power;
};

// terminating case for variadic template
template <intmax_t _power, char _digit> struct Number_impl<_power, _digit> {
  static_assert(_power == 1, "power should be one");
  static constexpr intmax_t value = Digit<10, _digit>::value;
  static constexpr intmax_t magnitude = 0;
  static constexpr intmax_t power = Power<10>::power;
};

template <char... _digits> struct Number : Number_impl<1, _digits...> {};

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

/*TEST_CASE("GIVEN a two digit string WHEN passed to number structure THEN "
          "stored value is an integer") {
  using number_10 = Number<'1', '0'>;
  static_assert(number_10::value == 10);

  using number_12 = Number<'1', '2'>;
  static_assert(number_12::value == 12);
}*/
