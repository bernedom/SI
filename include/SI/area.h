#pragma once
#include "value_holder.h"

namespace SI
{
template <class R = std::ratio<1>, typename T = long long int>
struct area_t : public value_holder_t<R, T, 2>
{
  using value_holder_t<R, T, 2>::value_holder_t;
};
} // namespace SI