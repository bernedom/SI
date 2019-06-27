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
#include "energy.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using power_t = detail::unit_t<'P', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_watt_t = power_t<_Type, std::atto>;
template <typename _Type> using femto_watt_t = power_t<_Type, std::femto>;
template <typename _Type> using pico_watt_t = power_t<_Type, std::pico>;
template <typename _Type> using nano_watt_t = power_t<_Type, std::nano>;
template <typename _Type> using micro_watt_t = power_t<_Type, std::micro>;
template <typename _Type> using milli_watt_t = power_t<_Type, std::milli>;
template <typename _Type> using watt_t = power_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_watt_t = power_t<_Type, std::kilo>;
template <typename _Type> using mega_watt_t = power_t<_Type, std::mega>;
template <typename _Type> using giga_watt_t = power_t<_Type, std::giga>;
template <typename _Type> using tera_watt_t = power_t<_Type, std::tera>;
template <typename _Type> using peta_watt_t = power_t<_Type, std::peta>;
template <typename _Type> using exa_watt_t = power_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(power_t, energy_t, time_t)
}

inline namespace literals {
template <char... _Digits> constexpr atto_watt_t<int64_t> operator""_aW() {
  return atto_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_watt_t<int64_t> operator""_fW() {
  return femto_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_watt_t<int64_t> operator""_pW() {
  return pico_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_watt_t<int64_t> operator""_nW() {
  return nano_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_watt_t<int64_t> operator""_uW() {
  return micro_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_watt_t<int64_t> operator""_mW() {
  return milli_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr watt_t<int64_t> operator""_W() {
  return watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_watt_t<int64_t> operator""_kW() {
  return kilo_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_watt_t<int64_t> operator""_MW() {
  return mega_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_watt_t<int64_t> operator""_GW() {
  return giga_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_watt_t<int64_t> operator""_TW() {
  return tera_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_watt_t<int64_t> operator""_PW() {
  return peta_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_watt_t<int64_t> operator""_EW() {
  return exa_watt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_watt_t<long double> operator""_aW(long double value) {
  return atto_watt_t<long double>{value};
}

constexpr femto_watt_t<long double> operator""_fW(long double value) {
  return femto_watt_t<long double>{value};
}

constexpr pico_watt_t<long double> operator""_pW(long double value) {
  return pico_watt_t<long double>{value};
}

constexpr nano_watt_t<long double> operator""_nW(long double value) {
  return nano_watt_t<long double>{value};
}

constexpr micro_watt_t<long double> operator""_uW(long double value) {
  return micro_watt_t<long double>{value};
}

constexpr milli_watt_t<long double> operator""_mW(long double value) {
  return milli_watt_t<long double>{value};
}

constexpr watt_t<long double> operator""_W(long double value) {
  return watt_t<long double>{value};
}

constexpr kilo_watt_t<long double> operator""_kW(long double value) {
  return kilo_watt_t<long double>{value};
}

constexpr mega_watt_t<long double> operator""_MW(long double value) {
  return mega_watt_t<long double>{value};
}

constexpr giga_watt_t<long double> operator""_GW(long double value) {
  return giga_watt_t<long double>{value};
}

constexpr tera_watt_t<long double> operator""_TW(long double value) {
  return tera_watt_t<long double>{value};
}

constexpr peta_watt_t<long double> operator""_PW(long double value) {
  return peta_watt_t<long double>{value};
}

constexpr exa_watt_t<long double> operator""_EW(long double value) {
  return exa_watt_t<long double>{value};
}

} // namespace literals
} // namespace SI