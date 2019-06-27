/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
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