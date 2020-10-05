#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

TEMPLATE_TEST_CASE("GIVEN two values of the same unit type WHEN assigned with "
                   "= THEN the values are equal afterwards",
                   "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{123};
  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{0};
  v2 = v1;

  REQUIRE(v1 == v2);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type AND different ratios WHEN assigned "
    "with "
    "= THEN the values are equal afterwards and ratios are preserved",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1000};
  unit_t<'X', std::ratio<1>, TestType, std::kilo> v2{0};
  v2 = v1;

  REQUIRE(v1 == v2);
  REQUIRE(v2.value() == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type WHEN copy constructed"
    "THEN the values are equal afterwards",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{123};
  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{v1};

  REQUIRE(v1 == v2);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type AND different ratios WHEN copy "
    "constructed THEN the values are equal afterwards and ratios are preserved",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1000};
  unit_t<'X', std::ratio<1>, TestType, std::kilo> v2{v1};

  REQUIRE(v1 == v2);
  REQUIRE(v2.value() == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type WHEN move constructed"
    "THEN the values are equal afterwards",
    "[unit_t][operator*]", int64_t, long double) {

  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{123};
  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{std::move(v1)};

  REQUIRE(v1 == v2);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type AND different ratios WHEN move "
    "constructed THEN the values are equal afterwards and ratios are preserved",
    "[unit_t][operator*]", int64_t, long double) {

  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1000};
  unit_t<'X', std::ratio<1>, TestType, std::kilo> v2{std::move(v1)};

  REQUIRE(v1 == v2);
  REQUIRE(v2.value() == 1);
}

TEMPLATE_TEST_CASE("GIVEN two values of the same unit type WHEN move assigned"
                   "THEN the values are equal afterwards",
                   "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{123};
  unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{0};

  v2 = std::move(v1);

  REQUIRE(v1 == v2);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of the same unit type AND different ratios WHEN move "
    "assigned "
    "with "
    "= THEN the values are equal afterwards and ratios are preserved",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1000};
  unit_t<'X', std::ratio<1>, TestType, std::kilo> v2{0};
  v2 = std::move(v1);

  REQUIRE(v1 == v2);
  REQUIRE(v2.value() == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values with exponent 1 WHEN multiplied THEN exponent is 2",
    "[unit_t][operator*]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{0};

  constexpr auto result = v1 * v1;

  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::exponent,
                                  std::ratio<2>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with different non-negative values AND same ratio "
    "AND same unit WHEN "
    "multiplied THEN resulting value is correct",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{20};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{30};

  constexpr auto result = v1 * v2;

  STATIC_REQUIRE(result ==
                 unit_t<'X', std::ratio<2>, TestType, std::ratio<1>>{600});
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with different non-negative values AND different ratio "
    "AND same unit WHEN "
    "multiplied THEN resulting value is correct AND resulting ratio is ratio "
    "multiplied",
    "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::deci> v1{2};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{30};

  constexpr auto result = v1 * v2;

  STATIC_REQUIRE(result == unit_t<'X', std::ratio<2>, TestType, std::deci>{60});
  STATIC_REQUIRE(
      std::is_same<decltype(result), const unit_t<'X', std::ratio<2>, TestType,
                                                  std::deci>>::value);
}

TEMPLATE_TEST_CASE("GIVEN two units with different values AND different ratio "
                   "AND same unit WHEN "
                   "multiplied THEN resulting value is correct",
                   "[unit_t][operator*]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::deci> v1{2};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{-30};

  constexpr auto result = v1 * v2;

  STATIC_REQUIRE(result ==
                 unit_t<'X', std::ratio<2>, TestType, std::deci>{-60});
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(result)::ratio, std::deci>::value);
}

TEST_CASE("GIVEN a unit WHEN divided by as scalar THEN result is correct") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v{30};
  constexpr auto r = v / 2;
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> expected{15};

  STATIC_REQUIRE(r.value() == 15);
  STATIC_REQUIRE(r == expected);
  STATIC_REQUIRE(std::is_same<decltype(r), decltype(v)>::value);
}

