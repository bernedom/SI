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

#include "detail/operator_helpers.h"

#include "area.h"
#include "time.h"

namespace SI {

template <typename _type, typename _ratio>
using surface_flow_t = detail::unit_t<'s', std::ratio<1>, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_DIVISION(surface_flow_t, area_t, time_t)

}

template <typename _type, typename _ratio>
using volumetric_flow_t = detail::unit_t<'V', std::ratio<1>, _type, _ratio>;

namespace detail {
BUILD_UNIT_FROM_DIVISION(volumetric_flow_t, volume_t, time_t)

}

} // namespace SI