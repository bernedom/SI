/**
 * This file is part of "SI" version 2.1.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#ifdef SI_DISABLE_IMPLICIT_RATIO_CONVERSION
#define SI_ENABLE_IMPLICIT_RATIO_CONVERSION false
#else
#define SI_ENABLE_IMPLICIT_RATIO_CONVERSION true
#endif

#include "detail.h"
#include "eps_equal.h"
#include "unit_cast.h"

#include <ratio>
#include <type_traits>

/// Namespace containing all SI units
namespace SI::detail {

template <typename _unit_lhs, typename _unit_rhs> struct unit_with_common_ratio;

/// @todo add in-place unit_cast for move operators
/// @todo add logarithmic units (decibel)
/// @todo add constants for speed of light, planck constant, elementary charge,
/// boltzmann constant, avorgadro constant and  luminous efficacy of
/// monochromatic radiation of frequency

/**
 * @brief base template class for holding values of type _type to be multiplied
 *with a ratio _ratio
 *
 * @tparam _symbol dimension symbol of the unit (see
 * https://en.wikipedia.org/wiki/SI_base_unit)
 * @tparam _ratio Ratio in relation to the base unit of a SI unit
 * @tparam _type internal representation of the value
 * @tparam _exponent the exponent to the unit (i.e. length ==  m^1, area == m^2,
 *volume = m^3)
 **/
template <char _symbol, typename _exponent, typename _type,
          typename _ratio = std::ratio<1>>
struct unit_t {
  static_assert(std::is_arithmetic_v<_type>, "Type is an arithmetic value");
  static_assert(detail::is_ratio_v<_exponent>, "_exponent is a ratio type");
  static_assert(detail::is_ratio_v<_ratio>, "_ratio is a std::ratio");
  using ratio = _ratio;
  using internal_type = _type;
  using exponent = _exponent;
  using symbol = std::integral_constant<char, _symbol>;

  /// Construct with value v
  constexpr unit_t(_type v) : value_{v} {}
  constexpr unit_t() = default;
  constexpr unit_t(const unit_t &) = default;
  constexpr unit_t(unit_t &&) = default;

  /// construct from other unit with implicitely convertible type
  template <typename _type_rhs>
  constexpr unit_t(const unit_t<_symbol, _exponent, _type_rhs, _ratio> &rhs)
      : value_(rhs.value()) {
    static_assert(std::is_convertible<_type_rhs, _type>::value,
                  "Internal representation is convertible");
  }

  ~unit_t() = default;

