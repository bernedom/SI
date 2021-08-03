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

#include "detail/operator_helpers.h"

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "length.h"
#include "time.h"

namespace SI {

/// Type for velocity where v = L / T
template <typename _type, typename _ratio>
using velocity_t = detail::unit_t<'v', std::ratio<1>, _type, _ratio>;

template <typename _type, typename _ratio>
using velocity_squared_t = detail::unit_t<'v', std::ratio<2>, _type, _ratio>;

template <typename _type>
using metre_per_second_t = velocity_t<_type, std::ratio<1>::type>;

// ratio is calculated, so it gets reduced depending on the compiler
// so that 1_km/1_h results the same type as 1_km_p_h
template <typename _type>
using kilometre_per_hour_t =
    velocity_t<_type, std::ratio_divide<std::kilo, std::ratio<3600, 1>>::type>;

template <typename _type>
using speed_of_light_t = velocity_t<_type, std::ratio<299792458, 1>::type>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(velocity_t, length_t, time_t)
} // namespace detail

inline namespace literals {

template <char... _digits> constexpr speed_of_light_t<int64_t> operator""_c() {
  return speed_of_light_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr speed_of_light_t<long double> operator""_c(long double value) {
  return speed_of_light_t<long double>{value};
}

template <char... _digits>
constexpr metre_per_second_t<int64_t> operator""_m_p_s() {
  return metre_per_second_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits>
constexpr kilometre_per_hour_t<int64_t> operator""_km_p_h() {
  return kilometre_per_hour_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

constexpr metre_per_second_t<long double> operator""_m_p_s(long double value) {
  return metre_per_second_t<long double>{value};
}

constexpr kilometre_per_hour_t<long double>
operator""_km_p_h(long double value) {
  return kilometre_per_hour_t<long double>{value};
}

} // namespace literals

} // namespace SI
