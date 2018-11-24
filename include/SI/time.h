#pragma once

#include <chrono>
#include <ratio>

#include "value_holder.h"
namespace SI
{

template <class _Ratio = std::ratio<1>, typename _Type = long long int>
struct time_t final : public value_holder_t<'T', _Ratio, _Type>
{
  using value_holder_t<'T', _Ratio, _Type>::value_holder_t;

  using value_holder_t<'T', _Ratio, _Type>::operator*;
};
} // namespace SI

constexpr auto operator"" _s(unsigned long long int s)
{
  return SI::detail::generate_unit_type_overflow_check<
      SI::time_t, std::chrono::seconds::period>(s);
}

constexpr auto operator"" _min(unsigned long long int min)
{
  return SI::detail::generate_unit_type_overflow_check<
      SI::time_t, std::chrono::minutes::period>(min);
}