  template <typename _rhs_type, typename _rhs_ratio>
  constexpr unit_t(const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs)
      : value_{
            unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs).value()} {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before assigning");
  }

  template <typename _rhs_ratio>
  constexpr unit_t(unit_t<_symbol, _exponent, _type, _rhs_ratio> &&rhs)
      : value_{
            std::move(unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs)
                          .value())} {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before assigning");
  }

  /// returns the stored value as raw type
  constexpr _type value() const { return value_; }

  ///@todo set as friend to the stream-function
  void setValue(_type v) { value_ = v; }

  /// Assignment for same ratio
  constexpr unit_t &operator=(const unit_t &rhs) = default;

  /// Move assigmnment for same ratio
  constexpr unit_t &operator=(unit_t &&rhs) = default;

  /// Assignment of same unit but different ratio
  template <
      typename _rhs_ratio,
      std::enable_if_t<!std::ratio_equal_v<_rhs_ratio, _ratio>> * = nullptr>
  constexpr unit_t &
  operator=(const unit_t<_symbol, _exponent, _type, _rhs_ratio> &rhs) {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before assigning");

    *this = unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs);
    return *this;
  }

  /// Move assignment of same unit but different ratio
  template <
      typename _rhs_ratio,
      std::enable_if_t<!std::ratio_equal_v<_rhs_ratio, _ratio>> * = nullptr>
  constexpr unit_t &
  operator=(unit_t<_symbol, _exponent, _type, _rhs_ratio> &&rhs) {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before assigning");

    *this =
        std::move(unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs));
    return *this;
  }

  /// Comparison operator takes considers different ratios, i.e. 1000
  /// micro == 1 milli
  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator==(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {

    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before comparing");

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(std::is_integral_v<_type> || std::is_floating_point_v<_type>,
                  "Is integral or floating point");
    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;

    if constexpr (std::is_integral_v<_type>) {

      return unit_cast<gcd_unit>(rhs).value() ==
             unit_cast<gcd_unit>(*this).value();
    } else {
      return detail::eps_equals(unit_cast<gcd_unit>(rhs).value(),
                                unit_cast<gcd_unit>(*this).value());
    }
  }

  /// compares two values, considers different ratios.
  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator!=(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    return !(*this == rhs);
  }

  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator<(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before comparing");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;
    return unit_cast<gcd_unit>(*this).value() <
           unit_cast<gcd_unit>(rhs).value();
  }

  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator<=(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {
    return !(*this > rhs);
  }

  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator>(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before comparing");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;

    return unit_cast<gcd_unit>(*this).value() >
           unit_cast<gcd_unit>(rhs).value();
  }

  template <typename _rhs_type, typename _rhs_ratio>
  constexpr bool operator>=(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {
    return !(*this < rhs);
  }

  /// multiply with a non-unit scalar
  constexpr unit_t operator*(const _type f) const { return {value_ * f}; }

  /// multiply with an unit of the same ratio
  template <typename _rhs_exponent, typename _rhs_type>
  constexpr auto operator*(
      const unit_t<_symbol, _rhs_exponent, _rhs_type, _ratio> &rhs) const {

    static_assert(detail::is_ratio_v<_rhs_exponent>,
                  "rhs exponent is a ratio type");
    return unit_t<_symbol, std::ratio_add<_rhs_exponent, _exponent>, _type,
                  std::ratio_multiply<ratio, _ratio>>{value() * rhs.value()};
  }

  /// multiplication multiply with a same unit, with different exponent
  /// and different ratio
  /// the exponents this and rhs are added, the resulting ratio the ratio
  /// multiplied.
  template <typename _rhs_exponent, typename _rhs_ratio, typename _rhs_type>
  constexpr auto operator*(
      const unit_t<_symbol, _rhs_exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_exponent>,
                  "rhs exponent is a ratio type");
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");

    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before comparing");

    return unit_t<_symbol, std::ratio_add<_exponent, _rhs_exponent>, _type,
                  std::ratio_multiply<ratio, _rhs_ratio>>{value_ * rhs.value()};
  }

  /// multiply with a non-unit scalar
  constexpr unit_t &operator*=(const _type scalar) {
    value_ *= scalar;
    return *this;
  }

  /// divide by a non-unit scalar
  constexpr unit_t operator/(const _type f) const { return {value_ / f}; }

  /// divide with same unit with same ratio but not the same exponent
  /// @returns unit with exponents subtracted from each others
  template <typename _rhs_exponent, typename _rhs_type,
            std::enable_if_t<std::ratio_not_equal_v<_rhs_exponent, _exponent>>
                * = nullptr>
  constexpr auto operator/(
      const unit_t<_symbol, _rhs_exponent, _rhs_type, _ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_exponent>,
                  "rhs exponent is a ratio type");
    using rhs_t = typename std::remove_reference<decltype(rhs)>::type;

    return unit_t<_symbol,
                  std::ratio_subtract<_exponent, typename rhs_t::exponent>,
                  _type, std::ratio_divide<ratio, _ratio>>{value_ /
                                                           rhs.value()};
  }

  /// divide with a same unit but different ratios
  /// the ratio of the result is the gcd of the two ratios and the exponents are
  /// subtracted
  template <typename _rhs_exponent, typename _rhs_type, typename _rhs_ratio,
            std::enable_if_t<std::ratio_not_equal_v<_rhs_exponent, _exponent>>
                * = nullptr>
  constexpr auto operator/(
      const unit_t<_symbol, _rhs_exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(detail::is_ratio_v<_rhs_exponent>,
                  "rhs exponent is a ratio type");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before dividing");

    return unit_t<_symbol, std::ratio_subtract<exponent, _rhs_exponent>, _type,
                  std::ratio_divide<ratio, _rhs_ratio>>{value_ / rhs.value()};
  }

  /// divide whit same unit result is a scalar
  template <typename _rhs_type>
  constexpr _type
  operator/(const unit_t<_symbol, _exponent, _rhs_type, _ratio> &rhs) {
    return value() / rhs.value();
  }

  /// if the same units of the same exponent but different ratio are divided
  /// then the result is a scalar
  template <
      typename _rhs_exponent, typename _rhs_type, typename _rhs_ratio,
      std::enable_if_t<std::ratio_equal_v<_rhs_exponent, exponent>> * = nullptr>
  constexpr _type operator/(
      const unit_t<_symbol, _rhs_exponent, _rhs_type, _rhs_ratio> &rhs) const {
    static_assert(SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
                      std::ratio_equal_v<_rhs_ratio, _ratio>,
                  "Implicit ratio conversion disabled, convert to same ratio "
                  "before dividing");

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");

    static_assert(detail::is_ratio_v<_rhs_exponent>,
                  "rhs exponent is a ratio type");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(*this)>::type,
        typename std::remove_reference<decltype(rhs)>::type>::type;

    return unit_cast<gcd_unit>(*this) / unit_cast<gcd_unit>(rhs);
  }

  /// divide with a non-unit scalar
  constexpr unit_t &operator/=(const _type scalar) {
    value_ /= scalar;
    return *this;
  }

  /// adds two values, returning type is type of lhs
  template <typename _rhs_type, typename _rhs_ratio>
  constexpr unit_t operator+(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before adding values");

    return unit_t{
        value() +
        unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs).value()};
  }

  /// add-assign value of the same unit
  constexpr unit_t &operator+=(const unit_t &rhs) {
    value_ += rhs.value();
    return *this;
  }

  /// add value of the same type but possibly different ratio
  template <
      typename _rhs_type, typename _rhs_ratio,
      std::enable_if_t<!std::ratio_equal_v<_rhs_ratio, _ratio>> * = nullptr>
  constexpr unit_t &
  operator+=(const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before adding values");

    value_ += unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs).value();

    return *this;
  }

  /// subtracts two values, returning type is type of lhs
  template <typename _rhs_type, typename _rhs_ratio>
  constexpr unit_t operator-(
      const unit_t<_symbol, _exponent, _rhs_type, _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before subtracting");

    return unit_t{
        value() +
        -unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs).value()};
  }

  /// Subtract-assign value of the same unit
  constexpr unit_t &operator-=(const unit_t &rhs) {
    value_ -= rhs.value();
    return *this;
  }

  /// subtract value of the same type but possibly different ratio
  template <typename _rhs_type, typename _rhs_ratio,
            std::enable_if<!std::ratio_equal_v<_rhs_ratio, _ratio>> * = nullptr>
  constexpr unit_t &
  operator-=(const unit_t<_symbol, _exponent, _type, _rhs_ratio> &rhs) {

    static_assert(detail::is_ratio_v<_rhs_ratio>, "_rhs_ratio is a std::ratio");
    static_assert(
        SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
            std::ratio_equal_v<ratio, _rhs_ratio>,
        "Implicit ratio conversion disabled, convert before adding values");

    value_ -= unit_cast<unit_t<_symbol, _exponent, _type, _ratio>>(rhs).value();

    return *this;
  }

  /// negate operation
  constexpr unit_t operator-() const { return {-value_}; }

  /// increment by prefix ++
  unit_t &operator++() {
    ++value_;
    return *this;
  }
  /// incrment by postfix ++
  unit_t operator++(int) {
    auto ret_val(*this);
    ++(*this);

    return ret_val;
  }

  /// decrement by prefix --
  unit_t &operator--() {
    --value_;
    return *this;
  }

  /// decrement by postfix --
  unit_t operator--(int) {
    auto ret_val(*this);
    --(*this);

    return ret_val;
  }

