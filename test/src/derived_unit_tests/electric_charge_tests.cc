#include <catch.hpp>

#include <SI/electric_charge.h>

namespace {
/// helper template to compare variable-types ignoring const
template <typename _lhs_T, typename _rhs_T>
struct is_same_ignore_const
    : std::is_same<typename std::remove_const<_lhs_T>::type,
                   typename std::remove_const<_rhs_T>::type> {};

} // namespace

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _aC THEN result is a "
          "electric_charge type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fC THEN result is a "
          "electric_charge type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fC;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_charge_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pC THEN result is a "
          "electric_charge type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nC THEN result is a "
          "electric_charge type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uC THEN result is a "
          "electric_charge type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uC;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_charge_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mC THEN result is a "
          "electric_charge type AND ratio 1 to 1000") {
  constexpr auto one = 1_mC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mC;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_charge_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _C THEN result is a "
          "electric_charge type AND ratio 1 to 1") {
  constexpr auto one = 1_C;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_C;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_charge_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kC THEN result is a "
          "electric_charge type AND ratio 1000 to 1") {
  constexpr auto one = 1_kC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MC THEN result is a "
          "electric_charge type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GC THEN result is a "
          "electric_charge type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TC THEN result is a "
          "electric_charge type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PC THEN result is a "
          "electric_charge type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EC THEN result is a "
          "electric_charge type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EC;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_charge_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EC;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_charge_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN values electric current (I) and a time (T) WHEN multiplied "
          "THEN result is electric charge (Q)") {
  constexpr auto current = 1_A;
  constexpr auto time = 1_s;
  constexpr auto result = current * time;
  constexpr auto result_commutative = time * current;

  STATIC_REQUIRE(is_same_ignore_const<decltype(result), decltype(1_C)>::value);
  STATIC_REQUIRE(
      is_same_ignore_const<decltype(result_commutative), decltype(1_C)>::value);
  STATIC_REQUIRE(result == result_commutative);
}

TEST_CASE("GIVEN value for electric charge WHEN divided by electric current "
          "THEN result is a time value") {
  constexpr auto charge = 1_C;
  constexpr auto current = 1_A;

  constexpr auto result = charge / current;

  STATIC_REQUIRE(is_same_ignore_const<decltype(result), decltype(1_s)>::value);
}

TEST_CASE("GIVEN value for electric charge WHEN divided by time THEN result is "
          "electric current") {
  constexpr auto charge = 1_C;
  constexpr auto time = 1_s;
  constexpr auto result = charge / time;

  STATIC_REQUIRE(is_same_ignore_const<decltype(result), decltype(1_A)>::value);
}

TEST_CASE("GIVEN values for I and T AND ratio is the same WHEN multiplied THEN "
          "resulting value is I.raw_value() * T.raw_value()") {
  constexpr auto current = 1_A;
  constexpr auto time = 2_s;
  constexpr auto result = current * time;
  constexpr auto result_commutative = time * current;

  STATIC_REQUIRE(result.raw_value() == 2);
  STATIC_REQUIRE(result_commutative.raw_value() == 2);
}

TEST_CASE("GIVEN values for I and T AND ratio is not the same WHEN multiplied "
          "THEN resulting ratio is multiplied") {
  constexpr auto current = 1000_mA;
  constexpr auto t = 2_s;
  constexpr auto result = current * t;
  constexpr auto result_commutative = t * current;

  STATIC_REQUIRE(std::ratio_equal<decltype(result)::ratio, std::milli>::value);

  STATIC_REQUIRE(result.raw_value() == 2000);

  STATIC_REQUIRE(std::ratio_equal<decltype(result_commutative)::ratio,
                                  decltype(result)::ratio>::value);

  STATIC_REQUIRE(result_commutative.raw_value() == 2000);

  STATIC_REQUIRE(result_commutative == result);
}

TEST_CASE("GIVEN electric charge Q with ratio<1> WHEN divided by electric "
          "current I with ratio<1> THEN "
          "result is time t with ratio <1>") {
  constexpr auto charge = 8_C;
  constexpr auto current = 4_A;
  constexpr auto result = charge / current;

  STATIC_REQUIRE(is_same_ignore_const<decltype(result), decltype(1_s)>::value);

  STATIC_REQUIRE(result.raw_value() == 2);
}

TEST_CASE(
    "GIVEN electric charge Q with ratio<1000000,1> WHEN divided by electric "
    "current I with ratio<1> THEN "
    "result is time t with ratio <1,1> (s)") {
  constexpr auto charge = 8_MC;
  constexpr auto current = 4000_A;
  constexpr auto result = charge / current;

  STATIC_REQUIRE(std::ratio_equal<decltype(result)::ratio, std::mega>::value);
  STATIC_REQUIRE(result.raw_value() ==
                 0); // result would be 2000 s which is 0.002 Mega-Seconds
}

TEST_CASE("GIVEN electric charge Q with ratio<1000000,1>  AND type is floating "
          "point WHEN divided by electric "
          "current I with ratio<1> THEN "
          "result is time t with ratio <1,1> (s)") {
  constexpr auto charge = 8.0_MC;
  constexpr auto current = 4000.0_A;
  constexpr auto result = charge / current;

  STATIC_REQUIRE(std::ratio_equal<decltype(result)::ratio, std::mega>::value);
  STATIC_REQUIRE(SI::detail::epsEqual(result.raw_value(), 0.002L));
}

TEST_CASE("GIVEN electric charge Q with ratio<1> WHEN divided by time T in "
          "seconds THEN result is electric current I with ratio<1>") {
  constexpr auto charge = 4_C;
  constexpr auto time = 2_s;
  constexpr auto result = charge / time;

  STATIC_REQUIRE(is_same_ignore_const<decltype(result), decltype(1_A)>::value);
  STATIC_REQUIRE(result == 2_A);
}

TEST_CASE("GIVEN electric charge Q with ratio<1000,1> WHEN divided by time T "
          "with ratio <60,1> (min) THEN result is 33A") {
  constexpr auto charge = 4_kC;
  constexpr auto time = 2_min;
  constexpr auto result = charge / time;

  STATIC_REQUIRE(
      std::ratio_equal<decltype(result)::ratio, std::ratio<50, 3>>::value);

  STATIC_REQUIRE(result.raw_value() == 2);
}
