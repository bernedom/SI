#pragma once

#include "acceleration.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "mass.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _Type, _Ratio>;

template <typename _Type> using newton_t = force_t<_Type, std::ratio<1>>;
template <typename _Type> using milli_newton_t = force_t<_Type, std::milli>;
template <typename _Type> using kilo_newton_t = force_t<_Type, std::kilo>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)
}

inline namespace literals {

template <char... _Digits> constexpr auto operator""_N() {
  return SI::detail::check_overflow<newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kN() {
  return SI::detail::check_overflow<kilo_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mN() {
  return SI::detail::check_overflow<milli_newton_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _N(long double N) { return newton_t<long double>(N); }

constexpr auto operator"" _kN(long double kN) {
  return kilo_newton_t<long double>(kN);
}

constexpr auto operator"" _mN(long double mN) {
  return milli_newton_t<long double>(mN);
}
} // namespace literals
} // namespace SI