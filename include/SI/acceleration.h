#pragma once

#include "detail/operator_helpers.h"
#include "velocity.h"

namespace SI {

/// Type for acceleration a = v / t or a = L / t^2
template <typename _Ratio, typename _Type = int64_t>
using acceleration_t = unit_t<'a', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_DIVISON(acceleration_t, velocity_t, time_single_t)
BUILD_UNIT_FROM_DIVISON(acceleration_t, length_t, time_squared_t)

} // namespace SI