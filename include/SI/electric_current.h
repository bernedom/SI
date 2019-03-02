#pragma once

#include "unit.h"

namespace SI {

template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using electric_current_t = unit_t<'I', 1, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mA() {
  return SI::detail::check_overflow<electric_current_t<std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_A() {
  return SI::detail::check_overflow<electric_current_t<std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kA() {
  return SI::detail::check_overflow<electric_current_t<std::kilo>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MA() {
  return SI::detail::check_overflow<electric_current_t<std::mega>,
                                    _Digits...>();
}

constexpr auto operator"" _mA(long double mA) {
  return electric_current_t<std::milli, long double>(mA);
}

constexpr auto operator"" _A(long double A) {
  return electric_current_t<std::ratio<1>, long double>(A);
}

constexpr auto operator"" _kA(long double kA) {
  return electric_current_t<std::kilo, long double>(kA);
}

constexpr auto operator"" _MA(long double MA) {
  return electric_current_t<std::mega, long double>(MA);
}

} // namespace literals
} // namespace SI