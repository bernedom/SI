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
#include "force.h"
#include "length.h"
#include "pressure.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using energy_t = detail::unit_t<'E', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_joule_t = energy_t<_type, std::atto>;
template <typename _type> using femto_joule_t = energy_t<_type, std::femto>;
template <typename _type> using pico_joule_t = energy_t<_type, std::pico>;
template <typename _type> using nano_joule_t = energy_t<_type, std::nano>;
template <typename _type> using micro_joule_t = energy_t<_type, std::micro>;
template <typename _type> using milli_joule_t = energy_t<_type, std::milli>;
template <typename _type> using joule_t = energy_t<_type, std::ratio<1>>;
template <typename _type> using kilo_joule_t = energy_t<_type, std::kilo>;
template <typename _type> using mega_joule_t = energy_t<_type, std::mega>;
template <typename _type> using giga_joule_t = energy_t<_type, std::giga>;
template <typename _type> using tera_joule_t = energy_t<_type, std::tera>;
template <typename _type> using peta_joule_t = energy_t<_type, std::peta>;
template <typename _type> using exa_joule_t = energy_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'E', std::ratio<1>> : SI::detail::unit_symbol_impl<'J'> {};

template <typename _ratio>
struct unit_symbol<'E', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'J'> {};

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(energy_t, force_t, length_t)
BUILD_UNIT_FROM_MULTIPLICATION(energy_t, pressure_t, volume_t)
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_joule_t<int64_t> operator""_aJ() {
  return atto_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_joule_t<int64_t> operator""_fJ() {
  return femto_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_joule_t<int64_t> operator""_pJ() {
  return pico_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_joule_t<int64_t> operator""_nJ() {
  return nano_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_joule_t<int64_t> operator""_uJ() {
  return micro_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_joule_t<int64_t> operator""_mJ() {
  return milli_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr joule_t<int64_t> operator""_J() {
  return joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_joule_t<int64_t> operator""_kJ() {
  return kilo_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_joule_t<int64_t> operator""_MJ() {
  return mega_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_joule_t<int64_t> operator""_GJ() {
  return giga_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_joule_t<int64_t> operator""_TJ() {
  return tera_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_joule_t<int64_t> operator""_PJ() {
  return peta_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_joule_t<int64_t> operator""_EJ() {
  return exa_joule_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_joule_t<long double> operator""_aJ(long double value) {
  return atto_joule_t<long double>{value};
}

constexpr femto_joule_t<long double> operator""_fJ(long double value) {
  return femto_joule_t<long double>{value};
}

constexpr pico_joule_t<long double> operator""_pJ(long double value) {
  return pico_joule_t<long double>{value};
}

constexpr nano_joule_t<long double> operator""_nJ(long double value) {
  return nano_joule_t<long double>{value};
}

constexpr micro_joule_t<long double> operator""_uJ(long double value) {
  return micro_joule_t<long double>{value};
}

constexpr milli_joule_t<long double> operator""_mJ(long double value) {
  return milli_joule_t<long double>{value};
}

constexpr joule_t<long double> operator""_J(long double value) {
  return joule_t<long double>{value};
}

constexpr kilo_joule_t<long double> operator""_kJ(long double value) {
  return kilo_joule_t<long double>{value};
}

constexpr mega_joule_t<long double> operator""_MJ(long double value) {
  return mega_joule_t<long double>{value};
}

constexpr giga_joule_t<long double> operator""_GJ(long double value) {
  return giga_joule_t<long double>{value};
}

constexpr tera_joule_t<long double> operator""_TJ(long double value) {
  return tera_joule_t<long double>{value};
}

constexpr peta_joule_t<long double> operator""_PJ(long double value) {
  return peta_joule_t<long double>{value};
}

constexpr exa_joule_t<long double> operator""_EJ(long double value) {
  return exa_joule_t<long double>{value};
}

} // namespace literals
} // namespace SI
