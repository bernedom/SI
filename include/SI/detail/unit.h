/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "detail.h"

#include <ratio>
#include <type_traits>

/// Namespace containing all SI units
namespace SI::detail {

// forward declarations
template <typename _T, typename _rhs_T>
constexpr auto unit_cast(const _rhs_T &rhs);

template <typename _unit_lhs, typename _unit_rhs> struct unit_with_common_ratio;

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
template <char _Symbol, char _Exponent, typename _Type,
          typename _Ratio = std::ratio<1>>
struct unit_t {
  static_assert(std::is_arithmetic<_Type>::value,
                "Type is an arithmetic value");
  static_assert(_Exponent != 0, "Exponent is non-zero");
  static_assert(detail::is_ratio<_Ratio>::value, "_Ratio is a std::ratio");
  using ratio = _Ratio;
  using internal_type = _Type;
  using exponent = std::integral_constant<char, _Exponent>;
  using symbol = std::integral_constant<char, _Symbol>;

  /// Construct with value v
  constexpr unit_t(_Type v) : value_{v} {}

  /// returns the stored value as raw type
  constexpr internal_type raw_value() const { return value_; }

  /// Comparison operator takes considers different ratios, i.e. 1000
  /// micros === 1 milli
  template <typename _rhs_ratio = std::ratio<1>>
  constexpr bool
  operator==(const unit_t<symbol::value, exponent::value, internal_type,
                          _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");
    static_assert(std::is_integral<internal_type>::value ||
                      std::is_floating_point<internal_type>::value,
                  "Is integral or floating point");
    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;

    if constexpr (std::is_integral<internal_type>::value) {

      return unit_cast<gcd_unit>(rhs).raw_value() ==
             unit_cast<gcd_unit>(*this).raw_value();
    } else {
      return detail::epsEqual(unit_cast<gcd_unit>(rhs).raw_value(),
                              unit_cast<gcd_unit>(*this).raw_value());
    }
  }

  /// compares two values, considers different ratios.
  template <typename _rhs_ratio = std::ratio<1>>
  constexpr bool
  operator!=(const unit_t<symbol::value, exponent::value, internal_type,
                          _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");
    return !(*this == rhs);
  }

  template <typename _rhs_ratio>
  constexpr bool operator<(const unit_t<symbol::value, exponent::value,
                                        internal_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;
    return unit_cast<gcd_unit>(rhs).raw_value() <
           unit_cast<gcd_unit>(*this).raw_value();
  }

  template <typename _rhs_ratio>
  constexpr bool operator>(const unit_t<symbol::value, exponent::value,
                                        internal_type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;

    return unit_cast<gcd_unit>(rhs).raw_value() >
           unit_cast<gcd_unit>(*this).raw_value();
  }

  /// multiply with a non-unit scalar
  constexpr unit_t operator*(const _Type f) const { return {value_ * f}; }

  /// multiply with an unit of the same ratio
  template <char _rhs_Exponent>
  constexpr auto operator*(const unit_t<symbol::value, _rhs_Exponent,
                                        internal_type, _Ratio> &rhs) const {

    return unit_t<symbol::value, _rhs_Exponent + exponent::value, internal_type,
                  std::ratio_multiply<ratio, ratio>>{raw_value() *
                                                     rhs.raw_value()};
  }

  /// multiplication multiply with a same unit, with possibly different exponent
  /// and different ratio
  /// the exponents this and rhs are added, the resulting ratio is the gcd
  /// between both ratios squared. The reason for this is to avoid truncating
  /// values if multiplying units with different ratios
  template <char _rhs_Exponent, typename _rhs_ratio>
  constexpr auto operator*(const unit_t<symbol::value, _rhs_Exponent,
                                        internal_type, _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");
    static_assert(_rhs_Exponent > 0, "_rhs_Exponent is positive");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;
    return unit_cast<gcd_unit>(*this) *
           unit_cast<
               unit_t<_Symbol, _rhs_Exponent, _Type, typename gcd_unit::ratio>>(
               rhs);
  }

