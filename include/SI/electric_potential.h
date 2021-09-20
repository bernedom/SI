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
#include "electric_charge.h"
#include "electric_current.h"
#include "energy.h"
#include "power.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using electric_potential_t = detail::unit_t<'U', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_volt_t = electric_potential_t<_type, std::atto>;
template <typename _type>
using femto_volt_t = electric_potential_t<_type, std::femto>;
template <typename _type>
using pico_volt_t = electric_potential_t<_type, std::pico>;
template <typename _type>
using nano_volt_t = electric_potential_t<_type, std::nano>;
template <typename _type>
using micro_volt_t = electric_potential_t<_type, std::micro>;
template <typename _type>
using milli_volt_t = electric_potential_t<_type, std::milli>;
template <typename _type>
using volt_t = electric_potential_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_volt_t = electric_potential_t<_type, std::kilo>;
template <typename _type>
using mega_volt_t = electric_potential_t<_type, std::mega>;
template <typename _type>
using giga_volt_t = electric_potential_t<_type, std::giga>;
template <typename _type>
using tera_volt_t = electric_potential_t<_type, std::tera>;
template <typename _type>
using peta_volt_t = electric_potential_t<_type, std::peta>;
template <typename _type>
using exa_volt_t = electric_potential_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'U', std::ratio<1>> : SI::detail::unit_symbol_impl<'V'> {};

template <typename _ratio>
struct unit_symbol<'U', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'V'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_potential_t, power_t, electric_current_t)
BUILD_UNIT_FROM_DIVISON(electric_potential_t, energy_t, electric_charge_t)
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_volt_t<int64_t> operator""_aV() {
  return atto_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_volt_t<int64_t> operator""_fV() {
  return femto_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_volt_t<int64_t> operator""_pV() {
  return pico_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_volt_t<int64_t> operator""_nV() {
  return nano_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_volt_t<int64_t> operator""_uV() {
  return micro_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_volt_t<int64_t> operator""_mV() {
  return milli_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr volt_t<int64_t> operator""_V() {
  return volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_volt_t<int64_t> operator""_kV() {
  return kilo_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_volt_t<int64_t> operator""_MV() {
  return mega_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_volt_t<int64_t> operator""_GV() {
  return giga_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_volt_t<int64_t> operator""_TV() {
  return tera_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_volt_t<int64_t> operator""_PV() {
  return peta_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_volt_t<int64_t> operator""_EV() {
  return exa_volt_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_volt_t<long double> operator""_aV(long double value) {
  return atto_volt_t<long double>{value};
}

constexpr femto_volt_t<long double> operator""_fV(long double value) {
  return femto_volt_t<long double>{value};
}

constexpr pico_volt_t<long double> operator""_pV(long double value) {
  return pico_volt_t<long double>{value};
}

constexpr nano_volt_t<long double> operator""_nV(long double value) {
  return nano_volt_t<long double>{value};
}

constexpr micro_volt_t<long double> operator""_uV(long double value) {
  return micro_volt_t<long double>{value};
}

constexpr milli_volt_t<long double> operator""_mV(long double value) {
  return milli_volt_t<long double>{value};
}

constexpr volt_t<long double> operator""_V(long double value) {
  return volt_t<long double>{value};
}

constexpr kilo_volt_t<long double> operator""_kV(long double value) {
  return kilo_volt_t<long double>{value};
}

constexpr mega_volt_t<long double> operator""_MV(long double value) {
  return mega_volt_t<long double>{value};
}

constexpr giga_volt_t<long double> operator""_GV(long double value) {
  return giga_volt_t<long double>{value};
}

constexpr tera_volt_t<long double> operator""_TV(long double value) {
  return tera_volt_t<long double>{value};
}

constexpr peta_volt_t<long double> operator""_PV(long double value) {
  return peta_volt_t<long double>{value};
}

constexpr exa_volt_t<long double> operator""_EV(long double value) {
  return exa_volt_t<long double>{value};
}

} // namespace literals
} // namespace SI
