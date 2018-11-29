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
          typename _Type = long long int>
struct length_t : public unit_t<'L', _Exponent, _Ratio, _Type>
{
  using unit_t<'L', _Exponent, _Ratio, _Type>::unit_t;

  using unit_t<'L', _Exponent, _Ratio, _Type>::operator*;
};

} // namespace SI

constexpr auto operator"" _m(const unsigned long long int m)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t, 1,
                                                       std::ratio<1>>(m);
}

constexpr auto operator"" _km(const unsigned long long int km)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t, 1,
                                                       std::kilo>(km);
}

constexpr auto operator"" _cm(const unsigned long long int cm)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t, 1,
                                                       std::centi>(cm);
}

constexpr auto operator"" _mm(const unsigned long long int mm)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t, 1,
                                                       std::milli>(mm);
}

constexpr auto operator"" _m(long double m)
{
  return SI::length_t<1, std::ratio<1>, long double>(m);
}

constexpr auto operator"" _km(long double km)
{
  return SI::length_t<1, std::kilo, long double>(km);
}

constexpr auto operator"" _mm(long double mm)
{
  return SI::length_t<1, std::milli, long double>(mm);
}
// namespace SI