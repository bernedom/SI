#pragma once

#include <ratio>

namespace SI::detail {

// forward declaration
template <char _symbol, typename _exponent, typename _type, typename _ratio>
struct unit_t;

/// helper template to check if a type is a unit_t (false for all other
/// types)
template <typename _unit> struct is_unit_t : std::false_type {};

/// template specialisation to check if a type is a unit_t (true if unit_t)
template <char _symbol, typename _exponent, typename _ratio, typename _type>
struct is_unit_t<const unit_t<_symbol, _exponent, _type, _ratio>>
    : std::true_type {};

/// non-const specialisation of check above
template <char _symbol, typename _exponent, typename _ratio, typename _type>
struct is_unit_t<unit_t<_symbol, _exponent, _type, _ratio>> : std::true_type {};

template <typename _type>
inline constexpr bool is_unit_t_v = is_unit_t<_type>::value;

/// function to cast between two units of the same type
template <typename _target_type, typename _rhs_T>
constexpr auto unit_cast(const _rhs_T &rhs) {
  // using static assert instead of std::enable if in order to be able to
  // forward declare this function easier
  static_assert(
      is_unit_t_v<_rhs_T> ||
          std::is_base_of<
              unit_t<_rhs_T::symbol::value, typename _rhs_T::exponent,
                     typename _rhs_T::internal_type, typename _rhs_T::ratio>,
              _rhs_T>::value,
      "is of type unit_t or a derived class");
  using conversion_ratio =
      std::ratio_divide<typename _rhs_T::ratio, typename _target_type::ratio>;

  return _target_type(
      ((rhs.value() * conversion_ratio::num) / conversion_ratio::den));
}
} // namespace SI::detail