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

template <typename _type, class _ratio = std::ratio<1>>
using equivalent_dose_t = detail::unit_t<'H', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_sievert_t = equivalent_dose_t<_type, std::atto>;
template <typename _type>
using femto_sievert_t = equivalent_dose_t<_type, std::femto>;
template <typename _type>
using pico_sievert_t = equivalent_dose_t<_type, std::pico>;
template <typename _type>
using nano_sievert_t = equivalent_dose_t<_type, std::nano>;
template <typename _type>
using micro_sievert_t = equivalent_dose_t<_type, std::micro>;
template <typename _type>
using milli_sievert_t = equivalent_dose_t<_type, std::milli>;
template <typename _type>
using sievert_t = equivalent_dose_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_sievert_t = equivalent_dose_t<_type, std::kilo>;
template <typename _type>
using mega_sievert_t = equivalent_dose_t<_type, std::mega>;
template <typename _type>
using giga_sievert_t = equivalent_dose_t<_type, std::giga>;
template <typename _type>
using tera_sievert_t = equivalent_dose_t<_type, std::tera>;
template <typename _type>
using peta_sievert_t = equivalent_dose_t<_type, std::peta>;
template <typename _type>
using exa_sievert_t = equivalent_dose_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'H', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'S', 'v'> {};

template <typename _ratio>
struct unit_symbol<'H', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'S',
                                   'v'> {};

inline namespace literals {
template <char... _digits> constexpr atto_sievert_t<int64_t> operator""_aSv() {
  return atto_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_sievert_t<int64_t> operator""_fSv() {
  return femto_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_sievert_t<int64_t> operator""_pSv() {
  return pico_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_sievert_t<int64_t> operator""_nSv() {
  return nano_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_sievert_t<int64_t> operator""_uSv() {
  return micro_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_sievert_t<int64_t> operator""_mSv() {
  return milli_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr sievert_t<int64_t> operator""_Sv() {
  return sievert_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_sievert_t<int64_t> operator""_kSv() {
  return kilo_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_sievert_t<int64_t> operator""_MSv() {
  return mega_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_sievert_t<int64_t> operator""_GSv() {
  return giga_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_sievert_t<int64_t> operator""_TSv() {
  return tera_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_sievert_t<int64_t> operator""_PSv() {
  return peta_sievert_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_sievert_t<int64_t> operator""_ESv() {
  return exa_sievert_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_sievert_t<long double> operator""_aSv(long double value) {
  return atto_sievert_t<long double>{value};
}

constexpr femto_sievert_t<long double> operator""_fSv(long double value) {
  return femto_sievert_t<long double>{value};
}

constexpr pico_sievert_t<long double> operator""_pSv(long double value) {
  return pico_sievert_t<long double>{value};
}

constexpr nano_sievert_t<long double> operator""_nSv(long double value) {
  return nano_sievert_t<long double>{value};
}

constexpr micro_sievert_t<long double> operator""_uSv(long double value) {
  return micro_sievert_t<long double>{value};
}

constexpr milli_sievert_t<long double> operator""_mSv(long double value) {
  return milli_sievert_t<long double>{value};
}

constexpr sievert_t<long double> operator""_Sv(long double value) {
  return sievert_t<long double>{value};
}

constexpr kilo_sievert_t<long double> operator""_kSv(long double value) {
  return kilo_sievert_t<long double>{value};
}

constexpr mega_sievert_t<long double> operator""_MSv(long double value) {
  return mega_sievert_t<long double>{value};
}

constexpr giga_sievert_t<long double> operator""_GSv(long double value) {
  return giga_sievert_t<long double>{value};
}

constexpr tera_sievert_t<long double> operator""_TSv(long double value) {
  return tera_sievert_t<long double>{value};
}

constexpr peta_sievert_t<long double> operator""_PSv(long double value) {
  return peta_sievert_t<long double>{value};
}

constexpr exa_sievert_t<long double> operator""_ESv(long double value) {
  return exa_sievert_t<long double>{value};
}

} // namespace literals
} // namespace SI
