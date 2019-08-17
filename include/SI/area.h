/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "length.h"

namespace SI {
template <typename _type, typename _ratio>
using area_t = detail::unit_t<'L', 2, _type, _ratio>;

template <typename _type> using square_meter_t = area_t<_type, std::ratio<1>>;
template <typename _type>
using square_centi_meter_t =
    area_t<_type, std::ratio_multiply<std::centi, std::centi>>;

template <typename _type>
using square_milli_meter_t =
    area_t<_type, std::ratio_multiply<std::milli, std::milli>>;

template <typename _type, typename _ratio>
using volume_t = detail::unit_t<'L', 3, _type, _ratio>;

template <typename _type> using cubic_meter_t = volume_t<_type, std::ratio<1>>;
template <typename _type>
using cubic_centi_meter_t = volume_t<_type, std::ratio<1, 1000000>>;
template <typename _type>
using cubic_milli_meter_t = volume_t<_type, std::nano>;

inline namespace literals {
template <char... _digits> constexpr square_meter_t<int64_t> operator""_m2() {
  return square_meter_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_meter_t<long double> operator"" _m2(long double m) {
  return square_meter_t<long double>(m);
}

template <char... _digits>
constexpr square_centi_meter_t<int64_t> operator""_cm2() {
  return square_centi_meter_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_centi_meter_t<long double> operator"" _cm2(long double cm) {
  return square_centi_meter_t<long double>(cm);
}

template <char... _digits>
constexpr square_milli_meter_t<int64_t> operator""_mm2() {
  return square_milli_meter_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr square_milli_meter_t<long double> operator"" _mm2(long double mm) {
  return square_milli_meter_t<long double>(mm);
}

template <char... _digits> constexpr cubic_meter_t<int64_t> operator""_m3() {
  return cubic_meter_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_meter_t<long double> operator"" _m3(long double m) {
  return cubic_meter_t<long double>(m);
}

template <char... _digits>
constexpr cubic_centi_meter_t<int64_t> operator""_cm3() {
  return cubic_centi_meter_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_centi_meter_t<long double> operator"" _cm3(long double cm) {
  return cubic_centi_meter_t<long double>(cm);
}

template <char... _digits>
constexpr cubic_milli_meter_t<int64_t> operator""_mm3() {
  return cubic_milli_meter_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr cubic_milli_meter_t<long double> operator"" _mm3(long double mm) {
  return cubic_milli_meter_t<long double>(mm);
}

} // namespace literals

} // namespace SI