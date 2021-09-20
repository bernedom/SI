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
#include "electric_potential.h"
#include "time.h"

namespace SI {

/// @todo find a way to encapsulate   phi
template <typename _type, class _ratio = std::ratio<1>>
using magnetic_flux_t = detail::unit_t<'f', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_weber_t = magnetic_flux_t<_type, std::atto>;
template <typename _type>
using femto_weber_t = magnetic_flux_t<_type, std::femto>;
template <typename _type>
using pico_weber_t = magnetic_flux_t<_type, std::pico>;
template <typename _type>
using nano_weber_t = magnetic_flux_t<_type, std::nano>;
template <typename _type>
using micro_weber_t = magnetic_flux_t<_type, std::micro>;
template <typename _type>
using milli_weber_t = magnetic_flux_t<_type, std::milli>;
template <typename _type> using weber_t = magnetic_flux_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_weber_t = magnetic_flux_t<_type, std::kilo>;
template <typename _type>
using mega_weber_t = magnetic_flux_t<_type, std::mega>;
template <typename _type>
using giga_weber_t = magnetic_flux_t<_type, std::giga>;
template <typename _type>
using tera_weber_t = magnetic_flux_t<_type, std::tera>;
template <typename _type>
using peta_weber_t = magnetic_flux_t<_type, std::peta>;
template <typename _type> using exa_weber_t = magnetic_flux_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'f', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'W', 'b'> {};

template <typename _ratio>
struct unit_symbol<'f', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'W',
                                   'b'> {};

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(magnetic_flux_t, electric_potential_t, time_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_weber_t<int64_t> operator""_aWb() {
  return atto_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_weber_t<int64_t> operator""_fWb() {
  return femto_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_weber_t<int64_t> operator""_pWb() {
  return pico_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_weber_t<int64_t> operator""_nWb() {
  return nano_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_weber_t<int64_t> operator""_uWb() {
  return micro_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_weber_t<int64_t> operator""_mWb() {
  return milli_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr weber_t<int64_t> operator""_Wb() {
  return weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_weber_t<int64_t> operator""_kWb() {
  return kilo_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_weber_t<int64_t> operator""_MWb() {
  return mega_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_weber_t<int64_t> operator""_GWb() {
  return giga_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_weber_t<int64_t> operator""_TWb() {
  return tera_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_weber_t<int64_t> operator""_PWb() {
  return peta_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_weber_t<int64_t> operator""_EWb() {
  return exa_weber_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_weber_t<long double> operator""_aWb(long double value) {
  return atto_weber_t<long double>{value};
}

constexpr femto_weber_t<long double> operator""_fWb(long double value) {
  return femto_weber_t<long double>{value};
}

constexpr pico_weber_t<long double> operator""_pWb(long double value) {
  return pico_weber_t<long double>{value};
}

constexpr nano_weber_t<long double> operator""_nWb(long double value) {
  return nano_weber_t<long double>{value};
}

constexpr micro_weber_t<long double> operator""_uWb(long double value) {
  return micro_weber_t<long double>{value};
}

constexpr milli_weber_t<long double> operator""_mWb(long double value) {
  return milli_weber_t<long double>{value};
}

constexpr weber_t<long double> operator""_Wb(long double value) {
  return weber_t<long double>{value};
}

constexpr kilo_weber_t<long double> operator""_kWb(long double value) {
  return kilo_weber_t<long double>{value};
}

constexpr mega_weber_t<long double> operator""_MWb(long double value) {
  return mega_weber_t<long double>{value};
}

constexpr giga_weber_t<long double> operator""_GWb(long double value) {
  return giga_weber_t<long double>{value};
}

constexpr tera_weber_t<long double> operator""_TWb(long double value) {
  return tera_weber_t<long double>{value};
}

constexpr peta_weber_t<long double> operator""_PWb(long double value) {
  return peta_weber_t<long double>{value};
}

constexpr exa_weber_t<long double> operator""_EWb(long double value) {
  return exa_weber_t<long double>{value};
}

} // namespace literals
} // namespace SI
