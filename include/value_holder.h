#pragma once
#include <ratio>
#include <type_traits>

template <class R = std::ratio<1>, typename T = long long int>
struct value_holder_t
{
  static_assert(std::is_arithmetic<T>::value, "T is an arithmetic value");
  typedef R ratio;
  typedef T internal_type;
  constexpr value_holder_t(T v) : value_{v} {}

  constexpr internal_type raw_value() const { return value_; }

  template <class Rr = std::ratio<1>>
  constexpr bool operator==(const value_holder_t<Rr> &rhs) const
  {
    return rhs.value_ * value_holder_t<Rr>::ratio::num /
               value_holder_t<Rr>::ratio::den ==
           value_ * ratio::num / ratio::den;
  }
  constexpr value_holder_t operator*(const T f) const { return {value_ * f}; }

  constexpr value_holder_t operator-() { return {-value_}; }

  template <class Rr = std::ratio<1>>
  constexpr auto ratio_to(const value_holder_t<Rr> &rhs) const
  {
    return std::ratio_multiply<ratio, Rr>{};
  }

  internal_type value_;
};
