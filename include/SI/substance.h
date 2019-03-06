#pragma once
#include "detail/unit.h"

namespace SI
{

template <typename _Type, typename _Ratio = std::ratio<1>>
using substance_t = unit_t<'N', 1, _Type, _Ratio>;

inline namespace literals
{
template <char... _Dimolits>
constexpr auto operator""_mol()
{
  return SI::detail::check_overflow<substance_t<int64_t, std::ratio<1>>,
                                    _Dimolits...>();
}

template <char... _Dimolits>
constexpr auto operator""_mmol()
{
  return SI::detail::check_overflow<substance_t<int64_t, std::milli>,
                                    _Dimolits...>();
}

template <char... _Dimolits>
constexpr auto operator""_kmol()
{
  return SI::detail::check_overflow<substance_t<int64_t, std::kilo>,
                                    _Dimolits...>();
}

constexpr auto operator"" _mol(long double mol)
{
  return substance_t<long double, std::ratio<1>>(mol);
}

constexpr auto operator"" _mmol(long double mmol)
{
  return substance_t<long double, std::milli>(mmol);
}

constexpr auto operator"" _kmol(long double kmol)
{
  return substance_t<long double, std::kilo>(kmol);
}

} // namespace literals
} // namespace SI