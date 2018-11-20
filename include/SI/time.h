#pragma once

//#include <chrono>
#include <ratio>

#include "value_holder.h"
namespace SI
{

template <class R = std::ratio<1>, typename T = long long int>
struct time_t : public value_holder_t<R, T>
{
  using value_holder_t<R, T>::value_holder_t;

  using value_holder_t<R, T>::operator*;
};
} // namespace SI

constexpr auto operator"" _s(unsigned long long int s)
{
  return SI::detail::generate_unit_type_overflow_check<SI::time_t, std::ratio<1>>(s);
}