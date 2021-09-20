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
#include "luminosity.h"
#include "solid_angle.h"

namespace SI {

template <typename _type, class _ratio = std::ratio<1>>
using luminous_flux_t = detail::unit_t<'m', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_lumen_t = luminous_flux_t<_type, std::atto>;
template <typename _type>
using femto_lumen_t = luminous_flux_t<_type, std::femto>;
template <typename _type>
using pico_lumen_t = luminous_flux_t<_type, std::pico>;
template <typename _type>
using nano_lumen_t = luminous_flux_t<_type, std::nano>;
template <typename _type>
using micro_lumen_t = luminous_flux_t<_type, std::micro>;
template <typename _type>
using milli_lumen_t = luminous_flux_t<_type, std::milli>;
template <typename _type> using lumen_t = luminous_flux_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_lumen_t = luminous_flux_t<_type, std::kilo>;
template <typename _type>
using mega_lumen_t = luminous_flux_t<_type, std::mega>;
template <typename _type>
using giga_lumen_t = luminous_flux_t<_type, std::giga>;
template <typename _type>
using tera_lumen_t = luminous_flux_t<_type, std::tera>;
template <typename _type>
using peta_lumen_t = luminous_flux_t<_type, std::peta>;
template <typename _type> using exa_lumen_t = luminous_flux_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'m', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'l', 'm'> {};

template <typename _ratio>
struct unit_symbol<'m', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'l',
                                   'm'> {};

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(luminous_flux_t, solid_angle_t, luminosity_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_lumen_t<int64_t> operator""_alm() {
  return atto_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_lumen_t<int64_t> operator""_flm() {
  return femto_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_lumen_t<int64_t> operator""_plm() {
  return pico_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_lumen_t<int64_t> operator""_nlm() {
  return nano_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_lumen_t<int64_t> operator""_ulm() {
  return micro_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_lumen_t<int64_t> operator""_mlm() {
  return milli_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr lumen_t<int64_t> operator""_lm() {
  return lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_lumen_t<int64_t> operator""_klm() {
  return kilo_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_lumen_t<int64_t> operator""_Mlm() {
  return mega_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_lumen_t<int64_t> operator""_Glm() {
  return giga_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_lumen_t<int64_t> operator""_Tlm() {
  return tera_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_lumen_t<int64_t> operator""_Plm() {
  return peta_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_lumen_t<int64_t> operator""_Elm() {
  return exa_lumen_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_lumen_t<long double> operator""_alm(long double value) {
  return atto_lumen_t<long double>{value};
}

constexpr femto_lumen_t<long double> operator""_flm(long double value) {
  return femto_lumen_t<long double>{value};
}

constexpr pico_lumen_t<long double> operator""_plm(long double value) {
  return pico_lumen_t<long double>{value};
}

constexpr nano_lumen_t<long double> operator""_nlm(long double value) {
  return nano_lumen_t<long double>{value};
}

constexpr micro_lumen_t<long double> operator""_ulm(long double value) {
  return micro_lumen_t<long double>{value};
}

constexpr milli_lumen_t<long double> operator""_mlm(long double value) {
  return milli_lumen_t<long double>{value};
}

constexpr lumen_t<long double> operator""_lm(long double value) {
  return lumen_t<long double>{value};
}

constexpr kilo_lumen_t<long double> operator""_klm(long double value) {
  return kilo_lumen_t<long double>{value};
}

constexpr mega_lumen_t<long double> operator""_Mlm(long double value) {
  return mega_lumen_t<long double>{value};
}

constexpr giga_lumen_t<long double> operator""_Glm(long double value) {
  return giga_lumen_t<long double>{value};
}

constexpr tera_lumen_t<long double> operator""_Tlm(long double value) {
  return tera_lumen_t<long double>{value};
}

constexpr peta_lumen_t<long double> operator""_Plm(long double value) {
  return peta_lumen_t<long double>{value};
}

constexpr exa_lumen_t<long double> operator""_Elm(long double value) {
  return exa_lumen_t<long double>{value};
}

} // namespace literals
} // namespace SI
