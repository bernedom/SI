#pragma once

#include <chrono>
#include <ratio>

#include "unit.h"
namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = long long int>
struct time_t final : public unit_t<'T', _Exponent, _Ratio, _Type> {
  using unit_t<'T', _Exponent, _Ratio, _Type>::unit_t;

  using unit_t<'T', _Exponent, _Ratio, _Type>::operator*;
};
} // namespace SI

constexpr auto operator"" _s(unsigned long long int s) {
  return SI::detail::generate_unit_type_overflow_check<
      SI::time_t, 1, std::chrono::seconds::period>(s);
}

constexpr auto operator"" _min(unsigned long long int min) {
  return SI::detail::generate_unit_type_overflow_check<
      SI::time_t, 1, std::chrono::minutes::period>(min);
}
