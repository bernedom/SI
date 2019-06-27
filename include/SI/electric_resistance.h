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
#include "electric_potential.h"

namespace SI {
/// @todo find a way to use Ohm as dimension symbol
template <typename _Type, class _Ratio = std::ratio<1>>
using electric_resistance_t = detail::unit_t<'O', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_ohm_t = electric_resistance_t<_Type, std::atto>;
template <typename _Type>
using femto_ohm_t = electric_resistance_t<_Type, std::femto>;
template <typename _Type>
using pico_ohm_t = electric_resistance_t<_Type, std::pico>;
template <typename _Type>
using nano_ohm_t = electric_resistance_t<_Type, std::nano>;
template <typename _Type>
using micro_ohm_t = electric_resistance_t<_Type, std::micro>;
template <typename _Type>
using milli_ohm_t = electric_resistance_t<_Type, std::milli>;
template <typename _Type>
using ohm_t = electric_resistance_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_ohm_t = electric_resistance_t<_Type, std::kilo>;
template <typename _Type>
using mega_ohm_t = electric_resistance_t<_Type, std::mega>;
template <typename _Type>
using giga_ohm_t = electric_resistance_t<_Type, std::giga>;
template <typename _Type>
using tera_ohm_t = electric_resistance_t<_Type, std::tera>;
template <typename _Type>
using peta_ohm_t = electric_resistance_t<_Type, std::peta>;
template <typename _Type>
using exa_ohm_t = electric_resistance_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_resistance_t, electric_potential_t,
                        electric_current_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr atto_ohm_t<int64_t> operator""_aOhm() {
  return atto_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_ohm_t<int64_t> operator""_fOhm() {
  return femto_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_ohm_t<int64_t> operator""_pOhm() {
  return pico_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_ohm_t<int64_t> operator""_nOhm() {
  return nano_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_ohm_t<int64_t> operator""_uOhm() {
  return micro_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_ohm_t<int64_t> operator""_mOhm() {
  return milli_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr ohm_t<int64_t> operator""_Ohm() {
  return ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_ohm_t<int64_t> operator""_kOhm() {
  return kilo_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_ohm_t<int64_t> operator""_MOhm() {
  return mega_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_ohm_t<int64_t> operator""_GOhm() {
  return giga_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_ohm_t<int64_t> operator""_TOhm() {
  return tera_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_ohm_t<int64_t> operator""_POhm() {
  return peta_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_ohm_t<int64_t> operator""_EOhm() {
  return exa_ohm_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_ohm_t<long double> operator""_aOhm(long double value) {
  return atto_ohm_t<long double>{value};
}

constexpr femto_ohm_t<long double> operator""_fOhm(long double value) {
  return femto_ohm_t<long double>{value};
}

constexpr pico_ohm_t<long double> operator""_pOhm(long double value) {
  return pico_ohm_t<long double>{value};
}

constexpr nano_ohm_t<long double> operator""_nOhm(long double value) {
  return nano_ohm_t<long double>{value};
}

constexpr micro_ohm_t<long double> operator""_uOhm(long double value) {
  return micro_ohm_t<long double>{value};
}

constexpr milli_ohm_t<long double> operator""_mOhm(long double value) {
  return milli_ohm_t<long double>{value};
}

constexpr ohm_t<long double> operator""_Ohm(long double value) {
  return ohm_t<long double>{value};
}

constexpr kilo_ohm_t<long double> operator""_kOhm(long double value) {
  return kilo_ohm_t<long double>{value};
}

constexpr mega_ohm_t<long double> operator""_MOhm(long double value) {
  return mega_ohm_t<long double>{value};
}

constexpr giga_ohm_t<long double> operator""_GOhm(long double value) {
  return giga_ohm_t<long double>{value};
}

constexpr tera_ohm_t<long double> operator""_TOhm(long double value) {
  return tera_ohm_t<long double>{value};
}

constexpr peta_ohm_t<long double> operator""_POhm(long double value) {
  return peta_ohm_t<long double>{value};
}

constexpr exa_ohm_t<long double> operator""_EOhm(long double value) {
  return exa_ohm_t<long double>{value};
}

} // namespace literals
} // namespace SI