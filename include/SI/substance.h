#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using substance_t = detail::unit_t<'N', 1, _Type, _Ratio>;

template <typename _Type> using mol_t = substance_t<_Type, std::ratio<1>>;
template <typename _Type> using milli_mol_t = substance_t<_Type, std::milli>;
template <typename _Type> using kilo_mol_t = substance_t<_Type, std::kilo>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mol() {
  return SI::detail::check_overflow<mol_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kmol() {
  return SI::detail::check_overflow<kilo_mol_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mmol() {
  return SI::detail::check_overflow<milli_mol_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _mol(long double mol) {
  return mol_t<long double>(mol);
}

constexpr auto operator"" _kmol(long double kmol) {
  return kilo_mol_t<long double>(kmol);
}

constexpr auto operator"" _mmol(long double mmol) {
  return milli_mol_t<long double>(mmol);
}

} // namespace literals
} // namespace SI