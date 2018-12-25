#pragma once
#include "unit.h"

namespace SI {
template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
struct mass_t : public unit_t<'M', _Exponent, _Ratio, _Type> {
  using unit_t<'M', _Exponent, _Ratio, _Type>::unit_t;
};

inline namespace literals {
template <char... _Digits> constexpr auto operator""_g() {
  return SI::detail::check_overflow<mass_t<1, std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kg() {
  return SI::detail::check_overflow<mass_t<1, std::kilo>, _Digits...>();
}

constexpr auto operator"" _g(long double g) {
  return mass_t<1, std::ratio<1>, long double>(g);
}

constexpr auto operator"" _kg(long double kg) {
  return mass_t<1, std::kilo, long double>(kg);
}

} // namespace literals
} // namespace SI