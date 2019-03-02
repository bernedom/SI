#pragma once

#include "detail/operator_helpers.h"

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

/// Type for velocity where v = L / T
template <typename _Ratio, typename _Type = int64_t>
using velocity_t = unit_t<'v', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_DIVISON(velocity_t, length_t, time_single_t)

} // namespace SI