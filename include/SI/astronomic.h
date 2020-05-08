#pragma once

#include "length.h"

namespace SI {

template <typename _type>
using astronomic_unit_t = length_t<_type, std::ratio<149597870691, 1>>;
template <typename _type>
using lightyear_t = length_t<_type, std::ratio<9460730777119564, 1>>;

namespace literals {

template <char... _digits>
constexpr astronomic_unit_t<int64_t> operator""_AU() {
  return astronomic_unit_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr lightyear_t<int64_t> operator""_ly() {
  return lightyear_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr astronomic_unit_t<long double> operator""_AU(long double value) {
  return astronomic_unit_t<long double>{value};
}

constexpr lightyear_t<long double> operator""_ly(long double value) {
  return lightyear_t<long double>{value};
}

} // namespace literals

} // namespace SI