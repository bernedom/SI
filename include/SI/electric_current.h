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

namespace SI {

template <typename _Type, typename _Ratio>
using electric_current_t = detail::unit_t<'I', 1, _Type, _Ratio>;

template <typename _Type>
using atto_ampere_t = electric_current_t<_Type, std::atto>;
template <typename _Type>
using femto_ampere_t = electric_current_t<_Type, std::femto>;
template <typename _Type>
using pico_ampere_t = electric_current_t<_Type, std::pico>;
template <typename _Type>
using nano_ampere_t = electric_current_t<_Type, std::nano>;
template <typename _Type>
using micro_ampere_t = electric_current_t<_Type, std::micro>;
template <typename _Type>
using milli_ampere_t = electric_current_t<_Type, std::milli>;
template <typename _Type>
using ampere_t = electric_current_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_ampere_t = electric_current_t<_Type, std::kilo>;
template <typename _Type>
using mega_ampere_t = electric_current_t<_Type, std::mega>;
template <typename _Type>
using giga_ampere_t = electric_current_t<_Type, std::giga>;
template <typename _Type>
using tera_ampere_t = electric_current_t<_Type, std::tera>;
template <typename _Type>
using peta_ampere_t = electric_current_t<_Type, std::peta>;
template <typename _Type>
using exa_ampere_t = electric_current_t<_Type, std::exa>;

inline namespace literals {

template <char... _Digits> constexpr atto_ampere_t<int64_t> operator""_aA() {
  return atto_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_ampere_t<int64_t> operator""_fA() {
  return femto_ampere_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_ampere_t<int64_t> operator""_pA() {
  return pico_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_ampere_t<int64_t> operator""_nA() {
  return nano_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_ampere_t<int64_t> operator""_uA() {
  return micro_ampere_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_ampere_t<int64_t> operator""_mA() {
  return milli_ampere_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr ampere_t<int64_t> operator""_A() {
  return ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_ampere_t<int64_t> operator""_kA() {
  return kilo_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_ampere_t<int64_t> operator""_MA() {
  return mega_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_ampere_t<int64_t> operator""_GA() {
  return giga_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_ampere_t<int64_t> operator""_TA() {
  return tera_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_ampere_t<int64_t> operator""_PA() {
  return peta_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_ampere_t<int64_t> operator""_EA() {
  return exa_ampere_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_ampere_t<long double> operator""_aA(long double value) {
  return atto_ampere_t<long double>{value};
}

constexpr femto_ampere_t<long double> operator""_fA(long double value) {
  return femto_ampere_t<long double>{value};
}

constexpr pico_ampere_t<long double> operator""_pA(long double value) {
  return pico_ampere_t<long double>{value};
}

constexpr nano_ampere_t<long double> operator""_nA(long double value) {
  return nano_ampere_t<long double>{value};
}

constexpr micro_ampere_t<long double> operator""_uA(long double value) {
  return micro_ampere_t<long double>{value};
}

constexpr milli_ampere_t<long double> operator""_mA(long double value) {
  return milli_ampere_t<long double>{value};
}

constexpr ampere_t<long double> operator""_A(long double value) {
  return ampere_t<long double>{value};
}

constexpr kilo_ampere_t<long double> operator""_kA(long double value) {
  return kilo_ampere_t<long double>{value};
}

constexpr mega_ampere_t<long double> operator""_MA(long double value) {
  return mega_ampere_t<long double>{value};
}

constexpr giga_ampere_t<long double> operator""_GA(long double value) {
  return giga_ampere_t<long double>{value};
}

constexpr tera_ampere_t<long double> operator""_TA(long double value) {
  return tera_ampere_t<long double>{value};
}

constexpr peta_ampere_t<long double> operator""_PA(long double value) {
  return peta_ampere_t<long double>{value};
}

constexpr exa_ampere_t<long double> operator""_EA(long double value) {
  return exa_ampere_t<long double>{value};
}

} // namespace literals
} // namespace SI