#pragma once

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <class _Ratio, typename _Type = int64_t>
using velocity = unit_t<'v', 1, _Ratio, _Type>;

template <typename _ratio_lhs, typename _ratio_rhs, typename _Type = int64_t>
constexpr auto operator/(const length_t<1, _ratio_lhs, _Type> &lhs,
                         const time_t<1, _ratio_rhs, _Type> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return velocity<std::ratio_divide<_ratio_lhs, _ratio_rhs>, _Type>{
      lhs.raw_value() / rhs.raw_value()};
}

} // namespace SI