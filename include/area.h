#pragma once
#include "value_holder.h"

template <class R = std::ratio<1>, typename T = long long int>
struct area_t : public value_holder_t<R, T> {
  using value_holder_t<R, T>::value_holder_t;
};