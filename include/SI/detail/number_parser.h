/**
 * This file is part of "SI" version 2.5.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling physical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
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
template <std::intmax_t _base, char _str_digit> struct Digit_impl {
  static_assert((_str_digit >= '0' && _str_digit <= '9') ||
                (_str_digit >= 'a' && _str_digit <= 'f') ||
                (_str_digit >= 'A' && _str_digit <= 'F') || _str_digit == '\'');

  static_assert(_base >= 2, "minimum representation is binary (base = 2)");
  static_assert(_base < 17, "maximum representation is hex (base == 16)");

  static constexpr bool is_valid_digit = _str_digit == '\'' ? false : true;
  static constexpr std::intmax_t value =
      (_str_digit >= '0' && _str_digit <= '9')   ? _str_digit - '0'
      : (_str_digit >= 'a' && _str_digit <= 'f') ? 10 + (_str_digit - 'a')
      : (_str_digit >= 'A' && _str_digit <= 'F')
          ? 10 + (_str_digit - 'A')
          : std::numeric_limits<std::intmax_t>::quiet_NaN();
  static_assert(!is_valid_digit || value < _base, "Digit is valid for base");
};

// Interface class to access Digit
template <std::intmax_t _base, char _str_digit>
struct Digit : public Digit_impl<_base, _str_digit> {};

/// Struct containing a power to a base; used as multiplicator of each position
/// in a number
template <std::intmax_t _base, char _digit, char... _digits> struct Power_impl {

  using digit = Digit<_base, _digit>;
  using recursive_power = Power_impl<_base, _digits...>;
  static constexpr std::intmax_t power = digit::is_valid_digit
                                             ? (recursive_power::power * _base)
                                             : recursive_power::power;
};

/// terminating case for power variadic template
template <std::intmax_t _base, char _digit> struct Power_impl<_base, _digit> {
  static constexpr std::intmax_t power = 1;
};

/// interface class for power calculation
template <std::intmax_t _base, char... _digits>
struct Power : Power_impl<_base, _digits...> {};

/// Edge case for _base^0 == 1 s multiplier
template <std::intmax_t _base> struct Power<_base> {
  static constexpr std::intmax_t power = 1;
};

template <std::intmax_t _base, char _digit, char... _digits> struct Magnitude {
  using digit = Digit<_base, _digit>;
  static constexpr std::intmax_t recursive_magnitude =
      Magnitude<_base, _digits...>::value;
  static constexpr std::intmax_t value =
      digit::is_valid_digit ? 1 + recursive_magnitude : recursive_magnitude;
};

template <std::intmax_t _base, char _digit> struct Magnitude<_base, _digit> {
  static constexpr std::intmax_t value = 0;
};

/// recursive struct that builds the number
template <std::intmax_t _base, char _digit, char... _digits>
struct Number_impl {

  static constexpr std::intmax_t base = _base;
  using digit = Digit<base, _digit>;
  static constexpr std::intmax_t magnitude =
      Magnitude<_base, _digit, _digits...>::value;
  static constexpr std::intmax_t power = Power<base, _digit, _digits...>::power;

  using recursive_number = Number_impl<_base, _digits...>;
  static constexpr std::intmax_t value =
      recursive_number::value +
      (digit::is_valid_digit ? (digit::value * power) : 0);
  static_assert(!digit::is_valid_digit || value / power == digit::value,
                "integer literal overflows");
};

/// terminating case for variadic template
template <std::intmax_t _base, char _digit> struct Number_impl<_base, _digit> {

  using digit = Digit<_base, _digit>;
  static_assert(digit::is_valid_digit, "digit is valid");
  static constexpr std::intmax_t value = digit::value;
  static constexpr std::intmax_t magnitude = 0;
  static constexpr std::intmax_t base = _base;
  static constexpr std::intmax_t power = Power<base>::power;
  static_assert(power == 1, "power should be one");
};

/// interface class for number
template <char... _digits> struct Number : Number_impl<10, _digits...> {};

/// specialization of Number for hex notation
template <char... _digits>
struct Number<'0', 'x', _digits...> : Number_impl<16, _digits...> {};

/// specialization of Number for hex notation
template <char... _digits>
struct Number<'0', 'X', _digits...> : Number_impl<16, _digits...> {};

/// specialization of Number for binary notation
template <char... _digits>
struct Number<'0', 'b', _digits...> : Number_impl<2, _digits...> {};

/// specialization of Number for binary notation
template <char... _digits>
struct Number<'0', 'B', _digits...> : Number_impl<2, _digits...> {};

/// specialization of Number for octal notation
template <char... _digits>
struct Number<'0', _digits...> : Number_impl<8, _digits...> {};

} // namespace SI::detail::parsing
