#pragma once

#include <chrono>
#include <ratio>

#include "value_holder.h"
namespace SI {

template <class R = std::ratio<1>, typename T = long long int>
struct time_t : public value_holder_t<R, T> {
  using value_holder_t<R, T>::value_holder_t;

  using value_holder_t<R, T>::operator*;
};
} // namespace SI

constexpr auto operator"" _s(unsigned long long int s) {
  return SI::time_t<std::chrono::seconds::period, std::chrono::seconds>(
      std::chrono::seconds(s));
}

constexpr auto operator"" _min(unsigned long long int min) {
  return SI::time_t<std::chrono::minutes::period, std::chrono::minutes>(
      std::chrono::minutes(min));
}
