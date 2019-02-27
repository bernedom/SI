#pragma once

#include <cstdint>
#include <type_traits>

namespace SI::detail {
template <intmax_t _Pn>
struct static_sign : std::integral_constant<intmax_t, (_Pn < 0) ? -1 : 1> {};

template <intmax_t _Pn>
struct static_abs
    : std::integral_constant<intmax_t, _Pn * static_sign<_Pn>::value> {};

template <intmax_t _Pn, intmax_t _Qn>
struct static_gcd : static_gcd<_Qn, (_Pn % _Qn)> {};

template <intmax_t _Pn>
struct static_gcd<_Pn, 0>
    : std::integral_constant<intmax_t, static_abs<_Pn>::value> {};

template <intmax_t _Qn>
struct static_gcd<0, _Qn>
    : std::integral_constant<intmax_t, static_abs<_Qn>::value> {};

} // namespace SI::detail