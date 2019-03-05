

#include <catch.hpp>

#include <SI/detail/detail.h>
#include <SI/electric_charge.h>

namespace {
/// helper template to compare variable-types ignoring const
template <typename _lhs_T, typename _rhs_T>
struct is_same_ignore_const
    : std::is_same<typename std::remove_const<_lhs_T>::type,
                   typename std::remove_const<_rhs_T>::type> {};

} // namespace

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _C THEN result is an "
          "electric charge AND ratio is 1") {
  constexpr auto one = 1_C;

  static_assert(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_C;
  static_assert(
      std::is_same<decltype(one_f), const SI::electric_charge_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mC THEN result is an "
          "electric charge AND ratio is 1/1000") {
  constexpr auto one = 1_mC;

  static_assert(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mC;

  static_assert(std::is_same<
                decltype(one_f),
                const SI::electric_charge_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kC THEN result is an "
          "electric charge AND ratio is 1000/1") {
  constexpr auto one = 1_kC;
  static_assert(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kC;
  static_assert(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN values electric current (I) and a time (T) WHEN multiplied "
          "THEN result is electric charge (Q)") {
  constexpr auto current = 1_A;
  constexpr auto time = 1_s;
  constexpr auto result = current * time;
  constexpr auto result_commutative = time * current;

  static_assert(is_same_ignore_const<decltype(result), decltype(1_C)>::value,
                "Result is electric charge");
  static_assert(
      is_same_ignore_const<decltype(result_commutative), decltype(1_C)>::value,
      "Result is electric charge");
  static_assert(result == result_commutative,
                "Commutative operations are equal");
}

TEST_CASE("GIVEN value for electric charge WHEN divided by electric current "
          "THEN result is a time value") {
  constexpr auto charge = 1_C;
  constexpr auto current = 1_A;

  constexpr auto result = charge / current;

  static_assert(is_same_ignore_const<decltype(result), decltype(1_s)>::value);
}

TEST_CASE("GIVEN value for electric charge WHEN divided by time THEN result is "
          "electric current") {
  constexpr auto charge = 1_C;
  constexpr auto time = 1_s;
  constexpr auto result = charge / time;

  static_assert(is_same_ignore_const<decltype(result), decltype(1_A)>::value);
}

TEST_CASE("GIVEN values for I and T AND ratio is the same WHEN multiplied THEN "
          "resulting value is I.raw_value() * T.raw_value()") {
  constexpr auto current = 1_A;
  constexpr auto time = 2_s;
  constexpr auto result = current * time;
  constexpr auto result_commutative = time * current;

  static_assert(result.raw_value() == 2, "result is calculated correctly");
  static_assert(result_commutative.raw_value() == 2,
                "result is calculated correctly");
}

TEST_CASE("GIVEN values for I and T AND ratio is not the same WHEN multiplied "
          "THEN resulting ratio is multiplied") {
  constexpr auto current = 1000_mA;
  constexpr auto t = 2_s;
  constexpr auto result = current * t;
  constexpr auto result_commutative = t * current;

  static_assert(std::ratio_equal<decltype(result)::ratio, std::milli>::value,
                "resulting ratio is mutliplied");

  static_assert(result.raw_value() == 2000, "value is calculated in "
                                            "millis");

  static_assert(std::ratio_equal<decltype(result_commutative)::ratio,
                                 decltype(result)::ratio>::value,
                "Ratio is the same for commutative operations");

  static_assert(result_commutative.raw_value() == 2000,
                "value is calculated in ratio 1");

  static_assert(result_commutative == result,
                "Commutative operations are equal");
}

TEST_CASE("GIVEN electric charge Q with ratio<1> WHEN divided by electric "
          "current I with ratio<1> THEN "
          "result is time t with ratio <1>") {
  constexpr auto charge = 8_C;
  constexpr auto current = 4_A;
  constexpr auto result = charge / current;

  static_assert(is_same_ignore_const<decltype(result), decltype(1_s)>::value,
                "Result is of type T (s)");

  static_assert(result.raw_value() == 2, "Is 2");
}

TEST_CASE(
    "GIVEN electric charge Q with ratio<1000000,1> WHEN divided by electric "
    "current I with ratio<1> THEN "
    "result is time t with ratio <1,1> (s)") {
  constexpr auto charge = 8_MC;
  constexpr auto current = 4000_A;
  constexpr auto result = charge / current;

  static_assert(std::ratio_equal<decltype(result)::ratio, std::mega>::value,
                "Ratio is 1 / mega");
  static_assert(result.raw_value() == 0,
                "Is 0"); // result would be 2000 s which is 0.002 Mega-Seconds
}

TEST_CASE("GIVEN electric charge Q with ratio<1000000,1>  AND type is floating "
          "point WHEN divided by electric "
          "current I with ratio<1> THEN "
          "result is time t with ratio <1,1> (s)") {
  constexpr auto charge = 8.0_MC;
  constexpr auto current = 4000.0_A;
  constexpr auto result = charge / current;

  static_assert(std::ratio_equal<decltype(result)::ratio, std::mega>::value,
                "Ratio is 1 / mega");
  static_assert(SI::detail::epsEqual(result.raw_value(), 0.002L), "Is 0");
}

TEST_CASE("GIVEN electric charge Q with ratio<1> WHEN divided by time T in "
          "seconds THEN result is electric current I with ratio<1>") {
  constexpr auto charge = 4_C;
  constexpr auto time = 2_s;
  constexpr auto result = charge / time;

  static_assert(is_same_ignore_const<decltype(result), decltype(1_A)>::value,
                "Result is electric current");
  static_assert(result == 2_A, "result is 2A");
}

TEST_CASE("GIVEN electric charge Q with ratio<1000,1> WHEN divided by time T "
          "with ratio <60,1> (min) THEN result is 33A") {
  constexpr auto charge = 4_kC;
  constexpr auto time = 2_min;
  constexpr auto result = charge / time;

  static_assert(
      std::ratio_equal<decltype(result)::ratio, std::ratio<50, 3>>::value,
      "Result is of type T");

  static_assert(result.raw_value() == 2, "Is 200/3A");
}
