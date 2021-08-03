/**
 * This file is part of "SI" version 2.1.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include <chrono>
#include <ratio>

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"

namespace SI {

namespace detail {
template <typename _exponent, typename _type, typename _ratio>
using time_base_t = detail::unit_t<'T', _exponent, _type, _ratio>;
}
template <typename _type, typename _ratio>
using time_t = detail::time_base_t<std::ratio<1>, _type, _ratio>;

template <typename _type, typename _ratio>
using time_squared_t = detail::time_base_t<std::ratio<2>, _type, _ratio>;

template <typename _type> using atto_seconds_t = time_t<_type, std::atto>;
template <typename _type> using femto_seconds_t = time_t<_type, std::femto>;
template <typename _type> using pico_seconds_t = time_t<_type, std::pico>;
template <typename _type> using nano_seconds_t = time_t<_type, std::nano>;
template <typename _type>
using micro_seconds_t = time_t<_type, std::chrono::microseconds::period>;
template <typename _type>
using milli_seconds_t = time_t<_type, std::chrono::milliseconds::period>;
template <typename _type> using seconds_t = time_t<_type, std::ratio<1>>;
template <typename _type>
using minutes_t = time_t<_type, std::chrono::minutes::period>;
template <typename _type>
using hours_t = time_t<_type, std::chrono::hours::period>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'T', std::ratio<1>> : SI::detail::unit_symbol_impl<'s'> {};

template <>
struct unit_symbol<'T', std::ratio<60, 1>>
    : SI::detail::unit_symbol_impl<'m', 'i', 'n'> {};

template <>
struct unit_symbol<'T', std::ratio<3600, 1>>
    : SI::detail::unit_symbol_impl<'h'> {};

template <typename _ratio>
struct unit_symbol<'T', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   's'> {
  static_assert(std::ratio_less_equal<_ratio, std::ratio<1>>::value,
                "Generic streaming only implemented for ratios <=1");
};

inline namespace literals {

template <char... _digits> constexpr atto_seconds_t<int64_t> operator""_as() {
  return atto_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_seconds_t<int64_t> operator""_fs() {
  return femto_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_seconds_t<int64_t> operator""_ps() {
  return pico_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_seconds_t<int64_t> operator""_ns() {
  return nano_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr SI::micro_seconds_t<int64_t> operator"" _us() {
  return SI::micro_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr SI::milli_seconds_t<int64_t> operator"" _ms() {
  return SI::milli_seconds_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}
template <char... _digits> constexpr SI::seconds_t<int64_t> operator"" _s() {
  return SI::seconds_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr SI::minutes_t<int64_t> operator"" _min() {
  return SI::minutes_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr hours_t<int64_t> operator"" _h() {
  return hours_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_seconds_t<long double> operator""_as(long double value) {
  return atto_seconds_t<long double>{value};
}

constexpr femto_seconds_t<long double> operator""_fs(long double value) {
  return femto_seconds_t<long double>{value};
}

constexpr pico_seconds_t<long double> operator""_ps(long double value) {
  return pico_seconds_t<long double>{value};
}

constexpr nano_seconds_t<long double> operator""_ns(long double value) {
  return nano_seconds_t<long double>{value};
}

constexpr SI::micro_seconds_t<long double> operator"" _us(long double us) {
  return SI::micro_seconds_t<long double>{us};
}

constexpr SI::milli_seconds_t<long double> operator"" _ms(long double ms) {
  return SI::milli_seconds_t<long double>{ms};
}

constexpr SI::seconds_t<long double> operator"" _s(long double s) {
  return SI::seconds_t<long double>{s};
}

constexpr SI::minutes_t<long double> operator"" _min(long double min) {
  return SI::minutes_t<long double>{min};
}

constexpr SI::hours_t<long double> operator"" _h(long double h) {
  return SI::hours_t<long double>{h};
}

} // namespace literals
} // namespace SI
