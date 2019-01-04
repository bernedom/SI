#pragma once
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using substance_t = unit_t<'N', _Exponent, _Ratio, _Type>;

inline namespace literals {
template <char... _Dimolits> constexpr auto operator""_mol() {
  return SI::detail::check_overflow<substance_t<1, std::ratio<1>>,
                                    _Dimolits...>();
}

template <char... _Dimolits> constexpr auto operator""_mmol() {
  return SI::detail::check_overflow<substance_t<1, std::milli>, _Dimolits...>();
}

template <char... _Dimolits> constexpr auto operator""_kmol() {
  return SI::detail::check_overflow<substance_t<1, std::kilo>, _Dimolits...>();
}

constexpr auto operator"" _mol(long double mol) {
  return substance_t<1, std::ratio<1>, long double>(mol);
}

constexpr auto operator"" _mmol(long double mmol) {
  return substance_t<1, std::milli, long double>(mmol);
}

constexpr auto operator"" _kmol(long double kmol) {
  return substance_t<1, std::kilo, long double>(kmol);
}

} // namespace literals
} // namespace SI