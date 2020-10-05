/**
 * This file is part of "SI" version 2.0.0
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
#include "electric_current.h"
#include "electric_potential.h"

namespace SI {

/// @todo find a way to use Ohm as dimension symbol or switch to R (occupied by
/// solid angle)
template <typename _type, class _ratio = std::ratio<1>>
using electric_resistance_t = detail::unit_t<'O', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_ohm_t = electric_resistance_t<_type, std::atto>;
template <typename _type>
using femto_ohm_t = electric_resistance_t<_type, std::femto>;
template <typename _type>
using pico_ohm_t = electric_resistance_t<_type, std::pico>;
template <typename _type>
using nano_ohm_t = electric_resistance_t<_type, std::nano>;
template <typename _type>
using micro_ohm_t = electric_resistance_t<_type, std::micro>;
template <typename _type>
using milli_ohm_t = electric_resistance_t<_type, std::milli>;
template <typename _type>
using ohm_t = electric_resistance_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_ohm_t = electric_resistance_t<_type, std::kilo>;
template <typename _type>
using mega_ohm_t = electric_resistance_t<_type, std::mega>;
template <typename _type>
using giga_ohm_t = electric_resistance_t<_type, std::giga>;
template <typename _type>
using tera_ohm_t = electric_resistance_t<_type, std::tera>;
template <typename _type>
using peta_ohm_t = electric_resistance_t<_type, std::peta>;
template <typename _type>
using exa_ohm_t = electric_resistance_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'O', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'O', 'h', 'm'> {};

template <typename _ratio>
struct unit_symbol<'O', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'O',
                                   'h', 'm'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_resistance_t, electric_potential_t,
                        electric_current_t)

/// Builds conductance from 1/conductance, to avoid include cycles the base
/// unit_t is used instead of the type alias electric_conductance_t
template <typename _type, class _ratio = std::ratio<1>>
constexpr auto operator/(
    const _type scalar,
    const detail::unit_t<'G', std::ratio<1>, _type, _ratio> &conductance) {
  return electric_resistance_t<_type, std::ratio<_ratio::den, _ratio::num>>{
      scalar / conductance.value()};
}
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_ohm_t<int64_t> operator""_aOhm() {
  return atto_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_ohm_t<int64_t> operator""_fOhm() {
  return femto_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_ohm_t<int64_t> operator""_pOhm() {
  return pico_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_ohm_t<int64_t> operator""_nOhm() {
  return nano_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_ohm_t<int64_t> operator""_uOhm() {
  return micro_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_ohm_t<int64_t> operator""_mOhm() {
  return milli_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr ohm_t<int64_t> operator""_Ohm() {
  return ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_ohm_t<int64_t> operator""_kOhm() {
  return kilo_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_ohm_t<int64_t> operator""_MOhm() {
  return mega_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_ohm_t<int64_t> operator""_GOhm() {
  return giga_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_ohm_t<int64_t> operator""_TOhm() {
  return tera_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_ohm_t<int64_t> operator""_POhm() {
  return peta_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_ohm_t<int64_t> operator""_EOhm() {
  return exa_ohm_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_ohm_t<long double> operator""_aOhm(long double value) {
  return atto_ohm_t<long double>{value};
}

constexpr femto_ohm_t<long double> operator""_fOhm(long double value) {
  return femto_ohm_t<long double>{value};
}

constexpr pico_ohm_t<long double> operator""_pOhm(long double value) {
  return pico_ohm_t<long double>{value};
}

constexpr nano_ohm_t<long double> operator""_nOhm(long double value) {
  return nano_ohm_t<long double>{value};
}

constexpr micro_ohm_t<long double> operator""_uOhm(long double value) {
  return micro_ohm_t<long double>{value};
}

constexpr milli_ohm_t<long double> operator""_mOhm(long double value) {
  return milli_ohm_t<long double>{value};
}

constexpr ohm_t<long double> operator""_Ohm(long double value) {
  return ohm_t<long double>{value};
}

constexpr kilo_ohm_t<long double> operator""_kOhm(long double value) {
  return kilo_ohm_t<long double>{value};
}

constexpr mega_ohm_t<long double> operator""_MOhm(long double value) {
  return mega_ohm_t<long double>{value};
}

constexpr giga_ohm_t<long double> operator""_GOhm(long double value) {
  return giga_ohm_t<long double>{value};
}

constexpr tera_ohm_t<long double> operator""_TOhm(long double value) {
  return tera_ohm_t<long double>{value};
}

constexpr peta_ohm_t<long double> operator""_POhm(long double value) {
  return peta_ohm_t<long double>{value};
}

constexpr exa_ohm_t<long double> operator""_EOhm(long double value) {
  return exa_ohm_t<long double>{value};
}

} // namespace literals
} // namespace SI
