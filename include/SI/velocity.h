#pragma once

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using velocity = unit_t<'v', _Exponent, _Ratio, _Type>;

template <typename _ratio_lhs, typename _ratio_rhs, typename _type>
constexpr auto operator/(const length_t<1, _ratio_lhs, _type> &lhs,
                         const time_t<1, _ratio_rhs, _type> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<velocity<1, _ratio_lhs, _type>>(
      velocity<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>, _type>{
          lhs.raw_value() * rhs.raw_value()});
}

} // namespace SI