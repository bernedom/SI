#pragma once
#include "detail.h"
#include "unit.h"

#include "time.h"

namespace SI {
template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
struct electric_current_t : public unit_t<'I', _Exponent, _Ratio, _Type> {
  using unit_t<'I', _Exponent, _Ratio, _Type>::unit_t;

  using unit_t<'I', _Exponent, _Ratio, _Type>::operator*;
};

inline namespace literals {
template <char... _Digits> constexpr auto operator""_A() {
  return SI::detail::check_overflow<electric_current_t<1, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kA() {
  return SI::detail::check_overflow<electric_current_t<1, std::kilo>,
                                    _Digits...>();
}

constexpr auto operator"" _A(long double g) {
  return electric_current_t<1, std::ratio<1>, long double>(g);
}

constexpr auto operator"" _kA(long double kg) {
  return electric_current_t<1, std::kilo, long double>(kg);
}

} // namespace literals
} // namespace SI