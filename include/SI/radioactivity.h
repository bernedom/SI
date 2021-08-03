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
namespace SI {

/// @todo check how to make this the same/an alias of hertz
/// @todo think of how this can be built from 1/T (probably goes along with
/// making it an alias of hertz)
template <typename _type, class _ratio = std::ratio<1>>
using radioactivity_t = detail::unit_t<'A', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_becquerel_t = radioactivity_t<_type, std::atto>;
template <typename _type>
using femto_becquerel_t = radioactivity_t<_type, std::femto>;
template <typename _type>
using pico_becquerel_t = radioactivity_t<_type, std::pico>;
template <typename _type>
using nano_becquerel_t = radioactivity_t<_type, std::nano>;
template <typename _type>
using micro_becquerel_t = radioactivity_t<_type, std::micro>;
template <typename _type>
using milli_becquerel_t = radioactivity_t<_type, std::milli>;
template <typename _type>
using becquerel_t = radioactivity_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_becquerel_t = radioactivity_t<_type, std::kilo>;
template <typename _type>
using mega_becquerel_t = radioactivity_t<_type, std::mega>;
template <typename _type>
using giga_becquerel_t = radioactivity_t<_type, std::giga>;
template <typename _type>
using tera_becquerel_t = radioactivity_t<_type, std::tera>;
template <typename _type>
using peta_becquerel_t = radioactivity_t<_type, std::peta>;
template <typename _type>
using exa_becquerel_t = radioactivity_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'A', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'B', 'q'> {};

template <typename _ratio>
struct unit_symbol<'A', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'B',
                                   'q'> {};

inline namespace literals {
template <char... _digits>
constexpr atto_becquerel_t<int64_t> operator""_aBq() {
  return atto_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr femto_becquerel_t<int64_t> operator""_fBq() {
  return femto_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr pico_becquerel_t<int64_t> operator""_pBq() {
  return pico_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr nano_becquerel_t<int64_t> operator""_nBq() {
  return nano_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr micro_becquerel_t<int64_t> operator""_uBq() {
  return micro_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr milli_becquerel_t<int64_t> operator""_mBq() {
  return milli_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr becquerel_t<int64_t> operator""_Bq() {
  return becquerel_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr kilo_becquerel_t<int64_t> operator""_kBq() {
  return kilo_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr mega_becquerel_t<int64_t> operator""_MBq() {
  return mega_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr giga_becquerel_t<int64_t> operator""_GBq() {
  return giga_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr tera_becquerel_t<int64_t> operator""_TBq() {
  return tera_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr peta_becquerel_t<int64_t> operator""_PBq() {
  return peta_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_becquerel_t<int64_t> operator""_EBq() {
  return exa_becquerel_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
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
