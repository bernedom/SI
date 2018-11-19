#pragma once
#include <ratio>
#include <type_traits>

/**
 * @brief base template class for holding values of type T to be multiplied with
 * a ratio R
 *
 * @tparam R Ratio in relation to the base unit of a SI unit
 * @tparam T internal representation of the value
 * */
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
  /// multiply with a non-unit scalar
  constexpr value_holder_t operator*(const T f) const { return {value_ * f}; }

  /// negate operation
  constexpr value_holder_t operator-() { return {-value_}; }

  /// @returns the ratio between two value holders
  template <class Rr = std::ratio<1>,
            typename std::enable_if<Rr::num == 1 || Rr::den == 1, Rr>::type * =
                nullptr>
  constexpr auto ratio_to(const value_holder_t<Rr> &rhs) const
  {
    typedef std::ratio_divide<Rr, ratio> resulting_ratio;
    return resulting_ratio{};
  }

  internal_type value_;
};
