#pragma once

#include "velocity.h"

namespace SI
{

template <class _Ratio, typename _Type = int64_t>
using acceleration_t = unit_t<'a', 2, _Ratio, _Type>;

template <typename _ratio_lhs, typename _ratio_rhs, typename _Type = int64_t>
constexpr auto operator/(const velocity_t<_ratio_lhs, _Type> &lhs,
                         const time_t<1, _ratio_rhs, _Type> &rhs)
{

  return detail::cross_unit_divide<acceleration_t>(lhs, rhs);
}

template <typename _ratio_lhs, typename _ratio_rhs, typename _Type = int64_t>
constexpr auto operator/(const length_t<_ratio_lhs, _Type> &lhs,
                         const time_t<2, _ratio_rhs, _Type> &rhs)
{

  return detail::cross_unit_divide<acceleration_t>(lhs, rhs);
}

} // namespace SI