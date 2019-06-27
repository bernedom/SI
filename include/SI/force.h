
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

#include "acceleration.h"
#include "detail/number_parser.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "mass.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_newton_t = force_t<_Type, std::atto>;
template <typename _Type> using femto_newton_t = force_t<_Type, std::femto>;
template <typename _Type> using pico_newton_t = force_t<_Type, std::pico>;
template <typename _Type> using nano_newton_t = force_t<_Type, std::nano>;
template <typename _Type> using micro_newton_t = force_t<_Type, std::micro>;
template <typename _Type> using milli_newton_t = force_t<_Type, std::milli>;
template <typename _Type> using newton_t = force_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_newton_t = force_t<_Type, std::kilo>;
template <typename _Type> using mega_newton_t = force_t<_Type, std::mega>;
template <typename _Type> using giga_newton_t = force_t<_Type, std::giga>;
template <typename _Type> using tera_newton_t = force_t<_Type, std::tera>;
template <typename _Type> using peta_newton_t = force_t<_Type, std::peta>;
template <typename _Type> using exa_newton_t = force_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)
}

inline namespace literals {
template <char... _Digits> constexpr atto_newton_t<int64_t> operator""_aN() {
  return atto_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_newton_t<int64_t> operator""_fN() {
  return femto_newton_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_newton_t<int64_t> operator""_pN() {
  return pico_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_newton_t<int64_t> operator""_nN() {
  return nano_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_newton_t<int64_t> operator""_uN() {
  return micro_newton_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_newton_t<int64_t> operator""_mN() {
  return milli_newton_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr newton_t<int64_t> operator""_N() {
  return newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_newton_t<int64_t> operator""_kN() {
  return kilo_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_newton_t<int64_t> operator""_MN() {
  return mega_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_newton_t<int64_t> operator""_GN() {
  return giga_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_newton_t<int64_t> operator""_TN() {
  return tera_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_newton_t<int64_t> operator""_PN() {
  return peta_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_newton_t<int64_t> operator""_EN() {
  return exa_newton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_newton_t<long double> operator""_aN(long double value) {
  return atto_newton_t<long double>{value};
}

constexpr femto_newton_t<long double> operator""_fN(long double value) {
  return femto_newton_t<long double>{value};
}

constexpr pico_newton_t<long double> operator""_pN(long double value) {
  return pico_newton_t<long double>{value};
}

constexpr nano_newton_t<long double> operator""_nN(long double value) {
  return nano_newton_t<long double>{value};
}

constexpr micro_newton_t<long double> operator""_uN(long double value) {
  return micro_newton_t<long double>{value};
}

constexpr milli_newton_t<long double> operator""_mN(long double value) {
  return milli_newton_t<long double>{value};
}

constexpr newton_t<long double> operator""_N(long double value) {
  return newton_t<long double>{value};
}

constexpr kilo_newton_t<long double> operator""_kN(long double value) {
  return kilo_newton_t<long double>{value};
}

constexpr mega_newton_t<long double> operator""_MN(long double value) {
  return mega_newton_t<long double>{value};
}

constexpr giga_newton_t<long double> operator""_GN(long double value) {
  return giga_newton_t<long double>{value};
}

constexpr tera_newton_t<long double> operator""_TN(long double value) {
  return tera_newton_t<long double>{value};
}

constexpr peta_newton_t<long double> operator""_PN(long double value) {
  return peta_newton_t<long double>{value};
}

constexpr exa_newton_t<long double> operator""_EN(long double value) {
  return exa_newton_t<long double>{value};
}

} // namespace literals
} // namespace SI