/* This test is not templatized because of the == comparison of the raw values,
 Which does not work with floating points*/
TEST_CASE(
    "GIVEN two units with different values AND ratio of rhs is small AND type "
    "is integer WHEN "
    "multiplied THEN resulting ratio is ratios multiplied and value is correct",
    "[unit_t][operator*]") {

  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v2{30};

  constexpr auto result = v1 * v2;

  STATIC_REQUIRE(result == unit_t<'X', std::ratio<2>, int64_t, std::milli>{60});
  STATIC_REQUIRE(result.value() == 60);
  STATIC_REQUIRE(
      std::ratio_equal<typename decltype(result)::ratio, std::milli>::value);
}

/* This test is not templatized because of the epsEqual comparison of the raw
 * values*/
TEST_CASE(
    "GIVEN two units with different values AND ratio of rhs is small AND type "
    "is floating point WHEN "
    "multiplied THEN resulting type is of left hand side and value is a "
    "fraction but does not match epsilon",
    "[unit_t][operator*]") {

  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v1{2};
  constexpr unit_t<'X', std::ratio<1>, long double, std::milli> v2{20};

  constexpr auto result = v1 * v2;

  constexpr auto expected =
      v1 *
      unit_cast<unit_t<'X', std::ratio<1>, long double, std::ratio<1>>>(v2);

  STATIC_REQUIRE(epsEqual(result.value(), 40.0L));
  STATIC_REQUIRE(result == expected);
  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::ratio,
                                  typename std::milli>::value);
}

TEMPLATE_TEST_CASE("GIVEN two units with different exponents WHEN divided THEN "
                   "resulting exopnent is left exponent - right exponent",
                   "[unit_t][operator/]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<3>, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'X', std::ratio<2>, TestType, std::ratio<1>> v2{1};

  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::exponent,
                                  std::ratio<1>>::value);
}

TEMPLATE_TEST_CASE("GIVEN two units with same exponent AND same ratio WHEN "
                   "divided THEN result is internal type",
                   "[unit_t][operator/]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};
  constexpr auto result = v1 / v1;

  STATIC_REQUIRE(
      std::is_same<typename std::remove_const<decltype(result)>::type,
                   typename decltype(v1)::internal_type>::value);
}

TEST_CASE(
    "GIVEN two units with same exponent AND different ratios WHEN divided THEN "
    "result is internal type AND ratio is calculated into result") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{500};

  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(
      std::is_same<typename std::remove_const<decltype(result)>::type,
                   typename decltype(v1)::internal_type>::value);
  STATIC_REQUIRE(result == 2);
}

TEST_CASE("GIVEN two units with different exponents AND different ratios WHEN  "
          "divided THEN result is unit with exponents subtracted AND ratio "
          "is divided ") {
  constexpr SI::detail::unit_t<'X', std::ratio<2>, int64_t, std::ratio<1>> v1{
      4};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::milli> v2{2};

  constexpr auto result = v1 / v2;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::detail::unit_t<'X', std::ratio<1>, int64_t,
                                            std::kilo>>::value);
  STATIC_REQUIRE(result.value() == 2);
}

TEST_CASE("GIVEN two units with different exponents AND same ratios WHEN "
          "divided THEN result is unit with exponents subtracted AND ratio "
          "is divided") {
  constexpr SI::detail::unit_t<'X', std::ratio<2>, int64_t, std::milli> v1{4};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::milli> v2{2};

  constexpr auto result = v1 / v2;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::detail::unit_t<'X', std::ratio<1>, int64_t,
                                            std::ratio<1>>>::value);
  STATIC_REQUIRE(result.value() == 2);
}

TEST_CASE("GIVEN two units with the same ratio exponent 1 AND internal type is "
          "integral type  WHEN divided result "
          "is lhs.value / "
          "rhs.value",
          "[unit_t][operator/]") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{1000};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{10};
  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(std::is_same<std::remove_const<decltype(result)>::type,
                              decltype(v1)::internal_type>::value);
  STATIC_REQUIRE(result == 100);
}

