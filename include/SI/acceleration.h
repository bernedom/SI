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
#include "time.h"
#include "velocity.h"

namespace SI {

/// Type for acceleration a = v / t or a = L / t^2
template <typename _type, typename _ratio>
using acceleration_t = detail::unit_t<'a', std::ratio<1>, _type, _ratio>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'a', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'m', '/', 's', '^', '2'> {};

template <typename _ratio>
struct unit_symbol<'a', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'm',
                                   '/', 's', '^', '2'> {};

namespace detail {
BUILD_UNIT_FROM_DIVISION(acceleration_t, velocity_t, time_t)
BUILD_UNIT_FROM_DIVISION(acceleration_t, length_t, time_squared_t)
BUILD_UNIT_FROM_DIVISION(acceleration_t, velocity_squared_t, length_t)
} // namespace detail

} // namespace SI
