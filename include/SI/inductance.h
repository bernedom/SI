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
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "magnetic_flux.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using inductance_t = detail::unit_t<'L', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_henry_t = inductance_t<_Type, std::atto>;
template <typename _Type> using femto_henry_t = inductance_t<_Type, std::femto>;
template <typename _Type> using pico_henry_t = inductance_t<_Type, std::pico>;
template <typename _Type> using nano_henry_t = inductance_t<_Type, std::nano>;
template <typename _Type> using micro_henry_t = inductance_t<_Type, std::micro>;
template <typename _Type> using milli_henry_t = inductance_t<_Type, std::milli>;
template <typename _Type> using henry_t = inductance_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_henry_t = inductance_t<_Type, std::kilo>;
template <typename _Type> using mega_henry_t = inductance_t<_Type, std::mega>;
template <typename _Type> using giga_henry_t = inductance_t<_Type, std::giga>;
template <typename _Type> using tera_henry_t = inductance_t<_Type, std::tera>;
template <typename _Type> using peta_henry_t = inductance_t<_Type, std::peta>;
template <typename _Type> using exa_henry_t = inductance_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(inductance_t, magnetic_flux_t, electric_current_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr atto_henry_t<int64_t> operator""_aH() {
  return atto_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_henry_t<int64_t> operator""_fH() {
  return femto_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_henry_t<int64_t> operator""_pH() {
  return pico_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_henry_t<int64_t> operator""_nH() {
  return nano_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_henry_t<int64_t> operator""_uH() {
  return micro_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_henry_t<int64_t> operator""_mH() {
  return milli_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr henry_t<int64_t> operator""_H() {
  return henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_henry_t<int64_t> operator""_kH() {
  return kilo_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_henry_t<int64_t> operator""_MH() {
  return mega_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_henry_t<int64_t> operator""_GH() {
  return giga_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_henry_t<int64_t> operator""_TH() {
  return tera_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_henry_t<int64_t> operator""_PH() {
  return peta_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_henry_t<int64_t> operator""_EH() {
  return exa_henry_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_henry_t<long double> operator""_aH(long double value) {
  return atto_henry_t<long double>{value};
}

constexpr femto_henry_t<long double> operator""_fH(long double value) {
  return femto_henry_t<long double>{value};
}

constexpr pico_henry_t<long double> operator""_pH(long double value) {
  return pico_henry_t<long double>{value};
}

constexpr nano_henry_t<long double> operator""_nH(long double value) {
  return nano_henry_t<long double>{value};
}

constexpr micro_henry_t<long double> operator""_uH(long double value) {
  return micro_henry_t<long double>{value};
}

constexpr milli_henry_t<long double> operator""_mH(long double value) {
  return milli_henry_t<long double>{value};
}

constexpr henry_t<long double> operator""_H(long double value) {
  return henry_t<long double>{value};
}

constexpr kilo_henry_t<long double> operator""_kH(long double value) {
  return kilo_henry_t<long double>{value};
}

constexpr mega_henry_t<long double> operator""_MH(long double value) {
  return mega_henry_t<long double>{value};
}

constexpr giga_henry_t<long double> operator""_GH(long double value) {
  return giga_henry_t<long double>{value};
}

constexpr tera_henry_t<long double> operator""_TH(long double value) {
  return tera_henry_t<long double>{value};
}

constexpr peta_henry_t<long double> operator""_PH(long double value) {
  return peta_henry_t<long double>{value};
}

constexpr exa_henry_t<long double> operator""_EH(long double value) {
  return exa_henry_t<long double>{value};
}

} // namespace literals
} // namespace SI