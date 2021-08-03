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

template <typename _type, typename _ratio>
using luminosity_t = detail::unit_t<'J', std::ratio<1>, _type, _ratio>;

template <typename _type> using atto_candela_t = luminosity_t<_type, std::atto>;
template <typename _type>
using femto_candela_t = luminosity_t<_type, std::femto>;
template <typename _type> using pico_candela_t = luminosity_t<_type, std::pico>;
template <typename _type> using nano_candela_t = luminosity_t<_type, std::nano>;
template <typename _type>
using micro_candela_t = luminosity_t<_type, std::micro>;
template <typename _type>
using milli_candela_t = luminosity_t<_type, std::milli>;
template <typename _type> using candela_t = luminosity_t<_type, std::ratio<1>>;
template <typename _type> using kilo_candela_t = luminosity_t<_type, std::kilo>;
template <typename _type> using mega_candela_t = luminosity_t<_type, std::mega>;
template <typename _type> using giga_candela_t = luminosity_t<_type, std::giga>;
template <typename _type> using tera_candela_t = luminosity_t<_type, std::tera>;
template <typename _type> using peta_candela_t = luminosity_t<_type, std::peta>;
template <typename _type> using exa_candela_t = luminosity_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'J', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'c', 'd'> {};

template <typename _ratio>
struct unit_symbol<'J', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'c',
                                   'd'> {};

inline namespace literals {

template <char... _digits> constexpr atto_candela_t<int64_t> operator""_acd() {
  return atto_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_candela_t<int64_t> operator""_fcd() {
  return femto_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_candela_t<int64_t> operator""_pcd() {
  return pico_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_candela_t<int64_t> operator""_ncd() {
  return nano_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_candela_t<int64_t> operator""_ucd() {
  return micro_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_candela_t<int64_t> operator""_mcd() {
  return milli_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr candela_t<int64_t> operator""_cd() {
  return candela_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_candela_t<int64_t> operator""_kcd() {
  return kilo_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_candela_t<int64_t> operator""_Mcd() {
  return mega_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_candela_t<int64_t> operator""_Gcd() {
  return giga_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_candela_t<int64_t> operator""_Tcd() {
  return tera_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_candela_t<int64_t> operator""_Pcd() {
  return peta_candela_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_candela_t<int64_t> operator""_Ecd() {
  return exa_candela_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_candela_t<long double> operator""_acd(long double value) {
  return atto_candela_t<long double>{value};
}

constexpr femto_candela_t<long double> operator""_fcd(long double value) {
  return femto_candela_t<long double>{value};
}

constexpr pico_candela_t<long double> operator""_pcd(long double value) {
  return pico_candela_t<long double>{value};
}

constexpr nano_candela_t<long double> operator""_ncd(long double value) {
  return nano_candela_t<long double>{value};
}

constexpr micro_candela_t<long double> operator""_ucd(long double value) {
  return micro_candela_t<long double>{value};
}

constexpr milli_candela_t<long double> operator""_mcd(long double value) {
  return milli_candela_t<long double>{value};
}

constexpr candela_t<long double> operator""_cd(long double value) {
  return candela_t<long double>{value};
}

constexpr kilo_candela_t<long double> operator""_kcd(long double value) {
  return kilo_candela_t<long double>{value};
}

constexpr mega_candela_t<long double> operator""_Mcd(long double value) {
  return mega_candela_t<long double>{value};
}

constexpr giga_candela_t<long double> operator""_Gcd(long double value) {
  return giga_candela_t<long double>{value};
}

constexpr tera_candela_t<long double> operator""_Tcd(long double value) {
  return tera_candela_t<long double>{value};
}

constexpr peta_candela_t<long double> operator""_Pcd(long double value) {
  return peta_candela_t<long double>{value};
}

constexpr exa_candela_t<long double> operator""_Ecd(long double value) {
  return exa_candela_t<long double>{value};
}

} // namespace literals
} // namespace SI
