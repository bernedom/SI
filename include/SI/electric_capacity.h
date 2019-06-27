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
#include "electric_charge.h"
#include "electric_potential.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using electric_capacity_t = detail::unit_t<'C', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_farad_t = electric_capacity_t<_Type, std::atto>;
template <typename _Type>
using femto_farad_t = electric_capacity_t<_Type, std::femto>;
template <typename _Type>
using pico_farad_t = electric_capacity_t<_Type, std::pico>;
template <typename _Type>
using nano_farad_t = electric_capacity_t<_Type, std::nano>;
template <typename _Type>
using micro_farad_t = electric_capacity_t<_Type, std::micro>;
template <typename _Type>
using milli_farad_t = electric_capacity_t<_Type, std::milli>;
template <typename _Type>
using farad_t = electric_capacity_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_farad_t = electric_capacity_t<_Type, std::kilo>;
template <typename _Type>
using mega_farad_t = electric_capacity_t<_Type, std::mega>;
template <typename _Type>
using giga_farad_t = electric_capacity_t<_Type, std::giga>;
template <typename _Type>
using tera_farad_t = electric_capacity_t<_Type, std::tera>;
template <typename _Type>
using peta_farad_t = electric_capacity_t<_Type, std::peta>;
template <typename _Type>
using exa_farad_t = electric_capacity_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_capacity_t, electric_charge_t,
                        electric_potential_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr atto_farad_t<int64_t> operator""_aF() {
  return atto_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_farad_t<int64_t> operator""_fF() {
  return femto_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_farad_t<int64_t> operator""_pF() {
  return pico_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_farad_t<int64_t> operator""_nF() {
  return nano_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_farad_t<int64_t> operator""_uF() {
  return micro_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_farad_t<int64_t> operator""_mF() {
  return milli_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr farad_t<int64_t> operator""_F() {
  return farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_farad_t<int64_t> operator""_kF() {
  return kilo_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_farad_t<int64_t> operator""_MF() {
  return mega_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_farad_t<int64_t> operator""_GF() {
  return giga_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_farad_t<int64_t> operator""_TF() {
  return tera_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_farad_t<int64_t> operator""_PF() {
  return peta_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_farad_t<int64_t> operator""_EF() {
  return exa_farad_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_farad_t<long double> operator""_aF(long double value) {
  return atto_farad_t<long double>{value};
}

constexpr femto_farad_t<long double> operator""_fF(long double value) {
  return femto_farad_t<long double>{value};
}

constexpr pico_farad_t<long double> operator""_pF(long double value) {
  return pico_farad_t<long double>{value};
}

constexpr nano_farad_t<long double> operator""_nF(long double value) {
  return nano_farad_t<long double>{value};
}

constexpr micro_farad_t<long double> operator""_uF(long double value) {
  return micro_farad_t<long double>{value};
}

constexpr milli_farad_t<long double> operator""_mF(long double value) {
  return milli_farad_t<long double>{value};
}

constexpr farad_t<long double> operator""_F(long double value) {
  return farad_t<long double>{value};
}

constexpr kilo_farad_t<long double> operator""_kF(long double value) {
  return kilo_farad_t<long double>{value};
}

constexpr mega_farad_t<long double> operator""_MF(long double value) {
  return mega_farad_t<long double>{value};
}

constexpr giga_farad_t<long double> operator""_GF(long double value) {
  return giga_farad_t<long double>{value};
}

constexpr tera_farad_t<long double> operator""_TF(long double value) {
  return tera_farad_t<long double>{value};
}

constexpr peta_farad_t<long double> operator""_PF(long double value) {
  return peta_farad_t<long double>{value};
}

constexpr exa_farad_t<long double> operator""_EF(long double value) {
  return exa_farad_t<long double>{value};
}

} // namespace literals
} // namespace SI