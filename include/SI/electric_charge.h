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
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"
#include "electric_current.h"
#include "time.h"
namespace SI {

/// unit for electric charge 'Q' where Q = T * I
template <typename _type, typename _ratio>
using electric_charge_t = detail::unit_t<'Q', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_coulomb_t = electric_charge_t<_type, std::atto>;
template <typename _type>
using femto_coulomb_t = electric_charge_t<_type, std::femto>;
template <typename _type>
using pico_coulomb_t = electric_charge_t<_type, std::pico>;
template <typename _type>
using nano_coulomb_t = electric_charge_t<_type, std::nano>;
template <typename _type>
using micro_coulomb_t = electric_charge_t<_type, std::micro>;
template <typename _type>
using milli_coulomb_t = electric_charge_t<_type, std::milli>;
template <typename _type>
using coulomb_t = electric_charge_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_coulomb_t = electric_charge_t<_type, std::kilo>;
template <typename _type>
using mega_coulomb_t = electric_charge_t<_type, std::mega>;
template <typename _type>
using giga_coulomb_t = electric_charge_t<_type, std::giga>;
template <typename _type>
using tera_coulomb_t = electric_charge_t<_type, std::tera>;
template <typename _type>
using peta_coulomb_t = electric_charge_t<_type, std::peta>;
template <typename _type>
using exa_coulomb_t = electric_charge_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'Q', std::ratio<1>> : SI::detail::unit_symbol_impl<'C'> {};

template <typename _ratio>
struct unit_symbol<'Q', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'C'> {};

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t, time_t)
}

inline namespace literals {

template <char... _digits> constexpr atto_coulomb_t<int64_t> operator""_aC() {
  return atto_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_coulomb_t<int64_t> operator""_fC() {
  return femto_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_coulomb_t<int64_t> operator""_pC() {
  return pico_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_coulomb_t<int64_t> operator""_nC() {
  return nano_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_coulomb_t<int64_t> operator""_uC() {
  return micro_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_coulomb_t<int64_t> operator""_mC() {
  return milli_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr coulomb_t<int64_t> operator""_C() {
  return coulomb_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_coulomb_t<int64_t> operator""_kC() {
  return kilo_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_coulomb_t<int64_t> operator""_MC() {
  return mega_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_coulomb_t<int64_t> operator""_GC() {
  return giga_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_coulomb_t<int64_t> operator""_TC() {
  return tera_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_coulomb_t<int64_t> operator""_PC() {
  return peta_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_coulomb_t<int64_t> operator""_EC() {
  return exa_coulomb_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_coulomb_t<long double> operator""_aC(long double value) {
  return atto_coulomb_t<long double>{value};
}

constexpr femto_coulomb_t<long double> operator""_fC(long double value) {
  return femto_coulomb_t<long double>{value};
}

constexpr pico_coulomb_t<long double> operator""_pC(long double value) {
  return pico_coulomb_t<long double>{value};
}

constexpr nano_coulomb_t<long double> operator""_nC(long double value) {
  return nano_coulomb_t<long double>{value};
}

constexpr micro_coulomb_t<long double> operator""_uC(long double value) {
  return micro_coulomb_t<long double>{value};
}

constexpr milli_coulomb_t<long double> operator""_mC(long double value) {
  return milli_coulomb_t<long double>{value};
}

constexpr coulomb_t<long double> operator""_C(long double value) {
  return coulomb_t<long double>{value};
}

constexpr kilo_coulomb_t<long double> operator""_kC(long double value) {
  return kilo_coulomb_t<long double>{value};
}

constexpr mega_coulomb_t<long double> operator""_MC(long double value) {
  return mega_coulomb_t<long double>{value};
}

constexpr giga_coulomb_t<long double> operator""_GC(long double value) {
  return giga_coulomb_t<long double>{value};
}

constexpr tera_coulomb_t<long double> operator""_TC(long double value) {
  return tera_coulomb_t<long double>{value};
}

constexpr peta_coulomb_t<long double> operator""_PC(long double value) {
  return peta_coulomb_t<long double>{value};
}

constexpr exa_coulomb_t<long double> operator""_EC(long double value) {
  return exa_coulomb_t<long double>{value};
}

} // namespace literals
} // namespace SI
