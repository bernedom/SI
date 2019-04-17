#pragma once

#include "detail/operator_helpers.h"
#include "time.h"
#include "velocity.h"

namespace SI {

/// Type for acceleration a = v / t or a = L / t^2
template <typename _Type, typename _Ratio>
using acceleration_t = detail::unit_t<'a', 1, _Type, _Ratio>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(acceleration_t, velocity_t, time_t)
BUILD_UNIT_FROM_DIVISON(acceleration_t, length_t, time_squared_t)
} // namespace detail

} // namespace SI