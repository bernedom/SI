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
#include "luminosity.h"
#include "solid_angle.h"

namespace SI {

/// @todo add building from candela / sterradiant
template <typename _Type, class _Ratio = std::ratio<1>>
using luminous_flux_t = detail::unit_t<'m', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_lumen_t = luminous_flux_t<_Type, std::atto>;
template <typename _Type>
using femto_lumen_t = luminous_flux_t<_Type, std::femto>;
template <typename _Type>
using pico_lumen_t = luminous_flux_t<_Type, std::pico>;
template <typename _Type>
using nano_lumen_t = luminous_flux_t<_Type, std::nano>;
template <typename _Type>
using micro_lumen_t = luminous_flux_t<_Type, std::micro>;
template <typename _Type>
using milli_lumen_t = luminous_flux_t<_Type, std::milli>;
template <typename _Type> using lumen_t = luminous_flux_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_lumen_t = luminous_flux_t<_Type, std::kilo>;
template <typename _Type>
using mega_lumen_t = luminous_flux_t<_Type, std::mega>;
template <typename _Type>
using giga_lumen_t = luminous_flux_t<_Type, std::giga>;
template <typename _Type>
using tera_lumen_t = luminous_flux_t<_Type, std::tera>;
template <typename _Type>
using peta_lumen_t = luminous_flux_t<_Type, std::peta>;
template <typename _Type> using exa_lumen_t = luminous_flux_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(luminous_flux_t, solid_angle_t, luminosity_t)
}

inline namespace literals {
template <char... _Digits> constexpr atto_lumen_t<int64_t> operator""_alm() {
  return atto_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_lumen_t<int64_t> operator""_flm() {
  return femto_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_lumen_t<int64_t> operator""_plm() {
  return pico_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_lumen_t<int64_t> operator""_nlm() {
  return nano_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_lumen_t<int64_t> operator""_ulm() {
  return micro_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_lumen_t<int64_t> operator""_mlm() {
  return milli_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr lumen_t<int64_t> operator""_lm() {
  return lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_lumen_t<int64_t> operator""_klm() {
  return kilo_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_lumen_t<int64_t> operator""_Mlm() {
  return mega_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_lumen_t<int64_t> operator""_Glm() {
  return giga_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_lumen_t<int64_t> operator""_Tlm() {
  return tera_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_lumen_t<int64_t> operator""_Plm() {
  return peta_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_lumen_t<int64_t> operator""_Elm() {
  return exa_lumen_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
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
