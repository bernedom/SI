#pragma once
#include "detail.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using electric_current_t = unit_t<'I', _Exponent, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mA() {
  return SI::detail::check_overflow<electric_current_t<1, std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_A() {
  return SI::detail::check_overflow<electric_current_t<1, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kA() {
  return SI::detail::check_overflow<electric_current_t<1, std::kilo>,
                                    _Digits...>();
}

constexpr auto operator"" _mA(long double g) {
  return electric_current_t<1, std::milli, long double>(g);
}

constexpr auto operator"" _A(long double g) {
  return electric_current_t<1, std::ratio<1>, long double>(g);
}

constexpr auto operator"" _kA(long double kg) {
  return electric_current_t<1, std::kilo, long double>(kg);
}

} // namespace literals
} // namespace SI