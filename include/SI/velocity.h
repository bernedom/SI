#pragma once

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using velocity = unit_t<'v', _Exponent, _Ratio, _Type>;

/// multiply Amperes with seconds result is Coulomb
/// @todo consider if this can be merged with unit_t::operator*
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const length_t<1, _ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<velocity<1, _ratio_lhs>>(
      velocity<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>>{
          lhs.raw_value() * rhs.raw_value()});
}

} // namespace SI