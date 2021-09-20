/**
 * This file is part of "SI" version 2.1.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
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
template <typename _type, typename _ratio>
using acceleration_t = detail::unit_t<'a', std::ratio<1>, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(acceleration_t, velocity_t, time_t)
BUILD_UNIT_FROM_DIVISON(acceleration_t, length_t, time_squared_t)
BUILD_UNIT_FROM_DIVISON(acceleration_t, velocity_squared_t, length_t)
} // namespace detail

} // namespace SI
