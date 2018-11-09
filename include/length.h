#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "area.h"
#include "value_holder.h"

template <class R = std::ratio<1>, typename T = long long int>
struct length_t : public value_holder_t<R, T> {
  using value_holder_t<R, T>::value_holder_t;

  using value_holder_t<R, T>::operator*;

  template <class Rr = std::ratio<1>>
  auto operator*(const length_t<Rr> &rhs) const {
    return area_t<typename std::ratio<1>>(1);
  }
};

namespace {
template <typename R>
constexpr length_t<R, long long int>
generate_length_type(const unsigned long long int magnitude) {
  if (magnitude >
      std::numeric_limits<typename length_t<R>::internal_type>::max()) {
    throw std::overflow_error("supplied value too large");
  }
  return length_t<R, long long int>(magnitude);
}
} // namespace

constexpr auto operator"" _m(const unsigned long long int m) {
  return generate_length_type<std::ratio<1>>(m);
}

constexpr auto operator"" _km(const unsigned long long int km) {
  return generate_length_type<std::kilo>(km);
}

constexpr auto operator"" _cm(const unsigned long long int cm) {
  return generate_length_type<std::centi>(cm);
}

constexpr auto operator"" _mm(const unsigned long long int mm) {
  return generate_length_type<std::milli>(mm);
}

constexpr auto operator"" _km(long double km) {
  return length_t<std::kilo, long double>(km);
}