#include <catch2/catch.hpp>

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
                   "result is a acceleration value",
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
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aN");
}

TEST_CASE("GIVEN a 1 femto Newton WHEN passed to a streaming operator THEN "
          "result is '1fN'") {
  constexpr auto value = 1_fN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fN");
}

TEST_CASE("GIVEN a 1 pico Newton WHEN passed to a streaming operator THEN "
          "result is '1pN'") {
  constexpr auto value = 1_pN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pN");
}

TEST_CASE("GIVEN a 1 nano Newton WHEN passed to a streaming operator THEN "
          "result is '1pN'") {
  constexpr auto value = 1_nN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nN");
}

TEST_CASE("GIVEN a 1 micro Newton WHEN passed to a streaming operator THEN "
          "result is '1uN'") {
  constexpr auto value = 1_uN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uN");
}

TEST_CASE("GIVEN a 1 milli Newton WHEN passed to a streaming operator THEN "
          "result is '1mN'") {
  constexpr auto value = 1_mN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mN");
}

TEST_CASE("GIVEN a 1 Newton WHEN passed to a streaming operator THEN result is "
          "'1N'") {
  constexpr auto value = 1_N;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 N");
}

TEST_CASE("GIVEN a 1 kilo Newton WHEN passed to a streaming operator THEN "
          "result is '1kN'") {
  constexpr auto value = 1_kN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kN");
}

TEST_CASE("GIVEN a 1 mega Newton WHEN passed to a streaming operator THEN "
          "result is '1MN'") {
  constexpr auto value = 1_MN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MN");
}

TEST_CASE("GIVEN a 1 giga Newton WHEN passed to a streaming operator THEN "
          "result is '1GN'") {
  constexpr auto value = 1_GN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GN");
}

TEST_CASE("GIVEN a 1 tera Newton WHEN passed to a streaming operator THEN "
          "result is '1TN'") {
  constexpr auto value = 1_TN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TN");
}

TEST_CASE("GIVEN a 1 exa Newton WHEN passed to a streaming operator THEN "
          "result is '1EN'") {
  constexpr auto value = 1_EN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EN");
}

TEST_CASE("GIVEN a 1 peta Newton WHEN passed to a streaming operator THEN "
          "result is '1PN'") {
  constexpr auto value = 1_PN;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PN");
}

TEST_CASE(
    "GIVEN a string of '1aN' WHEN streamed into atto_newton_t THEN result "
    "is a value of 1 atto_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1aN";
  SI::atto_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aN);
}

TEST_CASE(
    "GIVEN a string of '1fN' WHEN streamed into femto_newton_t THEN result "
    "is a value of 1 femto_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1fN";
  SI::femto_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fN);
}

TEST_CASE(
    "GIVEN a string of '1pN' WHEN streamed into pico_newton_t THEN result "
    "is a value of 1 pico_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1pN";
  SI::pico_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pN);
}

TEST_CASE(
    "GIVEN a string of '1nN' WHEN streamed into nano_newton_t THEN result "
    "is a value of 1 nano_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1nN";
  SI::nano_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nN);
}

TEST_CASE(
    "GIVEN a string of '1uN' WHEN streamed into micro_newton_t THEN result "
    "is a value of 1 micro_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1uN";
  SI::micro_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uN);
}

TEST_CASE(
    "GIVEN a string of '1mN' WHEN streamed into milli_newton_t THEN result "
    "is a value of 1 milli_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1mN";
  SI::milli_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mN);
}

TEST_CASE("GIVEN a string of '1N' WHEN streamed into newton_t THEN result "
          "is a value of 1 newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1N";
  SI::newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_N);
}

TEST_CASE(
    "GIVEN a string of '1kN' WHEN streamed into kilo_newton_t THEN result "
    "is a value of 1 kilo_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1kN";
  SI::kilo_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kN);
}

TEST_CASE(
    "GIVEN a string of '1MN' WHEN streamed into mega_newton_t THEN result "
    "is a value of 1 mega_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1MN";
  SI::mega_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MN);
}

TEST_CASE(
    "GIVEN a string of '1GN' WHEN streamed into giga_newton_t THEN result "
    "is a value of 1 giga_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1GN";
  SI::giga_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GN);
}

TEST_CASE(
    "GIVEN a string of '1TN' WHEN streamed into tera_newton_t THEN result "
    "is a value of 1 tera_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1TN";
  SI::tera_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TN);
}

TEST_CASE(
    "GIVEN a string of '1PN' WHEN streamed into peta_newton_t THEN result "
    "is a value of 1 peta_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1PN";
  SI::peta_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PN);
}

TEST_CASE("GIVEN a string of '1EN' WHEN streamed into exa_newton_t THEN result "
          "is a value of 1 exa_newton_t AND stream is good") {
  std::stringstream ss;
  ss << "1EN";
  SI::exa_newton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EN);
}
