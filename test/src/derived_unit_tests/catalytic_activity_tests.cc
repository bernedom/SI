#include <catch.hpp>

#include <SI/catalytic_activity.h>
#include <SI/substance.h>
#include <SI/time.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _akat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_akat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_akat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ukat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ukat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ukat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kat THEN result is a "
          "catalytic_activity type AND ratio 1 to 1") {
  constexpr auto one = 1_kat;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::catalytic_activity_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_kat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kkat THEN result is a "
          "catalytic_activity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mkat THEN result is a "
          "catalytic_activity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gkat THEN result is a "
          "catalytic_activity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tkat THEN result is a "
          "catalytic_activity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pkat THEN result is a "
          "catalytic_activity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ekat THEN result is a "
          "catalytic_activity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Ekat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Ekat;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::catalytic_activity_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a substance value WHEN divided by a time value THEN "
                   "result is a catalytic_activity value",
                   "[catalytic_activity][operator/]", int64_t, long double) {
  constexpr SI::substance_t<TestType, std::ratio<1>> substance{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = substance / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::catalytic_activity_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a catalytic_activity value WHEN multiplied by an time value "
    "THEN result is a substance value",
    "[catalytic_activity][operator*]", int64_t, long double) {
  constexpr SI::catalytic_activity_t<TestType, std::ratio<1>>
      catalytic_activity{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = catalytic_activity * time;
  constexpr auto result_commutative = time * catalytic_activity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::substance_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a substance value WHEN divided by a catalytic_activity value THEN "
    "result is an time value",
    "[substance][operator/]", int64_t, long double) {
  constexpr SI::substance_t<TestType, std::ratio<1>> substance{1};
  constexpr SI::catalytic_activity_t<TestType, std::ratio<1>>
      catalytic_activity{1};

  constexpr auto result = substance / catalytic_activity;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}