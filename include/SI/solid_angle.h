#pragma once

#include "detail/unit.h"

/// todo add rad and sr as literal operators

namespace SI {

template <typename _Type, typename _Ratio>
using solid_angle_t = detail::unit_t<'R', 1, _Type, _Ratio>;

template <typename _Type>
using sterradiant_t = solid_angle_t<_Type, std::ratio<1>>;
} // namespace SI