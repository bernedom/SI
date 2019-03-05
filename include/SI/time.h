#pragma once

#include <chrono>
#include <ratio>

#include "detail/unit.h"
namespace SI {
template <char _Exponent = 1, typename _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using time_t = unit_t<'T', _Exponent, _Ratio, _Type>;

template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using time_single_t = unit_t<'T', 1, _Ratio, _Type>;

template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using time_squared_t = unit_t<'T', 2, _Ratio, _Type>;

inline namespace literals {

template <char... _Digits> constexpr auto operator"" _us() {
  return SI::detail::check_overflow<
      SI::time_t<1, std::chrono::microseconds::period>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _ms() {
  return SI::detail::check_overflow<
      SI::time_t<1, std::chrono::milliseconds::period>, _Digits...>();
}
template <char... _Digits> constexpr auto operator"" _s() {
  return SI::detail::check_overflow<SI::time_t<1, std::chrono::seconds::period>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _min() {
  return SI::detail::check_overflow<SI::time_t<1, std::chrono::minutes::period>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _h() {
  return SI::detail::check_overflow<time_t<1, std::chrono::hours::period>,
                                    _Digits...>();
}

constexpr auto operator"" _us(long double us) {
  return SI::time_t<1, std::chrono::microseconds::period, long double>{us};
}

constexpr auto operator"" _ms(long double ms) {
  return SI::time_t<1, std::chrono::milliseconds::period, long double>{ms};
}

constexpr auto operator"" _s(long double s) {
  return SI::time_t<1, std::chrono::seconds::period, long double>{s};
}

constexpr auto operator"" _min(long double min) {
  return SI::time_t<1, std::chrono::minutes::period, long double>{min};
}

constexpr auto operator"" _h(long double h) {
  return SI::time_t<1, std::chrono::hours::period, long double>{h};
}

} // namespace literals
} // namespace SI