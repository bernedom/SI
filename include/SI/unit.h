#pragma once

#include "detail.h"
#include <ratio>
#include <type_traits>

namespace SI {

/**
 * @brief base template class for holding values of type _Type to be multiplied
 *with a ratio _Ratio
 *
 * @tparam _Symbol dimension symbol of the unit (see
 *https://en.wikipedia.org/wiki/SI_base_unit)
 * @tparam _Ratio Ratio in relation to the base unit of a SI unit
 * @tparam _Type internal representation of the value
 * @tparam _Exponent the exponent to the unit (i.e. length ==  m^1, area == m^2,
 *volume = m^3)
 **/
template <
    char _Symbol, class _Ratio = std::ratio<1>, typename _Type = long long int,
    char _Exponent = 1,
    typename std::enable_if<_Ratio::num == 1 || _Ratio::den == 1>::type * =
        nullptr,
    typename std::enable_if<std::is_arithmetic<_Type>::value>::type * = nullptr>

struct unit_t {

  static_assert(detail::is_ratio<_Ratio>::value, "_Ratio is a std::ratio");
  typedef _Ratio ratio;
  typedef _Type internal_type;
  typedef std::integral_constant<char, _Exponent> exponent;
  typedef std::integral_constant<char, _Symbol> symbol;
  constexpr unit_t(_Type v) : value_{v} {}

  constexpr internal_type raw_value() const { return value_; }

  template <class _rhs_Ratio = std::ratio<1>>
  constexpr bool
  operator==(const unit_t<symbol::value, _rhs_Ratio, internal_type,
                          exponent::value> &rhs) const {
    typedef typename std::remove_reference<decltype(rhs)>::type rhs_t;
    return (rhs.value_ * rhs_t::ratio::num / rhs_t::ratio::den) ==
           (value_ * ratio::num / ratio::den);
  }
  /// multiply with a non-unit scalar
  constexpr unit_t operator*(const _Type f) const { return {value_ * f}; }

  /// multiply with a same unit
  /// resulting unit is the same as 'this'/left hand side of operation
  template <typename _rhs_Ratio>
  constexpr auto
  operator*(const unit_t<symbol::value, _rhs_Ratio, internal_type> &rhs) const {
    typedef typename std::remove_reference<decltype(rhs)>::type rhs_t;
    constexpr auto conversion_ratio = detail::ratio_to<ratio, _rhs_Ratio>();
    return unit_t<symbol::value, ratio, internal_type,
                  exponent::value + rhs_t::exponent::value>{
        value_ * (rhs.raw_value() * decltype(conversion_ratio)::num /
                  decltype(conversion_ratio)::den)};
  }

  /// multiply with a same unit
  /// resulting unit is the same as 'this'/left hand side of operation
  template <typename _rhs_Ratio, char _rhs_exponent>
  constexpr auto
  operator/(const unit_t<symbol::value, _rhs_Ratio, internal_type,
                         _rhs_exponent> &rhs) const {
    typedef typename std::remove_reference<decltype(rhs)>::type rhs_t;
    constexpr auto conversion_ratio = detail::ratio_to<ratio, _rhs_Ratio>();
    return unit_t<symbol::value, ratio, internal_type,
                  exponent::value - rhs_t::exponent::value>{
        value_ / (rhs.raw_value() * decltype(conversion_ratio)::num /
                  decltype(conversion_ratio)::den)};
  }

  /// negate operation
  constexpr unit_t operator-() { return {-value_}; }

  internal_type value_;
};

} // namespace SI