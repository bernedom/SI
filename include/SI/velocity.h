#pragma once

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <class _Ratio, typename _Type = int64_t>
using velocity_t = unit_t<'v', 1, _Ratio, _Type>;

template <typename _ratio_lhs, typename _ratio_rhs, typename _Type = int64_t>
constexpr auto operator/(const length_t<_ratio_lhs, _Type> &lhs,
                         const time_t<1, _ratio_rhs, _Type> &rhs) {
  return detail::cross_unit_divide_impl<velocity_t>(lhs, rhs);
}

} // namespace SI