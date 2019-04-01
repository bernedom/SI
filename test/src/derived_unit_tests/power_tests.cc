#include <catch.hpp>

#include <SI/energy.h>
#include <SI/power.h>
#include <SI/time.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aW THEN result is a "
          "power type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fW THEN result is a "
          "power type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pW THEN result is a "
          "power type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nW THEN result is a "
          "power type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uW THEN result is a "
          "power type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mW THEN result is a "
          "power type AND ratio 1 to 1000") {
  constexpr auto one = 1_mW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _W THEN result is a "
          "power type AND ratio 1 to 1") {
  constexpr auto one = 1_W;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::power_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_W;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kW THEN result is a "
          "power type AND ratio 1000 to 1") {
  constexpr auto one = 1_kW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MW THEN result is a "
          "power type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GW THEN result is a "
          "power type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TW THEN result is a "
          "power type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PW THEN result is a "
          "power type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EW THEN result is a "
          "power type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EW;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::power_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EW;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::power_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by an time value THEN "
                   "result is a power value",
                   "[power][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = energy / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::power_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a power value WHEN multiplied by an time value "
                   "THEN result is a energy value",
                   "[power][operator*]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = power * time;
  constexpr auto result_commutative = time * power;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by a power value THEN "
                   "result is an time value",
                   "[energy][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};

  constexpr auto result = energy / power;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}