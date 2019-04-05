#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"

namespace SI {

template <typename _Type, class _Ratio = std::ratio<1>>
using absorbed_dose_t = detail::unit_t<'D', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_gray_t = absorbed_dose_t<_Type, std::atto>;
template <typename _Type>
using femto_gray_t = absorbed_dose_t<_Type, std::femto>;
template <typename _Type> using pico_gray_t = absorbed_dose_t<_Type, std::pico>;
template <typename _Type> using nano_gray_t = absorbed_dose_t<_Type, std::nano>;
template <typename _Type>
using micro_gray_t = absorbed_dose_t<_Type, std::micro>;
template <typename _Type>
using milli_gray_t = absorbed_dose_t<_Type, std::milli>;
template <typename _Type> using gray_t = absorbed_dose_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_gray_t = absorbed_dose_t<_Type, std::kilo>;
template <typename _Type> using mega_gray_t = absorbed_dose_t<_Type, std::mega>;
template <typename _Type> using giga_gray_t = absorbed_dose_t<_Type, std::giga>;
template <typename _Type> using tera_gray_t = absorbed_dose_t<_Type, std::tera>;
template <typename _Type> using peta_gray_t = absorbed_dose_t<_Type, std::peta>;
template <typename _Type> using exa_gray_t = absorbed_dose_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aGy() {
  return SI::detail::check_overflow<atto_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fGy() {
  return SI::detail::check_overflow<femto_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pGy() {
  return SI::detail::check_overflow<pico_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nGy() {
  return SI::detail::check_overflow<nano_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uGy() {
  return SI::detail::check_overflow<micro_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mGy() {
  return SI::detail::check_overflow<milli_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Gy() {
  return SI::detail::check_overflow<gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kGy() {
  return SI::detail::check_overflow<kilo_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MGy() {
  return SI::detail::check_overflow<mega_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GGy() {
  return SI::detail::check_overflow<giga_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TGy() {
  return SI::detail::check_overflow<tera_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PGy() {
  return SI::detail::check_overflow<peta_gray_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EGy() {
  return SI::detail::check_overflow<exa_gray_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aGy(long double value) {
  return atto_gray_t<long double>{value};
}

constexpr auto operator""_fGy(long double value) {
  return femto_gray_t<long double>{value};
}

constexpr auto operator""_pGy(long double value) {
  return pico_gray_t<long double>{value};
}

constexpr auto operator""_nGy(long double value) {
  return nano_gray_t<long double>{value};
}

constexpr auto operator""_uGy(long double value) {
  return micro_gray_t<long double>{value};
}

constexpr auto operator""_mGy(long double value) {
  return milli_gray_t<long double>{value};
}

constexpr auto operator""_Gy(long double value) {
  return gray_t<long double>{value};
}

constexpr auto operator""_kGy(long double value) {
  return kilo_gray_t<long double>{value};
}

constexpr auto operator""_MGy(long double value) {
  return mega_gray_t<long double>{value};
}

constexpr auto operator""_GGy(long double value) {
  return giga_gray_t<long double>{value};
}

constexpr auto operator""_TGy(long double value) {
  return tera_gray_t<long double>{value};
}

constexpr auto operator""_PGy(long double value) {
  return peta_gray_t<long double>{value};
}

constexpr auto operator""_EGy(long double value) {
  return exa_gray_t<long double>{value};
}

} // namespace literals
} // namespace SI
