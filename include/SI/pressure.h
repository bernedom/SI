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
#include "force.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using pressure_t = detail::unit_t<'p', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_pascal_t = pressure_t<_type, std::atto>;
template <typename _type> using femto_pascal_t = pressure_t<_type, std::femto>;
template <typename _type> using pico_pascal_t = pressure_t<_type, std::pico>;
template <typename _type> using nano_pascal_t = pressure_t<_type, std::nano>;
template <typename _type> using micro_pascal_t = pressure_t<_type, std::micro>;
template <typename _type> using milli_pascal_t = pressure_t<_type, std::milli>;
template <typename _type> using pascal_t = pressure_t<_type, std::ratio<1>>;
template <typename _type> using kilo_pascal_t = pressure_t<_type, std::kilo>;
template <typename _type> using mega_pascal_t = pressure_t<_type, std::mega>;
template <typename _type> using giga_pascal_t = pressure_t<_type, std::giga>;
template <typename _type> using tera_pascal_t = pressure_t<_type, std::tera>;
template <typename _type> using peta_pascal_t = pressure_t<_type, std::peta>;
template <typename _type> using exa_pascal_t = pressure_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'p', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'p', 'a'> {};

template <typename _ratio>
struct unit_symbol<'p', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'p',
                                   'a'> {};

namespace detail {

BUILD_UNIT_FROM_DIVISON(pressure_t, force_t, area_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_pascal_t<int64_t> operator""_apa() {
  return atto_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_pascal_t<int64_t> operator""_fpa() {
  return femto_pascal_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_pascal_t<int64_t> operator""_ppa() {
  return pico_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_pascal_t<int64_t> operator""_npa() {
  return nano_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_pascal_t<int64_t> operator""_upa() {
  return micro_pascal_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_pascal_t<int64_t> operator""_mpa() {
  return milli_pascal_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pascal_t<int64_t> operator""_pa() {
  return pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_pascal_t<int64_t> operator""_kpa() {
  return kilo_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_pascal_t<int64_t> operator""_Mpa() {
  return mega_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_pascal_t<int64_t> operator""_Gpa() {
  return giga_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_pascal_t<int64_t> operator""_Tpa() {
  return tera_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_pascal_t<int64_t> operator""_Ppa() {
  return peta_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_pascal_t<int64_t> operator""_Epa() {
  return exa_pascal_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_pascal_t<long double> operator""_apa(long double value) {
  return atto_pascal_t<long double>{value};
}

constexpr femto_pascal_t<long double> operator""_fpa(long double value) {
  return femto_pascal_t<long double>{value};
}

constexpr pico_pascal_t<long double> operator""_ppa(long double value) {
  return pico_pascal_t<long double>{value};
}

constexpr nano_pascal_t<long double> operator""_npa(long double value) {
  return nano_pascal_t<long double>{value};
}

constexpr micro_pascal_t<long double> operator""_upa(long double value) {
  return micro_pascal_t<long double>{value};
}

constexpr milli_pascal_t<long double> operator""_mpa(long double value) {
  return milli_pascal_t<long double>{value};
}

constexpr pascal_t<long double> operator""_pa(long double value) {
  return pascal_t<long double>{value};
}

constexpr kilo_pascal_t<long double> operator""_kpa(long double value) {
  return kilo_pascal_t<long double>{value};
}

constexpr mega_pascal_t<long double> operator""_Mpa(long double value) {
  return mega_pascal_t<long double>{value};
}

constexpr giga_pascal_t<long double> operator""_Gpa(long double value) {
  return giga_pascal_t<long double>{value};
}

constexpr tera_pascal_t<long double> operator""_Tpa(long double value) {
  return tera_pascal_t<long double>{value};
}

constexpr peta_pascal_t<long double> operator""_Ppa(long double value) {
  return peta_pascal_t<long double>{value};
}

constexpr exa_pascal_t<long double> operator""_Epa(long double value) {
  return exa_pascal_t<long double>{value};
}

} // namespace literals
} // namespace SI
