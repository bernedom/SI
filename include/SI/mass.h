#pragma once
#include "detail/unit.h"

namespace SI
{

template <typename _Type, typename _Ratio = std::ratio<1>>
using mass_t = unit_t<'M', 1, _Type, _Ratio>;

inline namespace literals
{
template <char... _Digits>
constexpr auto operator""_g()
{
  return SI::detail::check_overflow<mass_t<int64_t, std::milli>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator""_mg()
{
  return SI::detail::check_overflow<mass_t<int64_t, std::micro>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator""_kg()
{
  return SI::detail::check_overflow<mass_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

constexpr auto operator"" _g(long double g)
{
  return mass_t<long double, std::milli>(g);
}

constexpr auto operator"" _mg(long double mg)
{
  return mass_t<long double, std::micro>(mg);
}

constexpr auto operator"" _kg(long double kg)
{
  return mass_t<long double, std::ratio<1>>(kg);
}

} // namespace literals
} // namespace SI