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

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"

namespace SI {

template <typename _type, typename _ratio>
using electric_current_t = detail::unit_t<'I', std::ratio<1>, _type, _ratio>;

template <typename _type>
using atto_ampere_t = electric_current_t<_type, std::atto>;
template <typename _type>
using femto_ampere_t = electric_current_t<_type, std::femto>;
template <typename _type>
using pico_ampere_t = electric_current_t<_type, std::pico>;
template <typename _type>
using nano_ampere_t = electric_current_t<_type, std::nano>;
template <typename _type>
using micro_ampere_t = electric_current_t<_type, std::micro>;
template <typename _type>
using milli_ampere_t = electric_current_t<_type, std::milli>;
template <typename _type>
using ampere_t = electric_current_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_ampere_t = electric_current_t<_type, std::kilo>;
template <typename _type>
using mega_ampere_t = electric_current_t<_type, std::mega>;
template <typename _type>
using giga_ampere_t = electric_current_t<_type, std::giga>;
template <typename _type>
using tera_ampere_t = electric_current_t<_type, std::tera>;
template <typename _type>
using peta_ampere_t = electric_current_t<_type, std::peta>;
template <typename _type>
using exa_ampere_t = electric_current_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'I', std::ratio<1>> : SI::detail::unit_symbol_impl<'A'> {};

template <typename _ratio>
struct unit_symbol<'I', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'A'> {};

inline namespace literals {

template <char... _digits> constexpr atto_ampere_t<int64_t> operator""_aA() {
  return atto_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_ampere_t<int64_t> operator""_fA() {
  return femto_ampere_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_ampere_t<int64_t> operator""_pA() {
  return pico_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_ampere_t<int64_t> operator""_nA() {
  return nano_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_ampere_t<int64_t> operator""_uA() {
  return micro_ampere_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_ampere_t<int64_t> operator""_mA() {
  return milli_ampere_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr ampere_t<int64_t> operator""_A() {
  return ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_ampere_t<int64_t> operator""_kA() {
  return kilo_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_ampere_t<int64_t> operator""_MA() {
  return mega_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_ampere_t<int64_t> operator""_GA() {
  return giga_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_ampere_t<int64_t> operator""_TA() {
  return tera_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_ampere_t<int64_t> operator""_PA() {
  return peta_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_ampere_t<int64_t> operator""_EA() {
  return exa_ampere_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
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
