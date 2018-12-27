#pragma once

#include "electric_charge.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// @todo calculate ratio
template <char _exponent_lhs, typename _ratio_lhs, char _exponent_rhs,
          typename _ratio_rhs>
constexpr auto
operator*(const electric_current_t<_exponent_lhs, _ratio_lhs> &lhs,
          const time_t<_exponent_rhs, _ratio_rhs> &rhs) {
  return electric_charge_t<1, _ratio_lhs>{lhs.raw_value() * rhs.raw_value()};
}

template <char _exponent_lhs, typename _ratio_lhs, char _exponent_rhs,
          typename _ratio_rhs>
constexpr auto
operator*(const time_t<_exponent_lhs, _ratio_lhs> &lhs,
          const electric_current_t<_exponent_rhs, _ratio_rhs> &rhs) {
  return unit_cast<electric_current_t<_exponent_rhs, _ratio_lhs>>(rhs) * lhs;
}
} // namespace SI