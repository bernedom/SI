/**
 * This file is part of "SI" version 2.5.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling physical values defined in the International System of
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
using solid_angle_t = detail::unit_t<'R', std::ratio<1>, _type, _ratio>;

template <typename _type>
using atto_steradian_t = solid_angle_t<_type, std::atto>;
template <typename _type>
using femto_steradian_t = solid_angle_t<_type, std::femto>;
template <typename _type>
using pico_steradian_t = solid_angle_t<_type, std::pico>;
template <typename _type>
using nano_steradian_t = solid_angle_t<_type, std::nano>;
template <typename _type>
using micro_steradian_t = solid_angle_t<_type, std::micro>;
template <typename _type>
using milli_steradian_t = solid_angle_t<_type, std::milli>;
template <typename _type>
using steradian_t = solid_angle_t<_type, std::ratio<1>>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'R', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'s', 'r'> {};

template <typename _ratio>
struct unit_symbol<'R', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 's',
                                   'r'> {
  static_assert(std::ratio_less_equal<_ratio, std::ratio<1>>::value,
                "Values with ratio > 1/1 not implemented");
};

inline namespace literals {

template <char... _digits>
constexpr atto_steradian_t<int64_t> operator""_asr() {
  return atto_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr femto_steradian_t<int64_t> operator""_fsr() {
  return femto_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr pico_steradian_t<int64_t> operator""_psr() {
  return pico_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr nano_steradian_t<int64_t> operator""_nsr() {
  return nano_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr micro_steradian_t<int64_t> operator""_usr() {
  return micro_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr milli_steradian_t<int64_t> operator""_msr() {
  return milli_steradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr steradian_t<int64_t> operator""_sr() {
  return steradian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_steradian_t<long double> operator""_asr(long double value) {
  return atto_steradian_t<long double>{value};
}

constexpr femto_steradian_t<long double> operator""_fsr(long double value) {
  return femto_steradian_t<long double>{value};
}

constexpr pico_steradian_t<long double> operator""_psr(long double value) {
  return pico_steradian_t<long double>{value};
}

constexpr nano_steradian_t<long double> operator""_nsr(long double value) {
  return nano_steradian_t<long double>{value};
}

constexpr micro_steradian_t<long double> operator""_usr(long double value) {
  return micro_steradian_t<long double>{value};
}

constexpr milli_steradian_t<long double> operator""_msr(long double value) {
  return milli_steradian_t<long double>{value};
}

constexpr steradian_t<long double> operator""_sr(long double value) {
  return steradian_t<long double>{value};
}

} // namespace literals

} // namespace SI
