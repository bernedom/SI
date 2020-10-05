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

template <typename _type, class _ratio = std::ratio<1>>
using electric_conductance_t =
    detail::unit_t<'G', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_siemens_t = electric_conductance_t<_type, std::atto>;
template <typename _type>
using femto_siemens_t = electric_conductance_t<_type, std::femto>;
template <typename _type>
using pico_siemens_t = electric_conductance_t<_type, std::pico>;
template <typename _type>
using nano_siemens_t = electric_conductance_t<_type, std::nano>;
template <typename _type>
using micro_siemens_t = electric_conductance_t<_type, std::micro>;
template <typename _type>
using milli_siemens_t = electric_conductance_t<_type, std::milli>;
template <typename _type>
using siemens_t = electric_conductance_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_siemens_t = electric_conductance_t<_type, std::kilo>;
template <typename _type>
using mega_siemens_t = electric_conductance_t<_type, std::mega>;
template <typename _type>
using giga_siemens_t = electric_conductance_t<_type, std::giga>;
template <typename _type>
using tera_siemens_t = electric_conductance_t<_type, std::tera>;
template <typename _type>
using peta_siemens_t = electric_conductance_t<_type, std::peta>;
template <typename _type>
using exa_siemens_t = electric_conductance_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'G', std::ratio<1>> : SI::detail::unit_symbol_impl<'S'> {};

template <typename _ratio>
struct unit_symbol<'G', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'S'> {};

namespace detail {

BUILD_UNIT_FROM_DIVISON(electric_conductance_t, electric_current_t,
                        electric_potential_t)

/// Builds conductance from 1/resistance, to avoid include cycles the base
/// unit_t is used instead of the type alias electric_resistance_t
template <typename _type, class _ratio = std::ratio<1>>
constexpr auto
operator/(const _type scalar,
          const unit_t<'O', std::ratio<1>, _type, _ratio> &resistance) {
  return electric_conductance_t<_type, std::ratio<_ratio::den, _ratio::num>>{
      scalar / resistance.value()};
}
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_siemens_t<int64_t> operator""_aS() {
  return atto_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_siemens_t<int64_t> operator""_fS() {
  return femto_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_siemens_t<int64_t> operator""_pS() {
  return pico_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_siemens_t<int64_t> operator""_nS() {
  return nano_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_siemens_t<int64_t> operator""_uS() {
  return micro_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_siemens_t<int64_t> operator""_mS() {
  return milli_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr siemens_t<int64_t> operator""_S() {
  return siemens_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_siemens_t<int64_t> operator""_kS() {
  return kilo_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_siemens_t<int64_t> operator""_MS() {
  return mega_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_siemens_t<int64_t> operator""_GS() {
  return giga_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_siemens_t<int64_t> operator""_TS() {
  return tera_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_siemens_t<int64_t> operator""_PS() {
  return peta_siemens_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_siemens_t<int64_t> operator""_ES() {
  return exa_siemens_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_siemens_t<long double> operator""_aS(long double value) {
  return atto_siemens_t<long double>{value};
}

constexpr femto_siemens_t<long double> operator""_fS(long double value) {
  return femto_siemens_t<long double>{value};
}

constexpr pico_siemens_t<long double> operator""_pS(long double value) {
  return pico_siemens_t<long double>{value};
}

constexpr nano_siemens_t<long double> operator""_nS(long double value) {
  return nano_siemens_t<long double>{value};
}

constexpr micro_siemens_t<long double> operator""_uS(long double value) {
  return micro_siemens_t<long double>{value};
}

constexpr milli_siemens_t<long double> operator""_mS(long double value) {
  return milli_siemens_t<long double>{value};
}

constexpr siemens_t<long double> operator""_S(long double value) {
  return siemens_t<long double>{value};
}

constexpr kilo_siemens_t<long double> operator""_kS(long double value) {
  return kilo_siemens_t<long double>{value};
}

constexpr mega_siemens_t<long double> operator""_MS(long double value) {
  return mega_siemens_t<long double>{value};
}

constexpr giga_siemens_t<long double> operator""_GS(long double value) {
  return giga_siemens_t<long double>{value};
}

constexpr tera_siemens_t<long double> operator""_TS(long double value) {
  return tera_siemens_t<long double>{value};
}

constexpr peta_siemens_t<long double> operator""_PS(long double value) {
  return peta_siemens_t<long double>{value};
}

constexpr exa_siemens_t<long double> operator""_ES(long double value) {
  return exa_siemens_t<long double>{value};
}

} // namespace literals
} // namespace SI
