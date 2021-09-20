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

#include "area.h"
#include "detail/number_parser.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"
#include "magnetic_flux.h"

namespace SI {

/// @todo find a way to encapsulate   phi
template <typename _type, class _ratio = std::ratio<1>>
using magnetic_field_t = detail::unit_t<'B', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_tesla_t = magnetic_field_t<_type, std::atto>;
template <typename _type>
using femto_tesla_t = magnetic_field_t<_type, std::femto>;
template <typename _type>
using pico_tesla_t = magnetic_field_t<_type, std::pico>;
template <typename _type>
using nano_tesla_t = magnetic_field_t<_type, std::nano>;
template <typename _type>
using micro_tesla_t = magnetic_field_t<_type, std::micro>;
template <typename _type>
using milli_tesla_t = magnetic_field_t<_type, std::milli>;
template <typename _type>
using tesla_t = magnetic_field_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_tesla_t = magnetic_field_t<_type, std::kilo>;
template <typename _type>
using mega_tesla_t = magnetic_field_t<_type, std::mega>;
template <typename _type>
using giga_tesla_t = magnetic_field_t<_type, std::giga>;
template <typename _type>
using tera_tesla_t = magnetic_field_t<_type, std::tera>;
template <typename _type>
using peta_tesla_t = magnetic_field_t<_type, std::peta>;
template <typename _type> using exa_tesla_t = magnetic_field_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'B', std::ratio<1>> : SI::detail::unit_symbol_impl<'T'> {};

template <typename _ratio>
struct unit_symbol<'B', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'T'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(magnetic_field_t, magnetic_flux_t, area_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_tesla_t<int64_t> operator""_aT() {
  return atto_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_tesla_t<int64_t> operator""_fT() {
  return femto_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_tesla_t<int64_t> operator""_pT() {
  return pico_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_tesla_t<int64_t> operator""_nT() {
  return nano_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_tesla_t<int64_t> operator""_uT() {
  return micro_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_tesla_t<int64_t> operator""_mT() {
  return milli_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tesla_t<int64_t> operator""_T() {
  return tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_tesla_t<int64_t> operator""_kT() {
  return kilo_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_tesla_t<int64_t> operator""_MT() {
  return mega_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_tesla_t<int64_t> operator""_GT() {
  return giga_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_tesla_t<int64_t> operator""_TT() {
  return tera_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_tesla_t<int64_t> operator""_PT() {
  return peta_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_tesla_t<int64_t> operator""_ET() {
  return exa_tesla_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_tesla_t<long double> operator""_aT(long double value) {
  return atto_tesla_t<long double>{value};
}

constexpr femto_tesla_t<long double> operator""_fT(long double value) {
  return femto_tesla_t<long double>{value};
}

constexpr pico_tesla_t<long double> operator""_pT(long double value) {
  return pico_tesla_t<long double>{value};
}

constexpr nano_tesla_t<long double> operator""_nT(long double value) {
  return nano_tesla_t<long double>{value};
}

constexpr micro_tesla_t<long double> operator""_uT(long double value) {
  return micro_tesla_t<long double>{value};
}

constexpr milli_tesla_t<long double> operator""_mT(long double value) {
  return milli_tesla_t<long double>{value};
}

constexpr tesla_t<long double> operator""_T(long double value) {
  return tesla_t<long double>{value};
}

constexpr kilo_tesla_t<long double> operator""_kT(long double value) {
  return kilo_tesla_t<long double>{value};
}

constexpr mega_tesla_t<long double> operator""_MT(long double value) {
  return mega_tesla_t<long double>{value};
}

constexpr giga_tesla_t<long double> operator""_GT(long double value) {
  return giga_tesla_t<long double>{value};
}

constexpr tera_tesla_t<long double> operator""_TT(long double value) {
  return tera_tesla_t<long double>{value};
}

constexpr peta_tesla_t<long double> operator""_PT(long double value) {
  return peta_tesla_t<long double>{value};
}

constexpr exa_tesla_t<long double> operator""_ET(long double value) {
  return exa_tesla_t<long double>{value};
}

} // namespace literals
} // namespace SI
