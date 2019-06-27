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
#include "time.h"

namespace SI {

/// unit for electric charge 'Q' where Q = T * I
template <typename _Type, typename _Ratio>
using electric_charge_t = detail::unit_t<'Q', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_coulomb_t = electric_charge_t<_Type, std::atto>;
template <typename _Type>
using femto_coulomb_t = electric_charge_t<_Type, std::femto>;
template <typename _Type>
using pico_coulomb_t = electric_charge_t<_Type, std::pico>;
template <typename _Type>
using nano_coulomb_t = electric_charge_t<_Type, std::nano>;
template <typename _Type>
using micro_coulomb_t = electric_charge_t<_Type, std::micro>;
template <typename _Type>
using milli_coulomb_t = electric_charge_t<_Type, std::milli>;
template <typename _Type>
using coulomb_t = electric_charge_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_coulomb_t = electric_charge_t<_Type, std::kilo>;
template <typename _Type>
using mega_coulomb_t = electric_charge_t<_Type, std::mega>;
template <typename _Type>
using giga_coulomb_t = electric_charge_t<_Type, std::giga>;
template <typename _Type>
using tera_coulomb_t = electric_charge_t<_Type, std::tera>;
template <typename _Type>
using peta_coulomb_t = electric_charge_t<_Type, std::peta>;
template <typename _Type>
using exa_coulomb_t = electric_charge_t<_Type, std::exa>;

/// @todo find out why the operators have to be in SI::detail
/// maybe using preceeding :: helps
namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t, time_t)
}

inline namespace literals {

template <char... _Digits> constexpr atto_coulomb_t<int64_t> operator""_aC() {
  return atto_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_coulomb_t<int64_t> operator""_fC() {
  return femto_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_coulomb_t<int64_t> operator""_pC() {
  return pico_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_coulomb_t<int64_t> operator""_nC() {
  return nano_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_coulomb_t<int64_t> operator""_uC() {
  return micro_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_coulomb_t<int64_t> operator""_mC() {
  return milli_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr coulomb_t<int64_t> operator""_C() {
  return coulomb_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_coulomb_t<int64_t> operator""_kC() {
  return kilo_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_coulomb_t<int64_t> operator""_MC() {
  return mega_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_coulomb_t<int64_t> operator""_GC() {
  return giga_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_coulomb_t<int64_t> operator""_TC() {
  return tera_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_coulomb_t<int64_t> operator""_PC() {
  return peta_coulomb_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_coulomb_t<int64_t> operator""_EC() {
  return exa_coulomb_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
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