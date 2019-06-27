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

#include <chrono>
#include <ratio>

#include "detail/number_parser.h"
#include "detail/unit.h"
namespace SI {

namespace detail {
template <char _Exponent, typename _Type, typename _Ratio>
using time_base_t = detail::unit_t<'T', _Exponent, _Type, _Ratio>;
}
template <typename _Type, typename _Ratio>
using time_t = detail::time_base_t<1, _Type, _Ratio>;

template <typename _Type, typename _Ratio>
using time_squared_t = detail::time_base_t<2, _Type, _Ratio>;

template <typename _Type> using atto_seconds_t = time_t<_Type, std::atto>;
template <typename _Type> using femto_seconds_t = time_t<_Type, std::femto>;
template <typename _Type> using pico_seconds_t = time_t<_Type, std::pico>;
template <typename _Type> using nano_seconds_t = time_t<_Type, std::nano>;
template <typename _Type>
using micro_seconds_t = time_t<_Type, std::chrono::microseconds::period>;
template <typename _Type>
using milli_seconds_t = time_t<_Type, std::chrono::milliseconds::period>;
template <typename _Type> using seconds_t = time_t<_Type, std::ratio<1>>;
template <typename _Type>
using minutes_t = time_t<_Type, std::chrono::minutes::period>;
template <typename _Type>
using hours_t = time_t<_Type, std::chrono::hours::period>;

inline namespace literals {

template <char... _Digits> constexpr atto_seconds_t<int64_t> operator""_as() {
  return atto_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_seconds_t<int64_t> operator""_fs() {
  return femto_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_seconds_t<int64_t> operator""_ps() {
  return pico_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_seconds_t<int64_t> operator""_ns() {
  return nano_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr SI::micro_seconds_t<int64_t> operator"" _us() {
  return SI::micro_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr SI::milli_seconds_t<int64_t> operator"" _ms() {
  return SI::milli_seconds_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}
template <char... _Digits> constexpr SI::seconds_t<int64_t> operator"" _s() {
  return SI::seconds_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr SI::minutes_t<int64_t> operator"" _min() {
  return SI::minutes_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr hours_t<int64_t> operator"" _h() {
  return hours_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
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