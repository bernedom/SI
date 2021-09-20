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
#include "mass.h"

namespace SI {

/**
 * Astronomic units are not part of the SI standard but are accepted for use
 * within
 * */

template <typename _type>
using astronomic_unit_t = length_t<_type, std::ratio<149597870691, 1>>;
template <typename _type>
using lightyear_t = length_t<_type, std::ratio<9460730777119564, 1>>;
template <typename _type>
using parsec_t = length_t<_type, std::ratio<30856775814913700, 1>>;

inline namespace literals {

template <char... _digits>
constexpr astronomic_unit_t<int64_t> operator""_AU() {
  return astronomic_unit_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr lightyear_t<int64_t> operator""_ly() {
  return lightyear_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr parsec_t<int64_t> operator""_pc() {
  return parsec_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr astronomic_unit_t<long double> operator""_AU(long double value) {
  return astronomic_unit_t<long double>{value};
}

constexpr lightyear_t<long double> operator""_ly(long double value) {
  return lightyear_t<long double>{value};
}

constexpr parsec_t<long double> operator""_pc(long double value) {
  return parsec_t<long double>{value};
}

} // namespace literals

} // namespace SI
