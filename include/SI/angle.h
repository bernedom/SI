/**
 * This file is part of "SI" version 1.5.1
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
/// Type for angle (which should be buildable from m/m (sin/cos))
template <typename _type, typename _ratio>
using angle_t = detail::unit_t<'r', 1, _type, _ratio>;

template <typename _type> using atto_radiant_t = angle_t<_type, std::atto>;
template <typename _type> using femto_radiant_t = angle_t<_type, std::femto>;
template <typename _type> using pico_radiant_t = angle_t<_type, std::pico>;
template <typename _type> using nano_radiant_t = angle_t<_type, std::nano>;
template <typename _type> using micro_radiant_t = angle_t<_type, std::micro>;
template <typename _type> using milli_radiant_t = angle_t<_type, std::milli>;
template <typename _type> using radiant_t = angle_t<_type, std::ratio<1>>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'r', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'r', 'a', 'd'> {};

template <typename _ratio>
struct unit_symbol<'r', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'r',
                                   'a', 'd'> {
  static_assert(std::ratio_less_equal<_ratio, std::ratio<1>>::value,
                "Generic streaming only implemented for ratios <=1");
};

inline namespace literals {

template <char... _digits> constexpr atto_radiant_t<int64_t> operator""_arad() {
  return atto_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr femto_radiant_t<int64_t> operator""_frad() {
  return femto_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_radiant_t<int64_t> operator""_prad() {
  return pico_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_radiant_t<int64_t> operator""_nrad() {
  return nano_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr micro_radiant_t<int64_t> operator""_urad() {
  return micro_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr milli_radiant_t<int64_t> operator""_mrad() {
  return milli_radiant_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr radiant_t<int64_t> operator""_rad() {
  return radiant_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_radiant_t<long double> operator""_arad(long double value) {
  return atto_radiant_t<long double>{value};
}

constexpr femto_radiant_t<long double> operator""_frad(long double value) {
  return femto_radiant_t<long double>{value};
}

constexpr pico_radiant_t<long double> operator""_prad(long double value) {
  return pico_radiant_t<long double>{value};
}

constexpr nano_radiant_t<long double> operator""_nrad(long double value) {
  return nano_radiant_t<long double>{value};
}

constexpr micro_radiant_t<long double> operator""_urad(long double value) {
  return micro_radiant_t<long double>{value};
}

constexpr milli_radiant_t<long double> operator""_mrad(long double value) {
  return milli_radiant_t<long double>{value};
}

constexpr radiant_t<long double> operator""_rad(long double value) {
  return radiant_t<long double>{value};
}

} // namespace literals

} // namespace SI