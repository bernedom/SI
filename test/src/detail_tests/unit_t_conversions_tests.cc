#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

#include <type_traits>

using namespace SI::detail;

namespace {
template <typename _type, typename _ratio>
using unit_Z_t = SI::detail::unit_t<'Z', std::ratio<1>, _type, _ratio>;

template <typename _type, typename _ratio>
using unit_X_t = SI::detail::unit_t<'X', std::ratio<1>, _type, _ratio>;
} // namespace

TEST_CASE("GIVEN a declared unit of type int64_t WHEN copy-constructed "
          "with a unit of type int8_t THEN value is implicitly converted") {

  constexpr unit_t<'X', std::ratio<1>, int8_t> v_int8{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int(v_int8);

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int.value() == 1);
}

TEST_CASE("GIVEN a declared unit of type int64_t WHEN copy-constructed "
          "with a unit of type int8_t AND ratio is different THEN value is "
          "implicitly converted") {

  constexpr unit_t<'X', std::ratio<1>, int8_t> v_int8{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int(v_int8);

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int.value() == 1000);
}

TEST_CASE("GIVEN a declared unit of type int64_t WHEN move-constructed "
          "with a unit of type int8_t THEN value is implicitly converted") {

  constexpr unit_t<'X', std::ratio<1>, int8_t> v_int8{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int(std::move(v_int8));

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int.value() == 1);
}

TEST_CASE("GIVEN a declared unit of type int64_t WHEN move-constructed "
          "with a unit of type int8_t AND ratio is different THEN value is "
          "implicitly converted") {

  constexpr unit_t<'X', std::ratio<1>, int8_t> v_int8{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int(
      std::move(v_int8));

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int.value() == 1000);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN assigned a unit of type "
          "int64_t THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{1};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64 = v_int32;

  STATIC_REQUIRE(
      std::is_same<decltype(v_int64)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int32.value() == v_int64.value());
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN compared with an unit of type "
          "int64_t THEN value is implicitely converted") {

  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64{123};

  STATIC_REQUIRE(v_int32 == v_int64);
  STATIC_REQUIRE_FALSE(v_int32 != v_int64);
}

TEST_CASE(
    "GIVEN a declared unit of int32_t WHEN compared with an unit of type "
    "int64_t AND ratio is different THEN value is implicitely converted") {

  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{123000};

  STATIC_REQUIRE(v_int32 == v_int64);
  STATIC_REQUIRE_FALSE(v_int32 != v_int64);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN compared with < to an unit of "
          "type int64_t THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64{124};

  STATIC_REQUIRE(v_int32 < v_int64);
  STATIC_REQUIRE(v_int32 <= v_int64);
}

TEST_CASE(
    "GIVEN a declared unit of int32_t WHEN compared with < to an unit of "
    "type int64_t AND ratio is different THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{124000};

  STATIC_REQUIRE(v_int32 < v_int64);
  STATIC_REQUIRE(v_int32 <= v_int64);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN compared with > to an unit of "
          "type int64_t THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{124};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64{123};

  STATIC_REQUIRE(v_int32 > v_int64);
  STATIC_REQUIRE(v_int32 >= v_int64);
}

TEST_CASE(
    "GIVEN a declared unit of int32_t WHEN compared with > to an unit of "
    "type int64_t AND ratio is different THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{124};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{123000};

  STATIC_REQUIRE(v_int32 > v_int64);
  STATIC_REQUIRE(v_int32 >= v_int64);
}

TEST_CASE("GIVEN a declared unit of int64_t WHEN multiplied with an unit of "
          "type int32_t THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64{5};
  constexpr auto result = v_int64 * v_int32;

  STATIC_REQUIRE(std::is_same<const unit_t<'X', std::ratio<2>, int64_t>,
                              decltype(result)>::value);
}

TEST_CASE(
    "GIVEN a declared unit of int64_t WHEN multiplied with an unit of "
    "type int32_t AND ratio is different THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{5000};
  constexpr auto result = v_int64 * v_int32;

  STATIC_REQUIRE(
      std::is_same<const unit_t<'X', std::ratio<2>, int64_t, std::milli>,
                   decltype(result)>::value);
}

TEST_CASE(
    "GIVEN a declared unit of int64_t WHEN multiply-assigned raw value of "
    "type int64_t THEN value is implicitely converted") {
  int32_t raw_value{2};
  unit_t<'X', std::ratio<1>, int64_t> v_int64{5};
  const auto result = v_int64 * raw_value;
  v_int64 *= raw_value;

  STATIC_REQUIRE(
      std::is_same<decltype(v_int64),
                   std::remove_const<decltype(result)>::type>::value);
  REQUIRE(result == v_int64);
}

TEST_CASE("GIVEN a declared unit of int64_t WHEN divided by scalar of "
          "type int32_t THEN value is implicitely converted") {
  constexpr int32_t v_int32{2};
  unit_t<'X', std::ratio<1>, int64_t> v_int64{10};
  auto result = v_int64 / v_int32;
  v_int64 /= v_int32;

  STATIC_REQUIRE(std::is_same<unit_t<'X', std::ratio<1>, int64_t>,
                              decltype(result)>::value);
  REQUIRE(result.value() == 5);
  REQUIRE(result == v_int64);
}

