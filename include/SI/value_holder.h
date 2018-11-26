#pragma once

#include "detail.h"
#include <ratio>
#include <type_traits>
/**
 * @brief base template class for holding values of type _Type to be multiplied
 *with a ratio _Ratio
 *
 * @tparam _Ratio Ratio in relation to the base unit of a SI unit
 * @tparam _Type internal representation of the value
 **/
namespace SI {

template <
    char _Symbol, class _Ratio = std::ratio<1>, typename _Type = long long int,
    char _Exponent = 1,
    typename std::enable_if<_Ratio::num == 1 || _Ratio::den == 1>::type * =
        nullptr,
    typename std::enable_if<std::is_arithmetic<_Type>::value>::type * = nullptr>

struct value_holder_t {

  static_assert(detail::is_ratio<_Ratio>::value, "_Ratio is a std::ratio");
  typedef _Ratio ratio;
  typedef _Type internal_type;
  typedef std::integral_constant<char, _Exponent> exponent;
  typedef std::integral_constant<char, _Symbol> symbol;
  constexpr value_holder_t(_Type v) : value_{v} {}

  constexpr internal_type raw_value() const { return value_; }

  template <class Rr = std::ratio<1>>
  constexpr bool
  operator==(const value_holder_t<symbol::value, Rr, internal_type,
                                  exponent::value> &rhs) const {

    return (rhs.value_ *
            std::remove_reference<decltype(rhs)>::type::ratio::num /
            std::remove_reference<decltype(rhs)>::type::ratio::den) ==
           (value_ * ratio::num / ratio::den);
  }
  /// multiply with a non-unit scalar
  constexpr value_holder_t operator*(const _Type f) const {
    return {value_ * f};
  }

  /// multiply with a same unit
  /// resulting unit is the same as 'this'/left hand side of operation
  template <typename Rr>
  constexpr auto
  operator*(const value_holder_t<symbol::value, Rr, internal_type> &rhs) const {
    constexpr auto conversion_ratio = detail::ratio_to<ratio, Rr>();
    return value_holder_t<symbol::value, ratio, internal_type,
                          exponent::value + std::remove_reference<decltype(
                                                rhs)>::type::exponent::value>{
        value_ * (rhs.raw_value() * decltype(conversion_ratio)::num /
                  decltype(conversion_ratio)::den)};
  }

  /// negate operation
  constexpr value_holder_t operator-() { return {-value_}; }

  internal_type value_;
};

} // namespace SI