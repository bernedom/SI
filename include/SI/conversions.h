#pragma once

#include "electric_charge.h"
#include "electric_current.h"
#include "time.h"

namespace SI {
/// @todo calcualate values
/// @todo calculate ratio
/// @todo add commutive operator
constexpr auto operator*(const electric_current_t<> &lhs, const time_t<> &rhs) {
  return 0_C;
}
} // namespace SI