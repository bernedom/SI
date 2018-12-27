#pragma once

#include "electric_charge.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// @todo calculate ratio - Question: should resulting unit always be of
/// ratio<1>?
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const electric_current_t<1, _ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  return electric_charge_t<1, _ratio_lhs>{
      lhs.raw_value() * unit_cast<time_t<1, _ratio_lhs>>(rhs).raw_value()};
}

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const time_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<1, _ratio_rhs> &rhs) {
  return unit_cast<electric_current_t<1, _ratio_lhs>>(rhs) * lhs;
}
} // namespace SI