private:
  _type value_;
};

/// operator to divide primitive type by unit encapsulating the same type
/// template specialisation handling integer types
/// @results unit with negative exponent
template <typename _type, char _symbol, typename _exponent, typename _rhs_type,
          typename _ratio,
          std::enable_if_t<std::is_integral_v<_type>> * = nullptr>
constexpr auto
operator/(const _type &lhs,
          const unit_t<_symbol, _exponent, _rhs_type, _ratio> &rhs) {
  static_assert(SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
                    std::ratio_equal<std::ratio<1>, _ratio>::value,
                "Implicit ratio conversion disabled, convert to ratio<1> "
                "before dividing");
  static_assert(detail::is_ratio_v<_exponent>, "Exponent is a ratio type");
  return unit_cast<unit_t<
      _symbol, std::ratio_multiply<std::ratio<-1>, _exponent>, _type, _ratio>>(
      unit_t<_symbol, std::ratio_multiply<std::ratio<-1>, _exponent>, _type,
             std::ratio<1>>{lhs / (rhs.value() * (_ratio::num / _ratio::den))});
}

/// operator to divide primitive type by unit encapsulating the same type
/// template specialisation for floating point types, to avoid possible loss
/// of precision when adjusting for ratio
/// @results unit with negative exponent
template <typename _type, char _symbol, typename _exponent, typename _rhs_type,
          typename _ratio,
          std::enable_if_t<std::is_floating_point_v<_type>> * = nullptr>
constexpr auto
operator/(const _type &lhs,
          const unit_t<_symbol, _exponent, _rhs_type, _ratio> &rhs) {
  static_assert(SI_ENABLE_IMPLICIT_RATIO_CONVERSION ||
                    std::ratio_equal_v<_ratio, std::ratio<1>>,
                "Implicit ratio conversion disabled, convert to ratio<1> "
                "before dividing");
  static_assert(detail::is_ratio_v<_exponent>, "Exponent is a ratio type");
  return unit_cast<unit_t<
      _symbol, std::ratio_multiply<std::ratio<-1>, _exponent>, _type, _ratio>>(
      unit_t<_symbol, std::ratio_multiply<std::ratio<-1>, _exponent>, _type,
             std::ratio<1>>{lhs /
                            (rhs.value() * (static_cast<_type>(_ratio::num) /
                                            static_cast<_type>(_ratio::den)))});
}

} // namespace SI::detail