TEST_CASE("GIVEN two units with the same ratio exponent 1 AND internal type is "
          "floating point WHEN divided result "
          "is lhs.value / "
          "rhs.value",
          "[unit_t][operator/]") {
  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v1{1000};
  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v2{10};
  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(std::is_same<std::remove_const<decltype(result)>::type,
                              decltype(v1)::internal_type>::value);
  STATIC_REQUIRE(epsEqual(result, 100.0L));
}

TEMPLATE_TEST_CASE(
    "GIVEN a unit and a scalar WHEN scalar is divided by unit THEN unit "
    "exponent is negative",
    "[unit_t][operator/]", int64_t, long double) {
  constexpr TestType v1{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{1};
  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::exponent,
                                  std::ratio<-1>>::value);
}

TEST_CASE("GIVEN a unit with ratio<1> and a scalar AND internal type is "
          "integral WHEN scalar is divided by "
          "unit THEN resulting  value is scalar / unit.value",
          "[unit_t][operator/]") {
  constexpr int64_t v1{1000};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{2};
  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(result.value() == 500);
}

TEST_CASE("GIVEN a unit with ratio<1> and a scalar AND internal type is "
          "floating point WHEN scalar is divided by "
          "unit THEN resulting  value is scalar / unit.value",
          "[unit_t][operator/]") {
  constexpr long double v1 = 1000.0L;
  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v2{2};
  constexpr auto result = v1 / v2;

  STATIC_REQUIRE(epsEqual(result.value(), 500.0L));
}

TEST_CASE("GIVEN a unit with ratio<1, 1000> and a scalar AND interal type is "
          "integral WHEN scalar is dived "
          "by unit THEN resulting value is adjusted by ratio",
          "[unit_t][operator/]") {
  constexpr int64_t v1{1000};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::deca> v2{2};

  constexpr auto result = v1 / v2;
  constexpr unit_t<'X', std::ratio<-1>, int64_t, std::deca> expected{5};
  STATIC_REQUIRE(v2.value() == 2);
  STATIC_REQUIRE(std::ratio_equal<std::deca, decltype(result)::ratio>::value);
  STATIC_REQUIRE(result.value() == 5);
  STATIC_REQUIRE(result == expected);
}

TEST_CASE("GIVEN a unit with ratio<1, 1000> and a scalar AND interal type is "
          "floating point WHEN scalar is dived "
          "by unit THEN resulting value is adjusted by ratio",
          "[unit_t][operator/]") {
  constexpr long double v1{1000};
  constexpr unit_t<'X', std::ratio<1>, long double, std::deca> v2{2};

  constexpr auto result = v1 / v2;
  constexpr unit_t<'X', std::ratio<-1>, long double, std::deca> expected{5};
  STATIC_REQUIRE(v2.value() == 2);
  STATIC_REQUIRE(std::ratio_equal<std::deca, decltype(result)::ratio>::value);
  STATIC_REQUIRE(epsEqual(result.value(), 5.0L));
  STATIC_REQUIRE(result == expected);
}

TEMPLATE_TEST_CASE("GIVEN a unit WHEN added to itself THEN resulting value is "
                   "value * 2 AND resulting type is the same",
                   "[unit_t][operator+]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};
  constexpr auto result = v1 + v1;

  STATIC_REQUIRE(result.value() == 2);
  STATIC_REQUIRE(std::is_same<decltype(v1), decltype(result)>::value);
}

TEMPLATE_TEST_CASE("GIVEN two values of same unit AND ratio is different WHEN "
                   "added to each other THEN resulting type is type of lhs",
                   "[unit_t][operator+]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> k{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::milli> m{1};

  constexpr auto result = k + m;
  constexpr auto result_commutative = m + k;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(k)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result_commutative), decltype(m)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a value WHEN subtracted from itself THEN result is 0 "
                   "AND type is the same",
                   "[unit_t][operator-]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};
  constexpr auto result = v1 - v1;
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> expected(0);
  STATIC_REQUIRE(expected == result);
}

