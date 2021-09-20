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
#include "luminous_flux.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using illuminance_t = detail::unit_t<'i', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_lux_t = illuminance_t<_type, std::atto>;
template <typename _type> using femto_lux_t = illuminance_t<_type, std::femto>;
template <typename _type> using pico_lux_t = illuminance_t<_type, std::pico>;
template <typename _type> using nano_lux_t = illuminance_t<_type, std::nano>;
template <typename _type> using micro_lux_t = illuminance_t<_type, std::micro>;
template <typename _type> using milli_lux_t = illuminance_t<_type, std::milli>;
template <typename _type> using lux_t = illuminance_t<_type, std::ratio<1>>;
template <typename _type> using kilo_lux_t = illuminance_t<_type, std::kilo>;
template <typename _type> using mega_lux_t = illuminance_t<_type, std::mega>;
template <typename _type> using giga_lux_t = illuminance_t<_type, std::giga>;
template <typename _type> using tera_lux_t = illuminance_t<_type, std::tera>;
template <typename _type> using peta_lux_t = illuminance_t<_type, std::peta>;
template <typename _type> using exa_lux_t = illuminance_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'i', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'l', 'x'> {};

template <typename _ratio>
struct unit_symbol<'i', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'l',
                                   'x'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(illuminance_t, luminous_flux_t, area_t)
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_lux_t<int64_t> operator""_alx() {
  return atto_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_lux_t<int64_t> operator""_flx() {
  return femto_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_lux_t<int64_t> operator""_plx() {
  return pico_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_lux_t<int64_t> operator""_nlx() {
  return nano_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_lux_t<int64_t> operator""_ulx() {
  return micro_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_lux_t<int64_t> operator""_mlx() {
  return milli_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr lux_t<int64_t> operator""_lx() {
  return lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_lux_t<int64_t> operator""_klx() {
  return kilo_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_lux_t<int64_t> operator""_Mlx() {
  return mega_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_lux_t<int64_t> operator""_Glx() {
  return giga_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_lux_t<int64_t> operator""_Tlx() {
  return tera_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_lux_t<int64_t> operator""_Plx() {
  return peta_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_lux_t<int64_t> operator""_Elx() {
  return exa_lux_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
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
