#pragma once

#include "electric_charge.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// multiply Amperes with seconds result is Coulomb
/// @todo consider if this can be merged with unit_t::operator*
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const electric_current_t<1, _ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<electric_charge_t<1, _ratio_lhs>>(
      electric_charge_t<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>>{
          lhs.raw_value() * rhs.raw_value()});
}

/// multiply  seconds wit Amperes result is Coulomb
/// @todo get rid of double unit cast
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const time_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<1, _ratio_rhs> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");
  return unit_cast<electric_charge_t<1, _ratio_lhs>>(rhs * lhs);
}

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const electric_charge_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<1, _ratio_rhs> &rhs) {
  return time_t<1, std::ratio<1>>{9};
}
} // namespace SI