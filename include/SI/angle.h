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

#include "detail/number_parser.h"
#include "detail/unit.h"

/// todo add rad and sr as literal operators

namespace SI {
/// Type for angle (which should be buildable from m/m (sin/cos))
template <typename _Type, typename _Ratio>
using angle_t = detail::unit_t<'r', 1, _Type, _Ratio>;

template <typename _Type> using atto_radiant_t = angle_t<_Type, std::atto>;
template <typename _Type> using femto_radiant_t = angle_t<_Type, std::femto>;
template <typename _Type> using pico_radiant_t = angle_t<_Type, std::pico>;
template <typename _Type> using nano_radiant_t = angle_t<_Type, std::nano>;
template <typename _Type> using micro_radiant_t = angle_t<_Type, std::micro>;
template <typename _Type> using milli_radiant_t = angle_t<_Type, std::milli>;
template <typename _Type> using radiant_t = angle_t<_Type, std::ratio<1>>;

inline namespace literals {

template <char... _Digits> constexpr atto_radiant_t<int64_t> operator""_arad() {
  return atto_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr femto_radiant_t<int64_t> operator""_frad() {
  return femto_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_radiant_t<int64_t> operator""_prad() {
  return pico_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_radiant_t<int64_t> operator""_nrad() {
  return nano_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr micro_radiant_t<int64_t> operator""_urad() {
  return micro_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr milli_radiant_t<int64_t> operator""_mrad() {
  return milli_radiant_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr radiant_t<int64_t> operator""_rad() {
  return radiant_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_radiant_t<long double> operator""_arad(long double value) {
  return atto_radiant_t<long double>{value};
}

constexpr femto_radiant_t<long double> operator""_frad(long double value) {
  return femto_radiant_t<long double>{value};
}

constexpr pico_radiant_t<long double> operator""_prad(long double value) {
  return pico_radiant_t<long double>{value};
}

constexpr nano_radiant_t<long double> operator""_nrad(long double value) {
  return nano_radiant_t<long double>{value};
}

constexpr micro_radiant_t<long double> operator""_urad(long double value) {
  return micro_radiant_t<long double>{value};
}

constexpr milli_radiant_t<long double> operator""_mrad(long double value) {
  return milli_radiant_t<long double>{value};
}

constexpr radiant_t<long double> operator""_rad(long double value) {
  return radiant_t<long double>{value};
}

} // namespace literals

} // namespace SI