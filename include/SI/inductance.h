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
#include "magnetic_flux.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using inductance_t = detail::unit_t<'l', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_henry_t = inductance_t<_type, std::atto>;
template <typename _type> using femto_henry_t = inductance_t<_type, std::femto>;
template <typename _type> using pico_henry_t = inductance_t<_type, std::pico>;
template <typename _type> using nano_henry_t = inductance_t<_type, std::nano>;
template <typename _type> using micro_henry_t = inductance_t<_type, std::micro>;
template <typename _type> using milli_henry_t = inductance_t<_type, std::milli>;
template <typename _type> using henry_t = inductance_t<_type, std::ratio<1>>;
template <typename _type> using kilo_henry_t = inductance_t<_type, std::kilo>;
template <typename _type> using mega_henry_t = inductance_t<_type, std::mega>;
template <typename _type> using giga_henry_t = inductance_t<_type, std::giga>;
template <typename _type> using tera_henry_t = inductance_t<_type, std::tera>;
template <typename _type> using peta_henry_t = inductance_t<_type, std::peta>;
template <typename _type> using exa_henry_t = inductance_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'l', std::ratio<1>> : SI::detail::unit_symbol_impl<'H'> {};

template <typename _ratio>
struct unit_symbol<'l', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'H'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(inductance_t, magnetic_flux_t, electric_current_t)
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_henry_t<int64_t> operator""_aH() {
  return atto_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_henry_t<int64_t> operator""_fH() {
  return femto_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_henry_t<int64_t> operator""_pH() {
  return pico_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_henry_t<int64_t> operator""_nH() {
  return nano_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_henry_t<int64_t> operator""_uH() {
  return micro_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_henry_t<int64_t> operator""_mH() {
  return milli_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr henry_t<int64_t> operator""_H() {
  return henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_henry_t<int64_t> operator""_kH() {
  return kilo_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_henry_t<int64_t> operator""_MH() {
  return mega_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_henry_t<int64_t> operator""_GH() {
  return giga_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_henry_t<int64_t> operator""_TH() {
  return tera_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_henry_t<int64_t> operator""_PH() {
  return peta_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_henry_t<int64_t> operator""_EH() {
  return exa_henry_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_henry_t<long double> operator""_aH(long double value) {
  return atto_henry_t<long double>{value};
}

constexpr femto_henry_t<long double> operator""_fH(long double value) {
  return femto_henry_t<long double>{value};
}

constexpr pico_henry_t<long double> operator""_pH(long double value) {
  return pico_henry_t<long double>{value};
}

constexpr nano_henry_t<long double> operator""_nH(long double value) {
  return nano_henry_t<long double>{value};
}

constexpr micro_henry_t<long double> operator""_uH(long double value) {
  return micro_henry_t<long double>{value};
}

constexpr milli_henry_t<long double> operator""_mH(long double value) {
  return milli_henry_t<long double>{value};
}

constexpr henry_t<long double> operator""_H(long double value) {
  return henry_t<long double>{value};
}

constexpr kilo_henry_t<long double> operator""_kH(long double value) {
  return kilo_henry_t<long double>{value};
}

constexpr mega_henry_t<long double> operator""_MH(long double value) {
  return mega_henry_t<long double>{value};
}

constexpr giga_henry_t<long double> operator""_GH(long double value) {
  return giga_henry_t<long double>{value};
}

constexpr tera_henry_t<long double> operator""_TH(long double value) {
  return tera_henry_t<long double>{value};
}

constexpr peta_henry_t<long double> operator""_PH(long double value) {
  return peta_henry_t<long double>{value};
}

constexpr exa_henry_t<long double> operator""_EH(long double value) {
  return exa_henry_t<long double>{value};
}

} // namespace literals
} // namespace SI
