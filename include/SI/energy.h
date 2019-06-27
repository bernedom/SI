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
#include "force.h"
#include "length.h"
#include "pressure.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using energy_t = detail::unit_t<'E', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_joule_t = energy_t<_Type, std::atto>;
template <typename _Type> using femto_joule_t = energy_t<_Type, std::femto>;
template <typename _Type> using pico_joule_t = energy_t<_Type, std::pico>;
template <typename _Type> using nano_joule_t = energy_t<_Type, std::nano>;
template <typename _Type> using micro_joule_t = energy_t<_Type, std::micro>;
template <typename _Type> using milli_joule_t = energy_t<_Type, std::milli>;
template <typename _Type> using joule_t = energy_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_joule_t = energy_t<_Type, std::kilo>;
template <typename _Type> using mega_joule_t = energy_t<_Type, std::mega>;
template <typename _Type> using giga_joule_t = energy_t<_Type, std::giga>;
template <typename _Type> using tera_joule_t = energy_t<_Type, std::tera>;
template <typename _Type> using peta_joule_t = energy_t<_Type, std::peta>;
template <typename _Type> using exa_joule_t = energy_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(energy_t, force_t, length_t)
BUILD_UNIT_FROM_MULTIPLICATION(energy_t, pressure_t, volume_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr atto_joule_t<int64_t> operator""_aJ() {
  return atto_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_joule_t<int64_t> operator""_fJ() {
  return femto_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_joule_t<int64_t> operator""_pJ() {
  return pico_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_joule_t<int64_t> operator""_nJ() {
  return nano_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_joule_t<int64_t> operator""_uJ() {
  return micro_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_joule_t<int64_t> operator""_mJ() {
  return milli_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr joule_t<int64_t> operator""_J() {
  return joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_joule_t<int64_t> operator""_kJ() {
  return kilo_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_joule_t<int64_t> operator""_MJ() {
  return mega_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_joule_t<int64_t> operator""_GJ() {
  return giga_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_joule_t<int64_t> operator""_TJ() {
  return tera_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_joule_t<int64_t> operator""_PJ() {
  return peta_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_joule_t<int64_t> operator""_EJ() {
  return exa_joule_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_joule_t<long double> operator""_aJ(long double value) {
  return atto_joule_t<long double>{value};
}

constexpr femto_joule_t<long double> operator""_fJ(long double value) {
  return femto_joule_t<long double>{value};
}

constexpr pico_joule_t<long double> operator""_pJ(long double value) {
  return pico_joule_t<long double>{value};
}

constexpr nano_joule_t<long double> operator""_nJ(long double value) {
  return nano_joule_t<long double>{value};
}

constexpr micro_joule_t<long double> operator""_uJ(long double value) {
  return micro_joule_t<long double>{value};
}

constexpr milli_joule_t<long double> operator""_mJ(long double value) {
  return milli_joule_t<long double>{value};
}

constexpr joule_t<long double> operator""_J(long double value) {
  return joule_t<long double>{value};
}

constexpr kilo_joule_t<long double> operator""_kJ(long double value) {
  return kilo_joule_t<long double>{value};
}

constexpr mega_joule_t<long double> operator""_MJ(long double value) {
  return mega_joule_t<long double>{value};
}

constexpr giga_joule_t<long double> operator""_GJ(long double value) {
  return giga_joule_t<long double>{value};
}

constexpr tera_joule_t<long double> operator""_TJ(long double value) {
  return tera_joule_t<long double>{value};
}

constexpr peta_joule_t<long double> operator""_PJ(long double value) {
  return peta_joule_t<long double>{value};
}

constexpr exa_joule_t<long double> operator""_EJ(long double value) {
  return exa_joule_t<long double>{value};
}

} // namespace literals
} // namespace SI