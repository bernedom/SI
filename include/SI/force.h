#pragma once

#include "acceleration.h"
#include "detail/operator_helpers.h"
#include "mass.h"
#include "unit.h"

namespace SI {
template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using force_t = unit_t<'F', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)

inline namespace literals {

template <char... _Digits> constexpr auto operator""_N() {
  return SI::detail::check_overflow<force_t<std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kN() {
  return SI::detail::check_overflow<force_t<std::kilo>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mN() {
  return SI::detail::check_overflow<force_t<std::milli>, _Digits...>();
}

constexpr auto operator"" _N(long double N) {
  return force_t<std::ratio<1>, long double>(N);
}

constexpr auto operator"" _kN(long double kN) {
  return force_t<std::kilo, long double>(kN);
}

constexpr auto operator"" _mN(long double mN) {
  return force_t<std::milli, long double>(mN);
}
} // namespace literals
} // namespace SI