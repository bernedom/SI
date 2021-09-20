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
using solid_angle_t = detail::unit_t<'R', std::ratio<1>, _type, _ratio>;

template <typename _type>
using atto_sterradian_t = solid_angle_t<_type, std::atto>;
template <typename _type>
using femto_sterradian_t = solid_angle_t<_type, std::femto>;
template <typename _type>
using pico_sterradian_t = solid_angle_t<_type, std::pico>;
template <typename _type>
using nano_sterradian_t = solid_angle_t<_type, std::nano>;
template <typename _type>
using micro_sterradian_t = solid_angle_t<_type, std::micro>;
template <typename _type>
using milli_sterradian_t = solid_angle_t<_type, std::milli>;
template <typename _type>
using sterradian_t = solid_angle_t<_type, std::ratio<1>>;

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
constexpr atto_sterradian_t<int64_t> operator""_asr() {
  return atto_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr femto_sterradian_t<int64_t> operator""_fsr() {
  return femto_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr pico_sterradian_t<int64_t> operator""_psr() {
  return pico_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr nano_sterradian_t<int64_t> operator""_nsr() {
  return nano_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr micro_sterradian_t<int64_t> operator""_usr() {
  return micro_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr milli_sterradian_t<int64_t> operator""_msr() {
  return milli_sterradian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr sterradian_t<int64_t> operator""_sr() {
  return sterradian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_sterradian_t<long double> operator""_asr(long double value) {
  return atto_sterradian_t<long double>{value};
}

constexpr femto_sterradian_t<long double> operator""_fsr(long double value) {
  return femto_sterradian_t<long double>{value};
}

constexpr pico_sterradian_t<long double> operator""_psr(long double value) {
  return pico_sterradian_t<long double>{value};
}

constexpr nano_sterradian_t<long double> operator""_nsr(long double value) {
  return nano_sterradian_t<long double>{value};
}

constexpr micro_sterradian_t<long double> operator""_usr(long double value) {
  return micro_sterradian_t<long double>{value};
}

constexpr milli_sterradian_t<long double> operator""_msr(long double value) {
  return milli_sterradian_t<long double>{value};
}

constexpr sterradian_t<long double> operator""_sr(long double value) {
  return sterradian_t<long double>{value};
}

} // namespace literals

} // namespace SI
