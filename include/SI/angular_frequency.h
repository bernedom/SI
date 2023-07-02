/**
 * This file is part of "SI" version 2.5.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling physical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "angle.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "frequency.h"
#include "time.h"

namespace SI {

/// Type for velocity where w =  r / T
template <typename _type, typename _ratio>
using angular_frequency_t = detail::unit_t<'w', std::ratio<1>, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(angular_frequency_t, angle_t, frequency_t)
BUILD_UNIT_FROM_DIVISION(angular_frequency_t, angle_t, time_t)
} // namespace detail
} // namespace SI