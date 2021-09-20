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
#include "electric_potential.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using electric_capacity_t = detail::unit_t<'C', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type>
using atto_farad_t = electric_capacity_t<_type, std::atto>;
template <typename _type>
using femto_farad_t = electric_capacity_t<_type, std::femto>;
template <typename _type>
using pico_farad_t = electric_capacity_t<_type, std::pico>;
template <typename _type>
using nano_farad_t = electric_capacity_t<_type, std::nano>;
template <typename _type>
using micro_farad_t = electric_capacity_t<_type, std::micro>;
template <typename _type>
using milli_farad_t = electric_capacity_t<_type, std::milli>;
template <typename _type>
using farad_t = electric_capacity_t<_type, std::ratio<1>>;
template <typename _type>
using kilo_farad_t = electric_capacity_t<_type, std::kilo>;
template <typename _type>
using mega_farad_t = electric_capacity_t<_type, std::mega>;
template <typename _type>
using giga_farad_t = electric_capacity_t<_type, std::giga>;
template <typename _type>
using tera_farad_t = electric_capacity_t<_type, std::tera>;
template <typename _type>
using peta_farad_t = electric_capacity_t<_type, std::peta>;
template <typename _type>
using exa_farad_t = electric_capacity_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'C', std::ratio<1>> : SI::detail::unit_symbol_impl<'F'> {};

template <typename _ratio>
struct unit_symbol<'C', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'F'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_capacity_t, electric_charge_t,
                        electric_potential_t)
} // namespace detail

inline namespace literals {
template <char... _digits> constexpr atto_farad_t<int64_t> operator""_aF() {
  return atto_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_farad_t<int64_t> operator""_fF() {
  return femto_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_farad_t<int64_t> operator""_pF() {
  return pico_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_farad_t<int64_t> operator""_nF() {
  return nano_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_farad_t<int64_t> operator""_uF() {
  return micro_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_farad_t<int64_t> operator""_mF() {
  return milli_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr farad_t<int64_t> operator""_F() {
  return farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_farad_t<int64_t> operator""_kF() {
  return kilo_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_farad_t<int64_t> operator""_MF() {
  return mega_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_farad_t<int64_t> operator""_GF() {
  return giga_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_farad_t<int64_t> operator""_TF() {
  return tera_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_farad_t<int64_t> operator""_PF() {
  return peta_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_farad_t<int64_t> operator""_EF() {
  return exa_farad_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_farad_t<long double> operator""_aF(long double value) {
  return atto_farad_t<long double>{value};
}

constexpr femto_farad_t<long double> operator""_fF(long double value) {
  return femto_farad_t<long double>{value};
}

constexpr pico_farad_t<long double> operator""_pF(long double value) {
  return pico_farad_t<long double>{value};
}

constexpr nano_farad_t<long double> operator""_nF(long double value) {
  return nano_farad_t<long double>{value};
}

constexpr micro_farad_t<long double> operator""_uF(long double value) {
  return micro_farad_t<long double>{value};
}

constexpr milli_farad_t<long double> operator""_mF(long double value) {
  return milli_farad_t<long double>{value};
}

constexpr farad_t<long double> operator""_F(long double value) {
  return farad_t<long double>{value};
}

constexpr kilo_farad_t<long double> operator""_kF(long double value) {
  return kilo_farad_t<long double>{value};
}

constexpr mega_farad_t<long double> operator""_MF(long double value) {
  return mega_farad_t<long double>{value};
}

constexpr giga_farad_t<long double> operator""_GF(long double value) {
  return giga_farad_t<long double>{value};
}

constexpr tera_farad_t<long double> operator""_TF(long double value) {
  return tera_farad_t<long double>{value};
}

constexpr peta_farad_t<long double> operator""_PF(long double value) {
  return peta_farad_t<long double>{value};
}

constexpr exa_farad_t<long double> operator""_EF(long double value) {
  return exa_farad_t<long double>{value};
}

} // namespace literals
} // namespace SI
