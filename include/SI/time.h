#pragma once

//#include <chrono>
#include <ratio>

#include "value_holder.h"
namespace SI {

template <class R = std::ratio<1>, typename T = long long int>
struct time_t : public value_holder_t<R, T> {
  using value_holder_t<R, T>::value_holder_t;

  using value_holder_t<R, T>::operator*;
};
} // namespace SI