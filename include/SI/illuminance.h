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

#include "area.h"
#include "detail/number_parser.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "luminous_flux.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using illuminance_t = detail::unit_t<'i', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_lux_t = illuminance_t<_Type, std::atto>;
template <typename _Type> using femto_lux_t = illuminance_t<_Type, std::femto>;
template <typename _Type> using pico_lux_t = illuminance_t<_Type, std::pico>;
template <typename _Type> using nano_lux_t = illuminance_t<_Type, std::nano>;
template <typename _Type> using micro_lux_t = illuminance_t<_Type, std::micro>;
template <typename _Type> using milli_lux_t = illuminance_t<_Type, std::milli>;
template <typename _Type> using lux_t = illuminance_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_lux_t = illuminance_t<_Type, std::kilo>;
template <typename _Type> using mega_lux_t = illuminance_t<_Type, std::mega>;
template <typename _Type> using giga_lux_t = illuminance_t<_Type, std::giga>;
template <typename _Type> using tera_lux_t = illuminance_t<_Type, std::tera>;
template <typename _Type> using peta_lux_t = illuminance_t<_Type, std::peta>;
template <typename _Type> using exa_lux_t = illuminance_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(illuminance_t, luminous_flux_t, area_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr atto_lux_t<int64_t> operator""_alx() {
  return atto_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_lux_t<int64_t> operator""_flx() {
  return femto_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_lux_t<int64_t> operator""_plx() {
  return pico_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_lux_t<int64_t> operator""_nlx() {
  return nano_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_lux_t<int64_t> operator""_ulx() {
  return micro_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_lux_t<int64_t> operator""_mlx() {
  return milli_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr lux_t<int64_t> operator""_lx() {
  return lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_lux_t<int64_t> operator""_klx() {
  return kilo_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_lux_t<int64_t> operator""_Mlx() {
  return mega_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_lux_t<int64_t> operator""_Glx() {
  return giga_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_lux_t<int64_t> operator""_Tlx() {
  return tera_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_lux_t<int64_t> operator""_Plx() {
  return peta_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_lux_t<int64_t> operator""_Elx() {
  return exa_lux_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_lux_t<long double> operator""_alx(long double value) {
  return atto_lux_t<long double>{value};
}

constexpr femto_lux_t<long double> operator""_flx(long double value) {
  return femto_lux_t<long double>{value};
}

constexpr pico_lux_t<long double> operator""_plx(long double value) {
  return pico_lux_t<long double>{value};
}

constexpr nano_lux_t<long double> operator""_nlx(long double value) {
  return nano_lux_t<long double>{value};
}

constexpr micro_lux_t<long double> operator""_ulx(long double value) {
  return micro_lux_t<long double>{value};
}

constexpr milli_lux_t<long double> operator""_mlx(long double value) {
  return milli_lux_t<long double>{value};
}

constexpr lux_t<long double> operator""_lx(long double value) {
  return lux_t<long double>{value};
}

constexpr kilo_lux_t<long double> operator""_klx(long double value) {
  return kilo_lux_t<long double>{value};
}

constexpr mega_lux_t<long double> operator""_Mlx(long double value) {
  return mega_lux_t<long double>{value};
}

constexpr giga_lux_t<long double> operator""_Glx(long double value) {
  return giga_lux_t<long double>{value};
}

constexpr tera_lux_t<long double> operator""_Tlx(long double value) {
  return tera_lux_t<long double>{value};
}

constexpr peta_lux_t<long double> operator""_Plx(long double value) {
  return peta_lux_t<long double>{value};
}

constexpr exa_lux_t<long double> operator""_Elx(long double value) {
  return exa_lux_t<long double>{value};
}

} // namespace literals
} // namespace SI