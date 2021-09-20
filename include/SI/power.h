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
#include "energy.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using power_t = detail::unit_t<'P', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_watt_t = power_t<_type, std::atto>;
template <typename _type> using femto_watt_t = power_t<_type, std::femto>;
template <typename _type> using pico_watt_t = power_t<_type, std::pico>;
template <typename _type> using nano_watt_t = power_t<_type, std::nano>;
template <typename _type> using micro_watt_t = power_t<_type, std::micro>;
template <typename _type> using milli_watt_t = power_t<_type, std::milli>;
template <typename _type> using watt_t = power_t<_type, std::ratio<1>>;
template <typename _type> using kilo_watt_t = power_t<_type, std::kilo>;
template <typename _type> using mega_watt_t = power_t<_type, std::mega>;
template <typename _type> using giga_watt_t = power_t<_type, std::giga>;
template <typename _type> using tera_watt_t = power_t<_type, std::tera>;
template <typename _type> using peta_watt_t = power_t<_type, std::peta>;
template <typename _type> using exa_watt_t = power_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'P', std::ratio<1>> : SI::detail::unit_symbol_impl<'W'> {};

template <typename _ratio>
struct unit_symbol<'P', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'W'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(power_t, energy_t, time_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_watt_t<int64_t> operator""_aW() {
  return atto_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_watt_t<int64_t> operator""_fW() {
  return femto_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_watt_t<int64_t> operator""_pW() {
  return pico_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_watt_t<int64_t> operator""_nW() {
  return nano_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_watt_t<int64_t> operator""_uW() {
  return micro_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_watt_t<int64_t> operator""_mW() {
  return milli_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr watt_t<int64_t> operator""_W() {
  return watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_watt_t<int64_t> operator""_kW() {
  return kilo_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_watt_t<int64_t> operator""_MW() {
  return mega_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_watt_t<int64_t> operator""_GW() {
  return giga_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_watt_t<int64_t> operator""_TW() {
  return tera_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_watt_t<int64_t> operator""_PW() {
  return peta_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_watt_t<int64_t> operator""_EW() {
  return exa_watt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_watt_t<long double> operator""_aW(long double value) {
  return atto_watt_t<long double>{value};
}

constexpr femto_watt_t<long double> operator""_fW(long double value) {
  return femto_watt_t<long double>{value};
}

constexpr pico_watt_t<long double> operator""_pW(long double value) {
  return pico_watt_t<long double>{value};
}

constexpr nano_watt_t<long double> operator""_nW(long double value) {
  return nano_watt_t<long double>{value};
}

constexpr micro_watt_t<long double> operator""_uW(long double value) {
  return micro_watt_t<long double>{value};
}

constexpr milli_watt_t<long double> operator""_mW(long double value) {
  return milli_watt_t<long double>{value};
}

constexpr watt_t<long double> operator""_W(long double value) {
  return watt_t<long double>{value};
}

constexpr kilo_watt_t<long double> operator""_kW(long double value) {
  return kilo_watt_t<long double>{value};
}

constexpr mega_watt_t<long double> operator""_MW(long double value) {
  return mega_watt_t<long double>{value};
}

constexpr giga_watt_t<long double> operator""_GW(long double value) {
  return giga_watt_t<long double>{value};
}

constexpr tera_watt_t<long double> operator""_TW(long double value) {
  return tera_watt_t<long double>{value};
}

constexpr peta_watt_t<long double> operator""_PW(long double value) {
  return peta_watt_t<long double>{value};
}

constexpr exa_watt_t<long double> operator""_EW(long double value) {
  return exa_watt_t<long double>{value};
}

} // namespace literals
} // namespace SI
