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
/// Type for angle (which should be buildable from m/m (sin/cos))
template <typename _type, typename _ratio>
using angle_t = detail::unit_t<'r', std::ratio<1>, _type, _ratio>;

template <typename _type> using atto_radian_t = angle_t<_type, std::atto>;
template <typename _type> using femto_radian_t = angle_t<_type, std::femto>;
template <typename _type> using pico_radian_t = angle_t<_type, std::pico>;
template <typename _type> using nano_radian_t = angle_t<_type, std::nano>;
template <typename _type> using micro_radian_t = angle_t<_type, std::micro>;
template <typename _type> using milli_radian_t = angle_t<_type, std::milli>;
template <typename _type> using radian_t = angle_t<_type, std::ratio<1>>;

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

template <char... _digits> constexpr atto_radian_t<int64_t> operator""_arad() {
  return atto_radian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_radian_t<int64_t> operator""_frad() {
  return femto_radian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_radian_t<int64_t> operator""_prad() {
  return pico_radian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_radian_t<int64_t> operator""_nrad() {
  return nano_radian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_radian_t<int64_t> operator""_urad() {
  return micro_radian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_radian_t<int64_t> operator""_mrad() {
  return milli_radian_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr radian_t<int64_t> operator""_rad() {
  return radian_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_radian_t<long double> operator""_arad(long double value) {
  return atto_radian_t<long double>{value};
}

constexpr femto_radian_t<long double> operator""_frad(long double value) {
  return femto_radian_t<long double>{value};
}

constexpr pico_radian_t<long double> operator""_prad(long double value) {
  return pico_radian_t<long double>{value};
}

constexpr nano_radian_t<long double> operator""_nrad(long double value) {
  return nano_radian_t<long double>{value};
}

constexpr micro_radian_t<long double> operator""_urad(long double value) {
  return micro_radian_t<long double>{value};
}

constexpr milli_radian_t<long double> operator""_mrad(long double value) {
  return milli_radian_t<long double>{value};
}

constexpr radian_t<long double> operator""_rad(long double value) {
  return radian_t<long double>{value};
}

} // namespace literals

} // namespace SI
