#pragma once

#include <limits>

namespace SI::detail::parsing {

/// @tood add assert for numeric overflow

/// struct converting a char digit into an int
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

// interface class for power calculation
template <intmax_t _base, char... _digits>
struct Power : Power_impl<_base, _digits...> {};

template <intmax_t _base> struct Power<_base> {
  static constexpr intmax_t power = 1;
};

// recursive struct that builds the number
template <char _digit, char... _digits> struct Number_impl {
  using digit = Digit<10, _digit>;

  static constexpr intmax_t magnitude = sizeof...(_digits);
  static constexpr intmax_t power = Power<10, _digit, _digits...>::power;

  using recursive_number = Number_impl<_digits...>;
  static constexpr intmax_t value =
      Digit<10, _digit>::value * power + recursive_number::value;
};

// terminating case for variadic template
template <char _digit> struct Number_impl<_digit> {

  static constexpr intmax_t value = Digit<10, _digit>::value;
  static constexpr intmax_t magnitude = 0;
  static constexpr intmax_t power = Power<10>::power;
  static_assert(power == 1, "power should be one");
};

/// interface class for number
template <char... _digits> struct Number : Number_impl<_digits...> {};
} // namespace SI::detail::parsing