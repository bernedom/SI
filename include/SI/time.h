#pragma once

#include <chrono>
#include <ratio>

#include "detail/unit.h"
namespace SI
{
template <char _Exponent, typename _Type, typename _Ratio = std::ratio<1>>
using time_t = unit_t<'T', _Exponent, _Type, _Ratio>;

template <typename _Type, typename _Ratio = std::ratio<1>>
using time_single_t = unit_t<'T', 1, _Type, _Ratio>;

template <typename _Type, typename _Ratio = std::ratio<1>>
using time_squared_t = unit_t<'T', 2, _Type, _Ratio>;

inline namespace literals
{

template <char... _Digits>
constexpr auto operator"" _us()
{
  return SI::detail::check_overflow<
      SI::time_t<1, int64_t, std::chrono::microseconds::period>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _ms()
{
  return SI::detail::check_overflow<
      SI::time_t<1, int64_t, std::chrono::milliseconds::period>, _Digits...>();
}
template <char... _Digits>
constexpr auto operator"" _s()
{
  return SI::detail::check_overflow<
      SI::time_t<1, int64_t, std::chrono::seconds::period>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _min()
{
  return SI::detail::check_overflow<
      SI::time_t<1, int64_t, std::chrono::minutes::period>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _h()
{
  return SI::detail::check_overflow<
      time_t<1, int64_t, std::chrono::hours::period>, _Digits...>();
}

constexpr auto operator"" _us(long double us)
{
  return SI::time_t<1, long double, std::chrono::microseconds::period>{us};
}

constexpr auto operator"" _ms(long double ms)
{
  return SI::time_t<1, long double, std::chrono::milliseconds::period>{ms};
}

constexpr auto operator"" _s(long double s)
{
  return SI::time_t<1, long double, std::chrono::seconds::period>{s};
}

constexpr auto operator"" _min(long double min)
{
  return SI::time_t<1, long double, std::chrono::minutes::period>{min};
}

constexpr auto operator"" _h(long double h)
{
  return SI::time_t<1, long double, std::chrono::hours::period>{h};
}

} // namespace literals
} // namespace SI