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

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "mass.h"
#include "velocity.h"

namespace SI {

/// Type for momentum where o = v * M
template <typename _type, typename _ratio>
using momentum_t = detail::unit_t<'o', std::ratio<1>, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(momentum_t, velocity_t, mass_t)
}

} // namespace SI
