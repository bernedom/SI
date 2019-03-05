#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Type = int64_t, typename _Ratio = std::ratio<1>>
using luminosity_t = unit_t<'J', 1, _Type, _Ratio>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_cd() {
  return SI::detail::check_overflow<luminosity_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mcd() {
  return SI::detail::check_overflow<luminosity_t<int64_t, std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kcd() {
  return SI::detail::check_overflow<luminosity_t<int64_t, std::kilo>,
                                    _Digits...>();
}

constexpr auto operator"" _cd(long double cd) {
  return luminosity_t<long double, std::ratio<1>>(cd);
}

constexpr auto operator"" _mcd(long double mcd) {
  return luminosity_t<long double, std::milli>(mcd);
}

constexpr auto operator"" _kcd(long double kcd) {
  return luminosity_t<long double, std::kilo>(kcd);
}

} // namespace literals
} // namespace SI