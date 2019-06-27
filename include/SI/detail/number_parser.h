/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include <cstdint>
#include <limits>

namespace SI::detail::parsing {

/// struct converting a char digit into an int
/// allowed digits are [0-9][a-fA-F][']
template <intmax_t _base, char _Str_digit> struct Digit_impl {
  static_assert((_Str_digit >= '0' && _Str_digit <= '9') ||
                (_Str_digit >= 'a' && _Str_digit <= 'f') ||
                (_Str_digit >= 'A' && _Str_digit <= 'F') || _Str_digit == '\'');

  static_assert(_base >= 2, "minimum representation is binary (base = 2)");
  static_assert(_base < 17, "maximum representation is hex (base == 16)");

  static constexpr bool is_valid_digit = _Str_digit == '\'' ? false : true;
  static constexpr intmax_t value =
      (_Str_digit >= '0' && _Str_digit <= '9')
          ? _Str_digit - '0'
          : (_Str_digit >= 'a' && _Str_digit <= 'f')
                ? 10 + (_Str_digit - 'a')
                : (_Str_digit >= 'A' && _Str_digit <= 'F')
                      ? 10 + (_Str_digit - 'A')
                      : std::numeric_limits<intmax_t>::quiet_NaN();
  static_assert(!is_valid_digit || value < _base, "Digit is valid for base");
};

// Interface class to access Digit
template <intmax_t _base, char _Str_digit>
struct Digit : public Digit_impl<_base, _Str_digit> {};

/// Struct containing a power to a base; used as multiplicator of each position
/// in a number
template <intmax_t _base, char _digit, char... _digits> struct Power_impl {

  using digit = Digit<_base, _digit>;
  using recursive_power = Power_impl<_base, _digits...>;
  static constexpr intmax_t power = digit::is_valid_digit
                                        ? (recursive_power::power * _base)
                                        : recursive_power::power;
};

/// terminating case for power variadic template
template <intmax_t _base, char _digit> struct Power_impl<_base, _digit> {
  static constexpr intmax_t power = 1;
};

/// interface class for power calculation
template <intmax_t _base, char... _digits>
struct Power : Power_impl<_base, _digits...> {};

/// Edge case for _base^0 == 1 s multiplier
template <intmax_t _base> struct Power<_base> {
  static constexpr intmax_t power = 1;
};

template <intmax_t _base, char _digit, char... _digits> struct Magnitude {
  using digit = Digit<_base, _digit>;
  static constexpr intmax_t recursive_magnitude =
      Magnitude<_base, _digits...>::value;
  static constexpr intmax_t value =
      digit::is_valid_digit ? 1 + recursive_magnitude : recursive_magnitude;
};

template <intmax_t _base, char _digit> struct Magnitude<_base, _digit> {
  static constexpr intmax_t value = 0;
};

/// recursive struct that builds the number
template <intmax_t _base, char _digit, char... _digits> struct Number_impl {

  static constexpr intmax_t base = _base;
  using digit = Digit<base, _digit>;
  static constexpr intmax_t magnitude =
      Magnitude<_base, _digit, _digits...>::value;
  static constexpr intmax_t power = Power<base, _digit, _digits...>::power;

  using recursive_number = Number_impl<_base, _digits...>;
  static constexpr intmax_t value =
      recursive_number::value +
      (digit::is_valid_digit ? (digit::value * power) : 0);
  static_assert(!digit::is_valid_digit || value / power == digit::value,
                "integer literal overflows");
};

/// terminating case for variadic template
template <intmax_t _base, char _digit> struct Number_impl<_base, _digit> {

  using digit = Digit<_base, _digit>;
  static_assert(digit::is_valid_digit, "digit is valid");
  static constexpr intmax_t value = digit::value;
  static constexpr intmax_t magnitude = 0;
  static constexpr intmax_t base = _base;
  static constexpr intmax_t power = Power<base>::power;
  static_assert(power == 1, "power should be one");
};

/// interface class for number
template <char... _digits> struct Number : Number_impl<10, _digits...> {};

/// specialisation of Number for hex notation
template <char... _digits>
struct Number<'0', 'x', _digits...> : Number_impl<16, _digits...> {};

/// specialisation of Number for hex notation
template <char... _digits>
struct Number<'0', 'X', _digits...> : Number_impl<16, _digits...> {};

/// specialisation of Number for binary notation
template <char... _digits>
struct Number<'0', 'b', _digits...> : Number_impl<2, _digits...> {};

/// specialisation of Number for binary notation
template <char... _digits>
struct Number<'0', 'B', _digits...> : Number_impl<2, _digits...> {};

/// specialisation of Number for octal notation
template <char... _digits>
struct Number<'0', _digits...> : Number_impl<8, _digits...> {};

} // namespace SI::detail::parsing