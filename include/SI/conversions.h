#pragma once

#include "electric_charge.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// @todo calculate ratio
/// @todo add commutive operator
constexpr auto operator*(const electric_current_t<> &lhs, const time_t<> &rhs) {
  return electric_charge_t<>{lhs.raw_value() * rhs.raw_value()};
}

constexpr auto operator*(const time_t<> &lhs, const electric_current_t<> &rhs) {
  return rhs * lhs;
}
} // namespace SI