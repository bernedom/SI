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

#include "length.h"

namespace SI {
template <typename _type, typename _ratio>
using area_t = detail::unit_t<'L', std::ratio<2>, _type, _ratio>;

template <typename _type> using square_metre_t = area_t<_type, std::ratio<1>>;
template <typename _type>
using square_centi_metre_t =
    area_t<_type, std::ratio_multiply<std::centi, std::centi>>;

template <typename _type>
using square_milli_metre_t =
    area_t<_type, std::ratio_multiply<std::milli, std::milli>>;

template <typename _type, typename _ratio>
using volume_t = detail::unit_t<'L', std::ratio<3>, _type, _ratio>;

template <typename _type> using cubic_metre_t = volume_t<_type, std::ratio<1>>;
template <typename _type>
using cubic_centi_metre_t = volume_t<_type, std::ratio<1, 1000000>>;
template <typename _type>
using cubic_milli_metre_t = volume_t<_type, std::nano>;

// specialized unit_symbol for usage with stream operators
template <>
struct unit_symbol<'L', std::ratio<1>, std::ratio<2>>
    : SI::detail::unit_symbol_impl<'m', '2'> {};

template <>
struct unit_symbol<'L', std::ratio<1, 10000>, std::ratio<2>>
    : SI::detail::unit_symbol_impl<'c', 'm', '2'> {};

template <>
struct unit_symbol<'L', std::micro, std::ratio<2>>
    : SI::detail::unit_symbol_impl<'m', 'm', '2'> {};

template <>
struct unit_symbol<'L', std::ratio<1>, std::ratio<3>>
    : SI::detail::unit_symbol_impl<'m', '3'> {};

template <>
struct unit_symbol<'L', std::ratio<1, 1000000>, std::ratio<3>>
    : SI::detail::unit_symbol_impl<'c', 'm', '3'> {};

template <>
struct unit_symbol<'L', std::nano, std::ratio<3>>
    : SI::detail::unit_symbol_impl<'m', 'm', '3'> {};

inline namespace literals {
template <char... _digits> constexpr square_metre_t<int64_t> operator""_m2() {
  return square_metre_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_metre_t<long double> operator"" _m2(long double m) {
  return square_metre_t<long double>(m);
}

template <char... _digits>
constexpr square_centi_metre_t<int64_t> operator""_cm2() {
  return square_centi_metre_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_centi_metre_t<long double> operator"" _cm2(long double cm) {
  return square_centi_metre_t<long double>(cm);
}

template <char... _digits>
constexpr square_milli_metre_t<int64_t> operator""_mm2() {
  return square_milli_metre_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_milli_metre_t<long double> operator"" _mm2(long double mm) {
  return square_milli_metre_t<long double>(mm);
}

template <char... _digits> constexpr cubic_metre_t<int64_t> operator""_m3() {
  return cubic_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_metre_t<long double> operator"" _m3(long double m) {
  return cubic_metre_t<long double>(m);
}

template <char... _digits>
constexpr cubic_centi_metre_t<int64_t> operator""_cm3() {
  return cubic_centi_metre_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_centi_metre_t<long double> operator"" _cm3(long double cm) {
  return cubic_centi_metre_t<long double>(cm);
}

template <char... _digits>
constexpr cubic_milli_metre_t<int64_t> operator""_mm3() {
  return cubic_milli_metre_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_milli_metre_t<long double> operator"" _mm3(long double mm) {
  return cubic_milli_metre_t<long double>(mm);
}

} // namespace literals

} // namespace SI