  /// divide with same unit with same ratio but not the same exponent
  /// @returns unit with exponents subtracted from each others
  template <char _rhs_exponent,
            typename std::enable_if<_rhs_exponent != exponent::value>::type * =
                nullptr>
  constexpr auto
  operator/(const unit_t<_Symbol, _rhs_exponent, _Type, _Ratio> &rhs) const {
    static_assert(_rhs_exponent > 0, "_rhs_Exponent is positive");
    using rhs_t = typename std::remove_reference<decltype(rhs)>::type;

    return unit_t<symbol::value, exponent::value - rhs_t::exponent::value,
                  internal_type, ratio>{value_ / rhs.raw_value()};
  }

  /// divide with a same unit but different ratios
  /// the ratio of the result is the gcd of the two ratios and the exponents are
  /// subtracted
  template <char _rhs_exponent, typename _rhs_ratio,
            typename std::enable_if<_rhs_exponent != exponent::value>::type * =
                nullptr>
  constexpr auto operator/(
      const unit_t<_Symbol, _rhs_exponent, _Type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");
    static_assert(_rhs_exponent > 0, "_rhs_Exponent is positive");

    using gcd_unit = typename unit_with_common_ratio<
        typename std::remove_reference<decltype(rhs)>::type,
        typename std::remove_reference<decltype(*this)>::type>::type;

    return unit_cast<gcd_unit>(*this) /
           unit_cast<
               unit_t<_Symbol, _rhs_exponent, typename gcd_unit::ratio, _Type>>(
               rhs);
  }

  /// if the same units of the same exponent are divided then the result is a
  /// scalar
  template <char _rhs_exponent, typename _rhs_ratio,
            typename std::enable_if<_rhs_exponent == exponent::value>::type * =
                nullptr>
  constexpr _Type operator/(
      const unit_t<_Symbol, _rhs_exponent, _Type, _rhs_ratio> &rhs) const {
    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");
    static_assert(_rhs_exponent > 0, "_rhs_Exponent is positive");

    return raw_value() / rhs.raw_value();
  }

  /// adds two values, returning type is type of lhs
  template <typename _rhs_ratio>
  constexpr unit_t
  operator+(const unit_t<symbol::value, exponent::value, internal_type,
                         _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");

    return unit_t{
        raw_value() +
        unit_cast<unit_t<_Symbol, _Exponent, _Type, _Ratio>>(rhs).raw_value()};
  }
  /// subtracts two values, returning type is type of lhs
  template <typename _rhs_ratio>
  constexpr unit_t
  operator-(const unit_t<symbol::value, exponent::value, internal_type,
                         _rhs_ratio> &rhs) const {

    static_assert(detail::is_ratio<_rhs_ratio>::value,
                  "_rhs_ratio is a std::ratio");

    return unit_t{
        raw_value() +
        -unit_cast<unit_t<_Symbol, _Exponent, _Type, _Ratio>>(rhs).raw_value()};
  }

