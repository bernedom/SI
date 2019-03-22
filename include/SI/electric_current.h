#pragma once

#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using electric_current_t = detail::unit_t<'I', 1, _Type, _Ratio>;

template <typename _Type>
using ampere_t = electric_current_t<_Type, std::ratio<1>>;
template <typename _Type>
using milli_ampere_t = electric_current_t<_Type, std::milli>;
template <typename _Type>
using kilo_ampere_t = electric_current_t<_Type, std::kilo>;
template <typename _Type>
using mega_ampere_t = electric_current_t<_Type, std::mega>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mA() {
  return SI::detail::check_overflow<milli_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_A() {
  return SI::detail::check_overflow<ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kA() {
  return SI::detail::check_overflow<kilo_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MA() {
  return SI::detail::check_overflow<mega_ampere_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _mA(long double mA) {
  return milli_ampere_t<long double>(mA);
}

constexpr auto operator"" _A(long double A) { return ampere_t<long double>(A); }

constexpr auto operator"" _kA(long double kA) {
  return kilo_ampere_t<long double>(kA);
}

constexpr auto operator"" _MA(long double MA) {
  return mega_ampere_t<long double>(MA);
}

} // namespace literals
} // namespace SI