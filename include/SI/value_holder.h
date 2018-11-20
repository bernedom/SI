#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>
#include <type_traits>
/**
 * @brief base template class for holding values of type T to be multiplied with
 * a ratio R
 *
 * @tparam R Ratio in relation to the base unit of a SI unit
 * @tparam T internal representation of the value
 **/
namespace SI {
template <class R = std::ratio<1>, typename T = long long int,
          typename std::enable_if<std::is_arithmetic<T>::value>::type * =
              nullptr,
          typename std::enable_if<R::num == 1 || R::den == 1>::type * = nullptr>

struct value_holder_t {
  typedef R ratio;
  typedef T internal_type;
  constexpr value_holder_t(T v) : value_{v} {}

  constexpr internal_type raw_value() const { return value_; }

  template <class Rr = std::ratio<1>>
  constexpr bool operator==(const value_holder_t<Rr> &rhs) const {
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
  constexpr auto ratio_to(const value_holder_t<Rr> &rhs) const {
    typedef std::ratio_divide<Rr, ratio> resulting_ratio;
    return resulting_ratio{};
  }

  internal_type value_;
};

namespace detail {
template <template <class, typename> class U, typename R>
constexpr auto
generate_unit_type_overflow_check(const unsigned long long int magnitude) {
  if (magnitude >
      std::numeric_limits<typename U<R, long long int>::internal_type>::max()) {
    throw std::overflow_error("supplied value too large");
  }
  return U<R, long long int>(magnitude);
}
} // namespace detail

} // namespace SI