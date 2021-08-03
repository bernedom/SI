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
#include "detail/unit.h"
#include "detail/unit_symbol.h"

namespace SI {

/// @todo find a way to encapuslate unit symbol Theta
/// @todo consider adding Celsius and fahrenheit
template <typename _type, typename _ratio>
using temperature_t = detail::unit_t<'t', std::ratio<1>, _type, _ratio>;
template <typename _type> using atto_kelvin_t = temperature_t<_type, std::atto>;
template <typename _type>
using femto_kelvin_t = temperature_t<_type, std::femto>;
template <typename _type> using pico_kelvin_t = temperature_t<_type, std::pico>;
template <typename _type> using nano_kelvin_t = temperature_t<_type, std::nano>;
template <typename _type>
using micro_kelvin_t = temperature_t<_type, std::micro>;
template <typename _type>
using milli_kelvin_t = temperature_t<_type, std::milli>;
template <typename _type> using kelvin_t = temperature_t<_type, std::ratio<1>>;
template <typename _type> using kilo_kelvin_t = temperature_t<_type, std::kilo>;
template <typename _type> using mega_kelvin_t = temperature_t<_type, std::mega>;
template <typename _type> using giga_kelvin_t = temperature_t<_type, std::giga>;
template <typename _type> using tera_kelvin_t = temperature_t<_type, std::tera>;
template <typename _type> using peta_kelvin_t = temperature_t<_type, std::peta>;
template <typename _type> using exa_kelvin_t = temperature_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'t', std::ratio<1>> : SI::detail::unit_symbol_impl<'K'> {};

template <typename _ratio>
struct unit_symbol<'t', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'K'> {};

inline namespace literals {

template <char... _digits> constexpr atto_kelvin_t<int64_t> operator""_aK() {
  return atto_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_kelvin_t<int64_t> operator""_fK() {
  return femto_kelvin_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_kelvin_t<int64_t> operator""_pK() {
  return pico_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_kelvin_t<int64_t> operator""_nK() {
  return nano_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_kelvin_t<int64_t> operator""_uK() {
  return micro_kelvin_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_kelvin_t<int64_t> operator""_mK() {
  return milli_kelvin_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kelvin_t<int64_t> operator""_K() {
  return kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_kelvin_t<int64_t> operator""_kK() {
  return kilo_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_kelvin_t<int64_t> operator""_MK() {
  return mega_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_kelvin_t<int64_t> operator""_GK() {
  return giga_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_kelvin_t<int64_t> operator""_TK() {
  return tera_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_kelvin_t<int64_t> operator""_PK() {
  return peta_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_kelvin_t<int64_t> operator""_EK() {
  return exa_kelvin_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_kelvin_t<long double> operator""_aK(long double value) {
  return atto_kelvin_t<long double>{value};
}

constexpr femto_kelvin_t<long double> operator""_fK(long double value) {
  return femto_kelvin_t<long double>{value};
}

constexpr pico_kelvin_t<long double> operator""_pK(long double value) {
  return pico_kelvin_t<long double>{value};
}

constexpr nano_kelvin_t<long double> operator""_nK(long double value) {
  return nano_kelvin_t<long double>{value};
}

constexpr micro_kelvin_t<long double> operator""_uK(long double value) {
  return micro_kelvin_t<long double>{value};
}

constexpr milli_kelvin_t<long double> operator""_mK(long double value) {
  return milli_kelvin_t<long double>{value};
}

constexpr kelvin_t<long double> operator""_K(long double value) {
  return kelvin_t<long double>{value};
}

constexpr kilo_kelvin_t<long double> operator""_kK(long double value) {
  return kilo_kelvin_t<long double>{value};
}

constexpr mega_kelvin_t<long double> operator""_MK(long double value) {
  return mega_kelvin_t<long double>{value};
}

constexpr giga_kelvin_t<long double> operator""_GK(long double value) {
  return giga_kelvin_t<long double>{value};
}

constexpr tera_kelvin_t<long double> operator""_TK(long double value) {
  return tera_kelvin_t<long double>{value};
}

constexpr peta_kelvin_t<long double> operator""_PK(long double value) {
  return peta_kelvin_t<long double>{value};
}

constexpr exa_kelvin_t<long double> operator""_EK(long double value) {
  return exa_kelvin_t<long double>{value};
}

} // namespace literals
} // namespace SI
