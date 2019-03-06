#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "detail/unit.h"

namespace SI {
template <typename _Type, typename _Ratio = std::ratio<1>>
using length_t = detail::unit_t<'L', 1, _Type, _Ratio>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_m() {
  return SI::detail::check_overflow<length_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _km() {
  return SI::detail::check_overflow<length_t<int64_t, std::kilo>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _cm() {
  return SI::detail::check_overflow<length_t<int64_t, std::centi>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mm() {
  return SI::detail::check_overflow<length_t<int64_t, std::milli>,
                                    _Digits...>();
}

constexpr auto operator"" _m(long double m) {
  return length_t<long double, std::ratio<1>>(m);
}

constexpr auto operator"" _km(long double km) {
  return length_t<long double, std::kilo>(km);
}

constexpr auto operator"" _cm(long double cm) {
  return length_t<long double, std::centi>(cm);
}

constexpr auto operator"" _mm(long double mm) {
  return length_t<long double, std::milli>(mm);
}
} // namespace literals
} // namespace SI
