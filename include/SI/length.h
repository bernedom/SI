#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "unit.h"

namespace SI {
template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using length_t = unit_t<'L', 1, _Ratio, _Type>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_m() {
  return SI::detail::check_overflow<length_t<std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _km() {
  return SI::detail::check_overflow<length_t<std::kilo>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _cm() {
  return SI::detail::check_overflow<length_t<std::centi>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mm() {
  return SI::detail::check_overflow<length_t<std::milli>, _Digits...>();
}

constexpr auto operator"" _m(long double m) {
  return length_t<std::ratio<1>, long double>(m);
}

constexpr auto operator"" _km(long double km) {
  return length_t<std::kilo, long double>(km);
}

constexpr auto operator"" _cm(long double cm) {
  return length_t<std::centi, long double>(cm);
}

constexpr auto operator"" _mm(long double mm) {
  return length_t<std::milli, long double>(mm);
}
} // namespace literals
} // namespace SI
