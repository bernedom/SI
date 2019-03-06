#pragma once

#include "detail/unit.h"

namespace SI
{

template <typename _Type, typename _Ratio = std::ratio<1>>
using electric_current_t = unit_t<'I', 1, _Type, _Ratio>;

inline namespace literals
{
template <char... _Digits>
constexpr auto operator""_mA()
{
  return SI::detail::check_overflow<electric_current_t<int64_t, std::milli>,
                                    _Digits...>();
}

template <char... _Digits>
constexpr auto operator""_A()
{
  return SI::detail::check_overflow<electric_current_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits>
constexpr auto operator""_kA()
{
  return SI::detail::check_overflow<electric_current_t<int64_t, std::kilo>,
                                    _Digits...>();
}

template <char... _Digits>
constexpr auto operator""_MA()
{
  return SI::detail::check_overflow<electric_current_t<int64_t, std::mega>,
                                    _Digits...>();
}

constexpr auto operator"" _mA(long double mA)
{
  return electric_current_t<long double, std::milli>(mA);
}

constexpr auto operator"" _A(long double A)
{
  return electric_current_t<long double, std::ratio<1>>(A);
}

constexpr auto operator"" _kA(long double kA)
{
  return electric_current_t<long double, std::kilo>(kA);
}

constexpr auto operator"" _MA(long double MA)
{
  return electric_current_t<long double, std::mega>(MA);
}

} // namespace literals
} // namespace SI