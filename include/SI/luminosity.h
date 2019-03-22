#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using luminosity_t = detail::unit_t<'J', 1, _Type, _Ratio>;

template <typename _Type> using candela_t = luminosity_t<_Type, std::ratio<1>>;
template <typename _Type>
using milli_candela_t = luminosity_t<_Type, std::milli>;
template <typename _Type> using kilo_candela_t = luminosity_t<_Type, std::kilo>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_cd() {
  return SI::detail::check_overflow<candela_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kcd() {
  return SI::detail::check_overflow<kilo_candela_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mcd() {
  return SI::detail::check_overflow<milli_candela_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _cd(long double cd) {
  return candela_t<long double>(cd);
}

constexpr auto operator"" _kcd(long double kcd) {
  return kilo_candela_t<long double>(kcd);
}

constexpr auto operator"" _mcd(long double mcd) {
  return milli_candela_t<long double>(mcd);
}

} // namespace literals
} // namespace SI