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

template <char... _Digits> constexpr auto operator""_MA() {
  return SI::detail::check_overflow<electric_current_t<1, std::mega>,
                                    _Digits...>();
}

constexpr auto operator"" _mA(long double mA) {
  return electric_current_t<1, std::milli, long double>(mA);
}

constexpr auto operator"" _A(long double A) {
  return electric_current_t<1, std::ratio<1>, long double>(A);
}

constexpr auto operator"" _kA(long double kA) {
  return electric_current_t<1, std::kilo, long double>(kA);
}

constexpr auto operator"" _MA(long double MA) {
  return electric_current_t<1, std::mega, long double>(MA);
}

} // namespace literals
} // namespace SI