TEMPLATE_TEST_CASE(
    "GIVEN two values of same unit AND ratio is different WHEN "
    "subtracted from each other THEN resulting type is type of lhs",
    "[unit_t][operator+]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> k{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::milli> m{1};

  constexpr auto result = k - m;
  constexpr auto result_commutative = m - k;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(k)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result_commutative), decltype(m)>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with different ratios WHEN added together THEN result is "
    "lhs + rhs with ratio considered AND result is of ratio of lhs",
    "[unit_t][operator+]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> v2{1};

  constexpr auto result = v1 + v2;
  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::ratio,
                                  typename decltype(v1)::ratio>::value == true);
  STATIC_REQUIRE(result.value() == 1001);
}

TEMPLATE_TEST_CASE("GIVEN two units with value difference "
                   "smaller than type::epsilon WHEN compared for equality "
                   "THEN result is true",
                   "[unit_t][operator==]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{0};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{
      std::numeric_limits<TestType>::epsilon() / static_cast<TestType>(2)};

  STATIC_REQUIRE(v1 == v2);
  STATIC_REQUIRE(!(v1 != v2));
}

TEST_CASE("GIVEN two units with floating point types with value difference of "
          "epsilon WHEN compared for equality"
          "THEN result is false",
          "[unit_t][operator==]") {
  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v1{0};
  constexpr unit_t<'X', std::ratio<1>, long double, std::ratio<1>> v2{
      std::numeric_limits<long double>::epsilon()};

  STATIC_REQUIRE(v1 != v2);
  STATIC_REQUIRE(!(v1 == v2));
}

TEMPLATE_TEST_CASE(
    "GIVEN two units same absolute value AND different ratios WHEN "
    "compared for equality THEN result in true",
    "[unit_t][operator==]", int64_t, long double) {
  constexpr unit_t<'X', std::ratio<1>, TestType, std::milli> v1{1000};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{1};

  STATIC_REQUIRE(v1 == v2);
  STATIC_REQUIRE(!(v2 != v1));
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with same absolute value AND same ratio WHEN "
    "compared with less than operator THEN result is false",
    "[unit_t][operator<]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};

  STATIC_REQUIRE(!(v1 < v1));
}

TEMPLATE_TEST_CASE(
    "GIVEN two units v1 and v2 AND v1 is smaller than v2 AND same ratio WHEN "
    "compared with less than operator THEN result is true",
    "[unit_t][operator<]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{0};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{1};

  STATIC_REQUIRE(v1 < v2);
  STATIC_REQUIRE(v1 <= v1);
}

TEMPLATE_TEST_CASE("GIVEN two units v1 and v2 AND v1 is smaller than v2 AND "
                   "different ratio WHEN "
                   "compared with less than operator THEN result is true",
                   "[unit_t][operator<]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> v1{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{10000};

  STATIC_REQUIRE(v1 < v2);
  STATIC_REQUIRE(v1 <= v2);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with same absolute value AND same ratio WHEN "
    "compared with greater than operator THEN result is false",
    "[unit_t][operator>]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{1};

  STATIC_REQUIRE(!(v1 > v1));
}

TEMPLATE_TEST_CASE(
    "GIVEN two units with same absolute value AND different ratio WHEN "
    "compared with greater than operator THEN result is false",
    "[unit_t][operator>]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> v1{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{1000};

  STATIC_REQUIRE(!(v1 > v2));
}

TEMPLATE_TEST_CASE(
    "GIVEN two units v1 and v2 AND v1 is smaller than v2 AND same ratio WHEN "
    "compared with greater than operator THEN result is true",
    "[unit_t][operator>]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v1{0};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{1};

  STATIC_REQUIRE(v2 > v1);
  STATIC_REQUIRE(v2 >= v1);
}

