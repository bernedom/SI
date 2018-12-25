#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "unit.h"

namespace SI
{
/**
 * @brief specialisation of unit_t to represent length units
 *
 * */
template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
struct length_t : public unit_t<'L', _Exponent, _Ratio, _Type>
{
  using unit_t<'L', _Exponent, _Ratio, _Type>::unit_t;
};

inline namespace literals
{

template <char... _Digits>
constexpr auto operator""_m()
{
  return SI::detail::check_overflow<length_t<1, std::ratio<1>>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _km()
{
  return SI::detail::check_overflow<length_t<1, std::kilo>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _cm()
{
  return SI::detail::check_overflow<length_t<1, std::centi>, _Digits...>();
}

template <char... _Digits>
constexpr auto operator"" _mm()
{
  return SI::detail::check_overflow<length_t<1, std::milli>, _Digits...>();
}

constexpr auto operator"" _m(long double m)
{
  return length_t<1, std::ratio<1>, long double>(m);
}

constexpr auto operator"" _km(long double km)
{
  return length_t<1, std::kilo, long double>(km);
}

constexpr auto operator"" _cm(long double cm)
{
  return length_t<1, std::centi, long double>(cm);
}

constexpr auto operator"" _mm(long double mm)
{
  return length_t<1, std::milli, long double>(mm);
}
} // namespace literals
} // namespace SI
