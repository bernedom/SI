#include <catch.hpp>

#include <SI/force.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aN THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fN THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pN THEN result is a "
          "force type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nN THEN result is a "
          "force type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uN THEN result is a "
          "force type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mN THEN result is a "
          "force type AND ratio 1 to 1000") {
  constexpr auto one = 1_mN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _N THEN result is a "
          "force type AND ratio 1 to 1") {
  constexpr auto one = 1_N;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::force_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_N;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kN THEN result is a "
          "force type AND ratio 1000 to 1") {
  constexpr auto one = 1_kN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MN THEN result is a "
          "force type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GN THEN result is a "
          "force type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TN THEN result is a "
          "force type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PN THEN result is a "
          "force type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EN THEN result is a "
          "force type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EN;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::force_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EN;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::force_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a mass value WHEN multiplied with a acceleration "
                   "value THEN result is a force value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::mass_t<TestType, std::ratio<1>> m{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = m * a;
  constexpr auto result_commutative = a * m;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::force_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by acceleration THEN then "
                   "result is a mass value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = f / a;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::mass_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by mass THEN then "
                   "result is a accelereatin value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};
  constexpr SI::mass_t<TestType, std::ratio<1>> m{1};

  constexpr auto result = f / m;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Newton WHEN passed to a streaming operator THEN "
          "result is '1aN'") {
  constexpr auto value = 1_aN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aN");
}

TEST_CASE("GIVEN a 1 femto Newton WHEN passed to a streaming operator THEN "
          "result is '1fN'") {
  constexpr auto value = 1_fN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fN");
}

TEST_CASE("GIVEN a 1 pico Newton WHEN passed to a streaming operator THEN "
          "result is '1pN'") {
  constexpr auto value = 1_pN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pN");
}

TEST_CASE("GIVEN a 1 nano Newton WHEN passed to a streaming operator THEN "
          "result is '1pN'") {
  constexpr auto value = 1_nN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nN");
}

TEST_CASE("GIVEN a 1 micro Newton WHEN passed to a streaming operator THEN "
          "result is '1uN'") {
  constexpr auto value = 1_uN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uN");
}

TEST_CASE("GIVEN a 1 milli Newton WHEN passed to a streaming operator THEN "
          "result is '1mN'") {
  constexpr auto value = 1_mN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mN");
}

TEST_CASE("GIVEN a 1 Newton WHEN passed to a streaming operator THEN result is "
          "'1N'") {
  constexpr auto value = 1_N;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1N");
}

TEST_CASE("GIVEN a 1 kilo Newton WHEN passed to a streaming operator THEN "
          "result is '1kN'") {
  constexpr auto value = 1_kN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kN");
}

TEST_CASE("GIVEN a 1 mega Newton WHEN passed to a streaming operator THEN "
          "result is '1MN'") {
  constexpr auto value = 1_MN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MN");
}

TEST_CASE("GIVEN a 1 giga Newton WHEN passed to a streaming operator THEN "
          "result is '1GN'") {
  constexpr auto value = 1_GN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GN");
}

TEST_CASE("GIVEN a 1 tera Newton WHEN passed to a streaming operator THEN "
          "result is '1TN'") {
  constexpr auto value = 1_TN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TN");
}

TEST_CASE("GIVEN a 1 exa Newton WHEN passed to a streaming operator THEN "
          "result is '1EN'") {
  constexpr auto value = 1_EN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1EN");
}

TEST_CASE("GIVEN a 1 peta Newton WHEN passed to a streaming operator THEN "
          "result is '1PN'") {
  constexpr auto value = 1_PN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1PN");
}