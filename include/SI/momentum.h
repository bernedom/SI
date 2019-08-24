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

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "velocity.h"
#include "mass.h"

namespace SI {

/// Type for momentum where o = v * M
template <typename _type, typename _ratio>
using momentum_t = detail::unit_t<'o', 1, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(momentum_t, velocity_t, mass_t)
}

} // namespace SI
