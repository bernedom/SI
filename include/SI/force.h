#pragma once

#include "acceleration.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "mass.h"

namespace SI {
template <typename _Type = int64_t, class _Ratio = std::ratio<1>>
using force_t = unit_t<'F', 1, _Type, _Ratio>;

BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)

inline namespace literals {

template <char... _Digits> constexpr auto operator""_N() {
  return SI::detail::check_overflow<force_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kN() {
  return SI::detail::check_overflow<force_t<int64_t, std::kilo>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mN() {
  return SI::detail::check_overflow<force_t<int64_t, std::milli>, _Digits...>();
}

constexpr auto operator"" _N(long double N) {
  return force_t<long double, std::ratio<1>>(N);
}

constexpr auto operator"" _kN(long double kN) {
  return force_t<long double, std::kilo>(kN);
}

constexpr auto operator"" _mN(long double mN) {
  return force_t<long double, std::milli>(mN);
}
} // namespace literals
} // namespace SI