  /// negate operation
  constexpr unit_t operator-() { return {-value_}; }

private:
  internal_type value_;
}; // namespace SI

/// operator to divide primitive type by unit encapsulating the same type
/// template specialisation handling integer types
/// @results unit with negative exponent
template <
    char _Symbol, char _Exponent, typename _Type, typename _Ratio,
    typename std::enable_if<std::is_integral<_Type>::value>::type * = nullptr>
constexpr auto operator/(const _Type &lhs,
                         const unit_t<_Symbol, _Exponent, _Type, _Ratio> &rhs) {
  return unit_cast<unit_t<_Symbol, -_Exponent, _Type, _Ratio>>(
      unit_t<_Symbol, -_Exponent, _Type, std::ratio<1>>{
          lhs / (rhs.raw_value() * (_Ratio::num / _Ratio::den))});
}

/// operator to divide primitive type by unit encapsulating the same type
/// template specialisation for floating point types, to avoid possible loss of
/// precision when adjusting for ratio
/// @results unit with negative exponent
template <char _Symbol, char _Exponent, typename _Type, typename _Ratio,
          typename std::enable_if<std::is_floating_point<_Type>::value>::type
              * = nullptr>
constexpr auto operator/(const _Type &lhs,
                         const unit_t<_Symbol, _Exponent, _Type, _Ratio> &rhs) {

  return unit_cast<unit_t<_Symbol, -_Exponent, _Type, _Ratio>>(
      unit_t<_Symbol, -_Exponent, _Type, std::ratio<1>>{
          lhs / (rhs.raw_value() * (static_cast<_Type>(_Ratio::num) /
                                    static_cast<_Type>(_Ratio::den)))});
}

/// helper template to check if a type is a unit_t (false for all other types)
template <typename _Tp> struct is_unit_t : std::false_type {};

/// template specialisation to check if a type is a unit_t (true if unit_t)
template <char _Symbol, char _Exponent, typename _Ratio, typename _Type>
struct is_unit_t<const unit_t<_Symbol, _Exponent, _Type, _Ratio>>
    : std::true_type {};

/// non-const specialisation of check above
template <char _Symbol, char _Exponent, typename _Ratio, typename _Type>
struct is_unit_t<unit_t<_Symbol, _Exponent, _Type, _Ratio>> : std::true_type {};

/// function to cast between two units of the same type
template <typename _T, typename _rhs_T>
constexpr auto unit_cast(const _rhs_T &rhs) {
  // using static assert instead of std::enable if in order to be able to
  // forward declare this function easier
  static_assert(
      is_unit_t<_rhs_T>::value ||
          std::is_base_of<
              unit_t<_rhs_T::symbol::value, _rhs_T::exponent::value,
                     typename _rhs_T::internal_type, typename _rhs_T::ratio>,
              _rhs_T>::value,
      "is of type unit_t or a derived class");
  using conversion_ratio =
      std::ratio_divide<typename _rhs_T::ratio, typename _T::ratio>;

  return _T{(rhs.raw_value() * conversion_ratio::num / conversion_ratio::den)};
}

template <typename _unit_lhs, typename _unit_rhs>
struct unit_with_common_ratio {
  static_assert(is_unit_t<_unit_lhs>::value, "only supported for SI::unit_t");
  static_assert(is_unit_t<_unit_rhs>::value, "only supported for SI::unit_t");
  static_assert(std::is_same<typename _unit_lhs::internal_type,
                             typename _unit_rhs::internal_type>::value);
  static_assert(_unit_lhs::symbol::value == _unit_rhs::symbol::value);
  using type =
      unit_t<_unit_lhs::symbol::value, _unit_lhs::exponent::value,
             typename _unit_lhs::internal_type,
             typename detail::ratio_gcd<typename _unit_lhs::ratio,
                                        typename _unit_rhs::ratio>::ratio>;
};

/// divide a value of a certain unit with another value of a possibly different
/// type resulting in a new type, the resulting exponent is specified by
/// resultingunit using a variadic template to simplify usage of implentation
/// the internal type of the result is the internal type of lhs
template <template <typename...> typename _resulting_unit, typename _unit_lhs,
          typename _unit_rhs>
constexpr auto cross_unit_divide(const _unit_lhs &lhs, const _unit_rhs &rhs) {
  // do not use for the same unit as this should result in decreasing the
  // exponent
  static_assert(!std::is_same<_unit_lhs, _unit_rhs>::value);
  static_assert(is_unit_t<_unit_lhs>::value, "lhs parameter is a unit_t");
  static_assert(is_unit_t<_unit_rhs>::value, "rhs parameter is a unit_t");

  using resulting_ratio = typename std::ratio_divide<typename _unit_lhs::ratio,
                                                     typename _unit_rhs::ratio>;
  return _resulting_unit<typename _unit_lhs::internal_type, resulting_ratio>{
      lhs.raw_value() / rhs.raw_value()};
}
/// multiply a value of a unit witn another value of a possibly different value
/// resulting in a value of a new type with exponent 1
/// the internal type of the result is the internal type of lhs
/// @todo add function that works with variable exponent units and remove
/// special typedefs for time

template <template <typename...> typename _resulting_unit, typename _unit_lhs,
          typename _unit_rhs>
constexpr auto cross_unit_multiply(const _unit_lhs &lhs, const _unit_rhs &rhs) {
  // do not use for the same unit as this should result in increasing the
  // exponent
  static_assert(!std::is_same<_unit_lhs, _unit_rhs>::value);
  static_assert(is_unit_t<_unit_lhs>::value, "lhs parameter is a unit_t");
  static_assert(is_unit_t<_unit_rhs>::value, "rhs parameter is a unit_t");
  using resulting_ratio =
      typename std::ratio_multiply<typename _unit_lhs::ratio,
                                   typename _unit_rhs::ratio>;
  return _resulting_unit<typename _unit_lhs::internal_type, resulting_ratio>{
      lhs.raw_value() * rhs.raw_value()};
}

} // namespace SI::detail
