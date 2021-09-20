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
#include "substance.h"
#include "time.h"

namespace SI {

template <typename _type, class _ratio = std::ratio<1>>
using catalytic_activity_t = detail::unit_t<'K', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_katal_t = catalytic_activity_t<_type, std::atto>;
template <typename _type>
using femto_katal_t = catalytic_activity_t<_type, std::femto>;
template <typename _type>
using pico_katal_t = catalytic_activity_t<_type, std::pico>;
template <typename _type>
using nano_katal_t = catalytic_activity_t<_type, std::nano>;
template <typename _type>
using micro_katal_t = catalytic_activity_t<_type, std::micro>;
template <typename _type>
using milli_katal_t = catalytic_activity_t<_type, std::milli>;
template <typename _type>
using katal_t = catalytic_activity_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_katal_t = catalytic_activity_t<_type, std::kilo>;
template <typename _type>
using mega_katal_t = catalytic_activity_t<_type, std::mega>;
template <typename _type>
using giga_katal_t = catalytic_activity_t<_type, std::giga>;
template <typename _type>
using tera_katal_t = catalytic_activity_t<_type, std::tera>;
template <typename _type>
using peta_katal_t = catalytic_activity_t<_type, std::peta>;
template <typename _type>
using exa_katal_t = catalytic_activity_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'K', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'k', 'a', 't'> {};

template <typename _ratio>
struct unit_symbol<'K', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'k',
                                   'a', 't'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(catalytic_activity_t, substance_t, time_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_katal_t<int64_t> operator""_akat() {
  return atto_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_katal_t<int64_t> operator""_fkat() {
  return femto_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_katal_t<int64_t> operator""_pkat() {
  return pico_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_katal_t<int64_t> operator""_nkat() {
  return nano_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_katal_t<int64_t> operator""_ukat() {
  return micro_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_katal_t<int64_t> operator""_mkat() {
  return milli_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr katal_t<int64_t> operator""_kat() {
  return katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_katal_t<int64_t> operator""_kkat() {
  return kilo_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_katal_t<int64_t> operator""_Mkat() {
  return mega_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_katal_t<int64_t> operator""_Gkat() {
  return giga_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_katal_t<int64_t> operator""_Tkat() {
  return tera_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_katal_t<int64_t> operator""_Pkat() {
  return peta_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_katal_t<int64_t> operator""_Ekat() {
  return exa_katal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_katal_t<long double> operator""_akat(long double value) {
  return atto_katal_t<long double>{value};
}

constexpr femto_katal_t<long double> operator""_fkat(long double value) {
  return femto_katal_t<long double>{value};
}

constexpr pico_katal_t<long double> operator""_pkat(long double value) {
  return pico_katal_t<long double>{value};
}

constexpr nano_katal_t<long double> operator""_nkat(long double value) {
  return nano_katal_t<long double>{value};
}

constexpr micro_katal_t<long double> operator""_ukat(long double value) {
  return micro_katal_t<long double>{value};
}

constexpr milli_katal_t<long double> operator""_mkat(long double value) {
  return milli_katal_t<long double>{value};
}

constexpr katal_t<long double> operator""_kat(long double value) {
  return katal_t<long double>{value};
}

constexpr kilo_katal_t<long double> operator""_kkat(long double value) {
  return kilo_katal_t<long double>{value};
}

constexpr mega_katal_t<long double> operator""_Mkat(long double value) {
  return mega_katal_t<long double>{value};
}

constexpr giga_katal_t<long double> operator""_Gkat(long double value) {
  return giga_katal_t<long double>{value};
}

constexpr tera_katal_t<long double> operator""_Tkat(long double value) {
  return tera_katal_t<long double>{value};
}

constexpr peta_katal_t<long double> operator""_Pkat(long double value) {
  return peta_katal_t<long double>{value};
}

constexpr exa_katal_t<long double> operator""_Ekat(long double value) {
  return exa_katal_t<long double>{value};
}

} // namespace literals
} // namespace SI
