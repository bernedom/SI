#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using mass_t = unit_t<'M', 1, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_g() {
  return SI::detail::check_overflow<mass_t<std::milli>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mg() {
  return SI::detail::check_overflow<mass_t<std::micro>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kg() {
  return SI::detail::check_overflow<mass_t<std::ratio<1>>, _Digits...>();
}

constexpr auto operator"" _g(long double g) {
  return mass_t<std::milli, long double>(g);
}

constexpr auto operator"" _mg(long double mg) {
  return mass_t<std::micro, long double>(mg);
}

constexpr auto operator"" _kg(long double kg) {
  return mass_t<std::ratio<1>, long double>(kg);
}

} // namespace literals
} // namespace SI