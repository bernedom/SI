// Components for compile-time parsing of numbers -*- C++ -*-

// Copyright (C) 2013-2017 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/parse_numbers.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{chrono}
 */

#pragma once

// From n3642.pdf except I added binary literals and digit separator '\''.

#include <limits>
#include <type_traits>

namespace SI::detail::int_parse {
template <unsigned _Base, char _Dig> struct _Digit;

template <unsigned _Base>
struct _Digit<_Base, '0'> : std::integral_constant<unsigned, 0> {
  using _is_valid = std::true_type;
};

template <unsigned _Base>
struct _Digit<_Base, '1'> : std::integral_constant<unsigned, 1> {
  using _is_valid = std::true_type;
};

template <unsigned _Base, unsigned _Val>
struct _Digit_impl : std::integral_constant<unsigned, _Val> {
  static_assert(_Base > _Val, "invalid digit");
  using _is_valid = std::true_type;
};

template <unsigned _Base> struct _Digit<_Base, '2'> : _Digit_impl<_Base, 2> {};

template <unsigned _Base> struct _Digit<_Base, '3'> : _Digit_impl<_Base, 3> {};

template <unsigned _Base> struct _Digit<_Base, '4'> : _Digit_impl<_Base, 4> {};

template <unsigned _Base> struct _Digit<_Base, '5'> : _Digit_impl<_Base, 5> {};

template <unsigned _Base> struct _Digit<_Base, '6'> : _Digit_impl<_Base, 6> {};

template <unsigned _Base> struct _Digit<_Base, '7'> : _Digit_impl<_Base, 7> {};

template <unsigned _Base> struct _Digit<_Base, '8'> : _Digit_impl<_Base, 8> {};

template <unsigned _Base> struct _Digit<_Base, '9'> : _Digit_impl<_Base, 9> {};

template <unsigned _Base>
struct _Digit<_Base, 'a'> : _Digit_impl<_Base, 0xa> {};

template <unsigned _Base>
struct _Digit<_Base, 'A'> : _Digit_impl<_Base, 0xa> {};

template <unsigned _Base>
struct _Digit<_Base, 'b'> : _Digit_impl<_Base, 0xb> {};

template <unsigned _Base>
struct _Digit<_Base, 'B'> : _Digit_impl<_Base, 0xb> {};

template <unsigned _Base>
struct _Digit<_Base, 'c'> : _Digit_impl<_Base, 0xc> {};

template <unsigned _Base>
struct _Digit<_Base, 'C'> : _Digit_impl<_Base, 0xc> {};

template <unsigned _Base>
struct _Digit<_Base, 'd'> : _Digit_impl<_Base, 0xd> {};

template <unsigned _Base>
struct _Digit<_Base, 'D'> : _Digit_impl<_Base, 0xd> {};

template <unsigned _Base>
struct _Digit<_Base, 'e'> : _Digit_impl<_Base, 0xe> {};

template <unsigned _Base>
struct _Digit<_Base, 'E'> : _Digit_impl<_Base, 0xe> {};

template <unsigned _Base>
struct _Digit<_Base, 'f'> : _Digit_impl<_Base, 0xf> {};

template <unsigned _Base>
struct _Digit<_Base, 'F'> : _Digit_impl<_Base, 0xf> {};

//  Digit separator
template <unsigned _Base>
struct _Digit<_Base, '\''> : std::integral_constant<unsigned, 0> {
  using _is_valid = std::false_type;
};

//------------------------------------------------------------------------------

template <unsigned long long _Val>
using __ull_constant = std::integral_constant<unsigned long long, _Val>;

template <unsigned _Base, char _Dig, char... _Digs> struct _Power_help {
  using __next = typename _Power_help<_Base, _Digs...>::type;
  using _is_valid_digit = typename _Digit<_Base, _Dig>::_is_valid;
  using type =
      __ull_constant<__next::value *(_is_valid_digit{} ? _Base : 1ULL)>;
};

template <unsigned _Base, char _Dig> struct _Power_help<_Base, _Dig> {
  using _is_valid_digit = typename _Digit<_Base, _Dig>::_is_valid;
  using type = __ull_constant<_is_valid_digit::value>;
};

template <unsigned _Base, char... _Digs>
struct _Power : _Power_help<_Base, _Digs...>::type {};

template <unsigned _Base> struct _Power<_Base> : __ull_constant<0> {};

//------------------------------------------------------------------------------

template <unsigned _Base, unsigned long long _Pow, char _Dig, char... _Digs>
struct _Number_help {
  using __digit = _Digit<_Base, _Dig>;
  using _is_valid_digit = typename __digit::_is_valid;
  using __next =
      _Number_help<_Base, _is_valid_digit::value ? _Pow / _Base : _Pow,
                   _Digs...>;
  using type = __ull_constant<_Pow * __digit::value + __next::type::value>;
  static_assert((type::value / _Pow) == __digit::value,
                "integer literal does not fit in unsigned long long");
};

// Skip past digit separators:
template <unsigned _Base, unsigned long long _Pow, char _Dig, char... _Digs>
struct _Number_help<_Base, _Pow, '\'', _Dig, _Digs...>
    : _Number_help<_Base, _Pow, _Dig, _Digs...> {};

// Terminating case for recursion:
template <unsigned _Base, unsigned long long _Pow, char _Dig>
struct _Number_help<_Base, _Pow, _Dig> {
  // static_assert(_Pow == 1U, "power should be one");
  using type = __ull_constant<_Digit<_Base, _Dig>::value>;
};

template <unsigned _Base, char... _Digs>
struct _Number
    : _Number_help<_Base, _Power<_Base, _Digs...>::value, _Digs...>::type {};

template <unsigned _Base> struct _Number<_Base> : __ull_constant<0> {};

//------------------------------------------------------------------------------

template <char... _Digs> struct _Parse_int;

template <char... _Digs>
struct _Parse_int<'0', 'b', _Digs...> : _Number<2U, _Digs...>::type {};

template <char... _Digs>
struct _Parse_int<'0', 'B', _Digs...> : _Number<2U, _Digs...>::type {};

template <char... _Digs>
struct _Parse_int<'0', 'x', _Digs...> : _Number<16U, _Digs...>::type {};

template <char... _Digs>
struct _Parse_int<'0', 'X', _Digs...> : _Number<16U, _Digs...>::type {};

template <char... _Digs>
struct _Parse_int<'0', _Digs...> : _Number<8U, _Digs...>::type {};

template <char... _Digs> struct _Parse_int : _Number<10U, _Digs...>::type {};

} // namespace SI::detail::int_parse
