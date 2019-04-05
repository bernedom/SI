#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"

namespace SI {

template <typename _Type, class _Ratio = std::ratio<1>>
using equivalent_dose_t = detail::unit_t<'D', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_sievert_t = equivalent_dose_t<_Type, std::atto>;
template <typename _Type>
using femto_sievert_t = equivalent_dose_t<_Type, std::femto>;
template <typename _Type>
using pico_sievert_t = equivalent_dose_t<_Type, std::pico>;
template <typename _Type>
using nano_sievert_t = equivalent_dose_t<_Type, std::nano>;
template <typename _Type>
using micro_sievert_t = equivalent_dose_t<_Type, std::micro>;
template <typename _Type>
using milli_sievert_t = equivalent_dose_t<_Type, std::milli>;
template <typename _Type>
using sievert_t = equivalent_dose_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_sievert_t = equivalent_dose_t<_Type, std::kilo>;
template <typename _Type>
using mega_sievert_t = equivalent_dose_t<_Type, std::mega>;
template <typename _Type>
using giga_sievert_t = equivalent_dose_t<_Type, std::giga>;
template <typename _Type>
using tera_sievert_t = equivalent_dose_t<_Type, std::tera>;
template <typename _Type>
using peta_sievert_t = equivalent_dose_t<_Type, std::peta>;
template <typename _Type>
using exa_sievert_t = equivalent_dose_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aSv() {
  return SI::detail::check_overflow<atto_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fSv() {
  return SI::detail::check_overflow<femto_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pSv() {
  return SI::detail::check_overflow<pico_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nSv() {
  return SI::detail::check_overflow<nano_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uSv() {
  return SI::detail::check_overflow<micro_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mSv() {
  return SI::detail::check_overflow<milli_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Sv() {
  return SI::detail::check_overflow<sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kSv() {
  return SI::detail::check_overflow<kilo_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MSv() {
  return SI::detail::check_overflow<mega_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GSv() {
  return SI::detail::check_overflow<giga_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TSv() {
  return SI::detail::check_overflow<tera_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PSv() {
  return SI::detail::check_overflow<peta_sievert_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ESv() {
  return SI::detail::check_overflow<exa_sievert_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aSv(long double value) {
  return atto_sievert_t<long double>{value};
}

constexpr auto operator""_fSv(long double value) {
  return femto_sievert_t<long double>{value};
}

constexpr auto operator""_pSv(long double value) {
  return pico_sievert_t<long double>{value};
}

constexpr auto operator""_nSv(long double value) {
  return nano_sievert_t<long double>{value};
}

constexpr auto operator""_uSv(long double value) {
  return micro_sievert_t<long double>{value};
}

constexpr auto operator""_mSv(long double value) {
  return milli_sievert_t<long double>{value};
}

constexpr auto operator""_Sv(long double value) {
  return sievert_t<long double>{value};
}

constexpr auto operator""_kSv(long double value) {
  return kilo_sievert_t<long double>{value};
}

constexpr auto operator""_MSv(long double value) {
  return mega_sievert_t<long double>{value};
}

constexpr auto operator""_GSv(long double value) {
  return giga_sievert_t<long double>{value};
}

constexpr auto operator""_TSv(long double value) {
  return tera_sievert_t<long double>{value};
}

constexpr auto operator""_PSv(long double value) {
  return peta_sievert_t<long double>{value};
}

constexpr auto operator""_ESv(long double value) {
  return exa_sievert_t<long double>{value};
}

} // namespace literals
} // namespace SI
