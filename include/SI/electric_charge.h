#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// unit for electric charge 'Q' where Q = T * I
template <typename _Type, typename _Ratio>
using electric_charge_t = detail::unit_t<'Q', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using coulomb_t = electric_charge_t<_Type, std::ratio<1>>;
template <typename _Type>
using milli_coulomb_t = electric_charge_t<_Type, std::milli>;
template <typename _Type>
using kilo_coulomb_t = electric_charge_t<_Type, std::kilo>;
template <typename _Type>
using mega_coulomb_t = electric_charge_t<_Type, std::mega>;

/// @todo find out why the operators have to be in SI::detail
/// maybe using preceeding :: helps
namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t,
                               time_single_t)
}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<milli_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<kilo_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<mega_coulomb_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _mC(long double mC) {
  return milli_coulomb_t<long double>(mC);
}

constexpr auto operator"" _C(long double C) {
  return coulomb_t<long double>(C);
}

constexpr auto operator"" _kC(long double kC) {
  return kilo_coulomb_t<long double>(kC);
}

constexpr auto operator"" _MC(long double MC) {
  return mega_coulomb_t<long double>(MC);
}

} // namespace literals
} // namespace SI