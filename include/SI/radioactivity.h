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

namespace SI {

/// @todo check how to make this the same/an alias of hertz
template <typename _Type, class _Ratio = std::ratio<1>>
using radioactivity_t = detail::unit_t<'A', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_becquerel_t = radioactivity_t<_Type, std::atto>;
template <typename _Type>
using femto_becquerel_t = radioactivity_t<_Type, std::femto>;
template <typename _Type>
using pico_becquerel_t = radioactivity_t<_Type, std::pico>;
template <typename _Type>
using nano_becquerel_t = radioactivity_t<_Type, std::nano>;
template <typename _Type>
using micro_becquerel_t = radioactivity_t<_Type, std::micro>;
template <typename _Type>
using milli_becquerel_t = radioactivity_t<_Type, std::milli>;
template <typename _Type>
using becquerel_t = radioactivity_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_becquerel_t = radioactivity_t<_Type, std::kilo>;
template <typename _Type>
using mega_becquerel_t = radioactivity_t<_Type, std::mega>;
template <typename _Type>
using giga_becquerel_t = radioactivity_t<_Type, std::giga>;
template <typename _Type>
using tera_becquerel_t = radioactivity_t<_Type, std::tera>;
template <typename _Type>
using peta_becquerel_t = radioactivity_t<_Type, std::peta>;
template <typename _Type>
using exa_becquerel_t = radioactivity_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits>
constexpr atto_becquerel_t<int64_t> operator""_aBq() {
  return atto_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr femto_becquerel_t<int64_t> operator""_fBq() {
  return femto_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr pico_becquerel_t<int64_t> operator""_pBq() {
  return pico_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr nano_becquerel_t<int64_t> operator""_nBq() {
  return nano_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr micro_becquerel_t<int64_t> operator""_uBq() {
  return micro_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr milli_becquerel_t<int64_t> operator""_mBq() {
  return milli_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr becquerel_t<int64_t> operator""_Bq() {
  return becquerel_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr kilo_becquerel_t<int64_t> operator""_kBq() {
  return kilo_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr mega_becquerel_t<int64_t> operator""_MBq() {
  return mega_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr giga_becquerel_t<int64_t> operator""_GBq() {
  return giga_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr tera_becquerel_t<int64_t> operator""_TBq() {
  return tera_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits>
constexpr peta_becquerel_t<int64_t> operator""_PBq() {
  return peta_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_becquerel_t<int64_t> operator""_EBq() {
  return exa_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_becquerel_t<long double> operator""_aBq(long double value) {
  return atto_becquerel_t<long double>{value};
}

constexpr femto_becquerel_t<long double> operator""_fBq(long double value) {
  return femto_becquerel_t<long double>{value};
}

constexpr pico_becquerel_t<long double> operator""_pBq(long double value) {
  return pico_becquerel_t<long double>{value};
}

constexpr nano_becquerel_t<long double> operator""_nBq(long double value) {
  return nano_becquerel_t<long double>{value};
}

constexpr micro_becquerel_t<long double> operator""_uBq(long double value) {
  return micro_becquerel_t<long double>{value};
}

constexpr milli_becquerel_t<long double> operator""_mBq(long double value) {
  return milli_becquerel_t<long double>{value};
}

constexpr becquerel_t<long double> operator""_Bq(long double value) {
  return becquerel_t<long double>{value};
}

constexpr kilo_becquerel_t<long double> operator""_kBq(long double value) {
  return kilo_becquerel_t<long double>{value};
}

constexpr mega_becquerel_t<long double> operator""_MBq(long double value) {
  return mega_becquerel_t<long double>{value};
}

constexpr giga_becquerel_t<long double> operator""_GBq(long double value) {
  return giga_becquerel_t<long double>{value};
}

constexpr tera_becquerel_t<long double> operator""_TBq(long double value) {
  return tera_becquerel_t<long double>{value};
}

constexpr peta_becquerel_t<long double> operator""_PBq(long double value) {
  return peta_becquerel_t<long double>{value};
}

constexpr exa_becquerel_t<long double> operator""_EBq(long double value) {
  return exa_becquerel_t<long double>{value};
}

} // namespace literals
} // namespace SI
