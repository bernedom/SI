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
template <typename _Type, typename _Ratio>
using area_t = detail::unit_t<'L', 2, _Type, _Ratio>;

template <typename _Type> using square_meter_t = area_t<_Type, std::ratio<1>>;
template <typename _Type>
using square_centi_meter_t =
    area_t<_Type, std::ratio_multiply<std::centi, std::centi>>;

template <typename _Type>
using square_milli_meter_t =
    area_t<_Type, std::ratio_multiply<std::milli, std::milli>>;

template <typename _Type, typename _Ratio>
using volume_t = detail::unit_t<'L', 3, _Type, _Ratio>;

template <typename _Type> using cubic_meter_t = volume_t<_Type, std::ratio<1>>;
template <typename _Type>
using cubic_centi_meter_t = volume_t<_Type, std::ratio<1, 1000000>>;
template <typename _Type>
using cubic_milli_meter_t = volume_t<_Type, std::nano>;

inline namespace literals {
template <char... _Digits> constexpr square_meter_t<int64_t> operator""_m2() {
  return square_meter_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr square_meter_t<long double> operator"" _m2(long double m) {
  return square_meter_t<long double>(m);
}

template <char... _Digits>
constexpr square_centi_meter_t<int64_t> operator""_cm2() {
  return square_centi_meter_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr square_centi_meter_t<long double> operator"" _cm2(long double cm) {
  return square_centi_meter_t<long double>(cm);
}

template <char... _Digits>
constexpr square_milli_meter_t<int64_t> operator""_mm2() {
  return square_milli_meter_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr square_milli_meter_t<long double> operator"" _mm2(long double mm) {
  return square_milli_meter_t<long double>(mm);
}

template <char... _Digits> constexpr cubic_meter_t<int64_t> operator""_m3() {
  return cubic_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr cubic_meter_t<long double> operator"" _m3(long double m) {
  return cubic_meter_t<long double>(m);
}

template <char... _Digits>
constexpr cubic_centi_meter_t<int64_t> operator""_cm3() {
  return cubic_centi_meter_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr cubic_centi_meter_t<long double> operator"" _cm3(long double cm) {
  return cubic_centi_meter_t<long double>(cm);
}

template <char... _Digits>
constexpr cubic_milli_meter_t<int64_t> operator""_mm3() {
  return cubic_milli_meter_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

constexpr cubic_milli_meter_t<long double> operator"" _mm3(long double mm) {
  return cubic_milli_meter_t<long double>(mm);
}

} // namespace literals

} // namespace SI