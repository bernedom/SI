#pragma once

#include "detail/unit.h"

namespace SI {
/// Type for angle (which should be buildable from m/m (sin/cos))
template <typename _Type, typename _Ratio>
using angle_t = detail::unit_t<'r', 1, _Type, _Ratio>;

template <typename _Type> using radiant_t = angle_t<_Type, std::ratio<1>>;

template <typename _Type, typename _Ratio>
using room_angle_t = detail::unit_t<'R', 1, _Type, _Ratio>;

template <typename _Type>
using sterradiant_t = room_angle_t<_Type, std::ratio<1>>;
} // namespace SI