TEST_CASE("GIVEN a declared unit of int64_t WHEN divided by an unit of "
          "type int32_t AND exponent is the same THEN value is implicitely "
          "converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr unit_t<'X', std::ratio<1>, int64_t> v_int64{5};
  constexpr auto result = v_int64 / v_int32;

  STATIC_REQUIRE(std::is_same<const int64_t, decltype(result)>::value);
}

TEST_CASE("GIVEN a declared unit of int64_t WHEN divided by an unit of "
          "type int32_t AND exponent is not the same THEN value is implicitely "
          "converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr unit_t<'X', std::ratio<2>, int64_t> v_int64{5};
  constexpr auto result = v_int64 / v_int32;

  STATIC_REQUIRE(std::is_same<const unit_t<'X', std::ratio<1>, int64_t>,
                              decltype(result)>::value);
}

TEST_CASE("GIVEN a declared unit of int64_t WHEN divided by an unit of "
          "type int32_t AND exponent is not the same AND ratio is not the same "
          "THEN value is implicitely "
          "converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t, std::milli> v_int32{2000};
  constexpr unit_t<'X', std::ratio<2>, int64_t> v_int64{5};
  constexpr auto result = v_int64 / v_int32;

  STATIC_REQUIRE(
      std::is_same<const unit_t<'X', std::ratio<1>, int64_t, std::kilo>,
                   decltype(result)>::value);
}

TEST_CASE("GIVEN a scaler of int64_t WHEN divided by an unit of "
          "type int32_t THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr int64_t v_int64{10};
  constexpr auto result = v_int64 / v_int32;

  STATIC_REQUIRE(std::is_same<const unit_t<'X', std::ratio<-1>, int64_t>,
                              decltype(result)>::value);
}

TEST_CASE("GIVEN a scaler of double WHEN divided by an unit of "
          "type float THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, float> v_float{2};
  constexpr double v_double{10};
  constexpr auto result = v_double / v_float;

  STATIC_REQUIRE(std::is_same<const unit_t<'X', std::ratio<-1>, double>,
                              decltype(result)>::value);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN added to an unit of "
          "type int64_t  THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  unit_t<'X', std::ratio<1>, int64_t> v_int64{123};
  auto result = v_int64 + v_int32;
  v_int64 += v_int32;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v_int64)>::value);
  REQUIRE(v_int64 == result);
}

TEST_CASE(
    "GIVEN a declared unit of int32_t WHEN added to an unit of "
    "type int64_t AND ratio is different THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{124000};
  auto result = v_int64 + v_int32;
  v_int64 += v_int32;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v_int64)>::value);
  REQUIRE(v_int64 == result);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN subtracted from an unit of "
          "type int64_t  THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  unit_t<'X', std::ratio<1>, int64_t> v_int64{123};
  auto result = v_int64 - v_int32;
  v_int64 -= v_int32;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v_int64)>::value);
  REQUIRE(v_int64 == result);
}

TEST_CASE(
    "GIVEN a declared unit of int32_t WHEN subtracted from an unit of "
    "type int64_t AND ratio is different THEN value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{124000};
  auto result = v_int64 - v_int32;
  v_int64 -= v_int32;

  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v_int64)>::value);
  REQUIRE(v_int64 == result);
}

TEST_CASE("GIVEN a declared unit of int32_t WHEN cast to an unit of type "
          "int64_t THEN "
          "value is implicitely converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{123};
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::milli> v_int64{123000};
  constexpr auto result =
      SI::detail::unit_cast<unit_t<'X', std::ratio<1>, int64_t, std::milli>>(
          v_int32);
  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v_int64)>::value);
  STATIC_REQUIRE(v_int64 == result);
}

TEST_CASE("GIVEN to values of different type AND ratio is the same AND "
          "internal type is different"
          "WHEN divided THEN resulting unit is as specified AND ratio "
          "is the same AND exponent is specified by resulting unit") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', std::ratio<1>, int32_t, std::ratio<1>> v2{1};

  constexpr auto result = SI::detail::cross_unit_divide<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<int64_t, std::ratio<1>>>::value);

  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::exponent,
                                  std::ratio<1>>::value);
}

TEST_CASE("GIVEN to values of different type AND ratio is the same "
          "WHEN multiplied THEN resulting unit is as specified AND ratio is "
          "the same") {
  constexpr unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', std::ratio<1>, int32_t, std::ratio<1>> v2{1};

  constexpr auto result = SI::detail::cross_unit_multiply<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<int64_t, std::ratio<1>>>::value);

  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::exponent,
                                  std::ratio<1>>::value);
}

TEST_CASE("GIVEN a unit with internal type of int32_t WHEN static_cast to unit "
          "of int64_t THEN value is converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr auto result =
      static_cast<unit_t<'X', std::ratio<1>, int64_t>>(v_int32);

  STATIC_REQUIRE(std::is_same<const unit_t<'X', std::ratio<1>, int64_t>,
                              decltype(result)>::value);
  STATIC_REQUIRE(result.value() == 2);
}

TEST_CASE("GIVEN a unit with internal type of int32_t WHEN static_cast to unit "
          "of int64_t AND ratio is different THEN value is converted") {
  constexpr unit_t<'X', std::ratio<1>, int32_t> v_int32{2};
  constexpr auto result =
      static_cast<unit_t<'X', std::ratio<1>, int64_t, std::milli>>(v_int32);

  STATIC_REQUIRE(
      std::is_same<const unit_t<'X', std::ratio<1>, int64_t, std::milli>,
                   decltype(result)>::value);
  STATIC_REQUIRE(result.value() == 2000);
}