TEMPLATE_TEST_CASE("GIVEN two units v1 and v2 AND v1 is smaller than v2 AND "
                   "different ratio WHEN "
                   "compared with greater than operator THEN result is true",
                   "[unit_t][operator>]", int64_t, long double) {

  constexpr unit_t<'X', std::ratio<1>, TestType, std::kilo> v1{1};
  constexpr unit_t<'X', std::ratio<1>, TestType, std::ratio<1>> v2{10000};

  STATIC_REQUIRE(v2 > v1);
  STATIC_REQUIRE(v2 >= v1);
}

TEST_CASE("GIVEN two units with the same value but different ratios AND values "
          "are adjusted for ratio WHEN compared THEN result is true") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v2{1000000};

  STATIC_REQUIRE(v1 == v2);
}

TEST_CASE("GIVEN unit and scalar WHEN multiplied with assignment "
          "THEN result stored in unit") {
  unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{2};
  constexpr int scalar = 7;

  v1 *= scalar;

  REQUIRE(v1.value() == 14);
}

TEST_CASE("GIVEN a unit and a scalar WHEN divided with assigment THEN result "
          "is stored int the unit") {
  unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{10};
  constexpr int64_t scalar{2};

  v1 /= scalar;
  REQUIRE(v1.value() == 5);
  REQUIRE(unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>{5} == v1);
}

TEST_CASE("GIVEN two units with same ratio WHEN added with assignment "
          "THEN result stored in first unit AND ratio is calculated in") {
  unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v2{3};

  v1 += v2;

  REQUIRE(v1.value() == 5);
}

TEST_CASE("GIVEN two units WHEN added with assignment "
          "THEN result stored in first unit AND ratio is calculated in") {
  unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::mega> v2{3};

  v1 += v2;

  REQUIRE(v1.value() == 3002);
}

TEST_CASE("GIVEN two units with same ratio WHEN subtracted with assignment "
          "THEN result is "
          "stored in the first unit AND ratio is calculated in") {
  unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{3};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{2};

  v1 -= v2;

  REQUIRE(v1.value() == 1);
}

TEST_CASE("GIVEN two units WHEN subtracted with assignment THEN result is "
          "stored in the first unit AND ratio is calculated in") {
  unit_t<'X', std::ratio<1>, int64_t, std::mega> v1{3};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v2{2000};

  v1 -= v2;

  REQUIRE(v1.value() == 1);
}

TEST_CASE("GIVEN unit WHEN negated "
          "THEN result should be negation") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> v2{-v1};

  STATIC_REQUIRE(v2.value() == -2);
}

TEST_CASE(
    "GIVEN a unit AND type is integral WHEN incremented with prefix ++ THEN "
    "result is proper increment") {
  unit_t<'X', std::ratio<1>, int64_t> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> expected{3};
  ++v1;
  REQUIRE(v1 == expected);
}

TEST_CASE(
    "GIVEN a unit AND type is integral WHEN incremented with postfix ++ THEN "
    "result is proper increment") {
  unit_t<'X', std::ratio<1>, int64_t> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> expected{3};
  v1++;
  REQUIRE(v1 == expected);
}

TEST_CASE(
    "GIVEN a unit AND type is integral WHEN decremented with prefix -- THEN "
    "result is proper increment") {
  unit_t<'X', std::ratio<1>, int64_t> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> expected{1};
  --v1;
  REQUIRE(v1 == expected);
}

TEST_CASE(
    "GIVEN a unit AND type is integral WHEN decremented with postfix -- THEN "
    "result is proper increment") {
  unit_t<'X', std::ratio<1>, int64_t> v1{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> expected{1};
  v1--;
  REQUIRE(v1 == expected);
}

TEST_CASE(
    "GIVEN a unit AND type is integral WHEN assigned to a value with bigger "
    "ratio AND value is smaller than ratio THEN integer-rounding-applies") {
  constexpr unit_t<'X', std::ratio<1>, int64_t> almost_a_kilo{999};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> zero_kilo{0};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::kilo> kilo_value =
      almost_a_kilo;

  STATIC_REQUIRE(zero_kilo == kilo_value);
  STATIC_REQUIRE(kilo_value.value() == 0);
}
