#pragma once

#include <chrono>
#include <ratio>

#include "unit.h"
namespace SI
{

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
struct time_t final : public unit_t<'T', _Exponent, _Ratio, _Type>
{
  using unit_t<'T', _Exponent, _Ratio, _Type>::unit_t;
};

inline namespace literals
{

template <char... _Digits>
constexpr auto operator"" _us()
{
  return SI::detail::check_overflow<
      SI::time_t<1, std::chrono::microseconds::period>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _ms()
{
  return SI::detail::check_overflow<
      SI::time_t<1, std::chrono::milliseconds::period>, _Digits...>();
}
template <char... _Digits>
constexpr auto operator"" _s()
{
  return SI::detail::check_overflow<SI::time_t<1, std::chrono::seconds::period>,
                                    _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _min()
{
  return SI::detail::check_overflow<SI::time_t<1, std::chrono::minutes::period>,
                                    _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _h()
{
  return SI::detail::check_overflow<time_t<1, std::chrono::hours::period>,
                                    _Digits...>();
}
} // namespace literals
} // namespace SI