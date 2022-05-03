#include <catch2/catch.hpp>

#include <SI/area.h>
#include <SI/force.h>
#include <SI/pressure.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _apa THEN result is a "
          "pressure type AND ratio 1 to 10^15") {
  constexpr auto one = 1_apa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_apa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fpa THEN result is a "
          "pressure type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ppa THEN result is a "
          "pressure type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ppa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ppa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _npa THEN result is a "
          "pressure type AND ratio 1 to 10^9") {
  constexpr auto one = 1_npa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_npa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _upa THEN result is a "
          "pressure type AND ratio 1 to 10^6") {
  constexpr auto one = 1_upa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_upa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mpa THEN result is a "
          "pressure type AND ratio 1 to 1000") {
  constexpr auto one = 1_mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pa THEN result is a "
          "pressure type AND ratio 1 to 1") {
  constexpr auto one = 1_pa;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::pressure_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_pa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kpa THEN result is a "
          "pressure type AND ratio 1000 to 1") {
  constexpr auto one = 1_kpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mpa THEN result is a "
          "pressure type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gpa THEN result is a "
          "pressure type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tpa THEN result is a "
          "pressure type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tpa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tpa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ppa THEN result is a "
          "pressure type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Ppa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Ppa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Epa THEN result is a "
          "pressure type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Epa;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::pressure_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Epa;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::pressure_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by an area value THEN "
                   "result is a pressure value",
                   "[pressure][operator/]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> force{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = force / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::pressure_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a pressure value WHEN multiplied by an area value "
                   "THEN result is a force value",
                   "[pressure][operator*]", int64_t, long double) {
  constexpr SI::pressure_t<TestType, std::ratio<1>> pressure{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = pressure * area;
  constexpr auto result_commutative = area * pressure;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::force_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by a pressure value THEN "
                   "result is an area value",
                   "[force][operator/]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> force{1};
  constexpr SI::pressure_t<TestType, std::ratio<1>> pressure{1};

  constexpr auto result = force / pressure;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Pascal WHEN passed to a streaming operator WHEN "
          "result is '1apa'") {
  constexpr auto value = 1_apa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 apa");
}

TEST_CASE("GIVEN a 1 femto Pascal WHEN passed to a streaming operator WHEN "
          "result is '1fpa'") {
  constexpr auto value = 1_fpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fpa");
}

TEST_CASE("GIVEN a 1 pico Pascal WHEN passed to a streaming operator WHEN "
          "result is '1ppa'") {
  constexpr auto value = 1_ppa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ppa");
}

TEST_CASE("GIVEN a 1 nano Pascal WHEN passed to a streaming operator WHEN "
          "result is '1ppa'") {
  constexpr auto value = 1_npa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 npa");
}

TEST_CASE("GIVEN a 1 micro Pascal WHEN passed to a streaming operator WHEN "
          "result is '1upa'") {
  constexpr auto value = 1_upa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 upa");
}

TEST_CASE("GIVEN a 1 milli Pascal WHEN passed to a streaming operator WHEN "
          "result is '1mpa'") {
  constexpr auto value = 1_mpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mpa");
}

TEST_CASE("GIVEN a 1 Pascal WHEN passed to a streaming operator WHEN result is "
          "'1pa'") {
  constexpr auto value = 1_pa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pa");
}

TEST_CASE("GIVEN a 1 kilo Pascal WHEN passed to a streaming operator WHEN "
          "result is '1kpa'") {
  constexpr auto value = 1_kpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kpa");
}

TEST_CASE("GIVEN a 1 mega Pascal WHEN passed to a streaming operator WHEN "
          "result is '1Mpa'") {
  constexpr auto value = 1_Mpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mpa");
}

TEST_CASE("GIVEN a 1 giga Pascal WHEN passed to a streaming operator WHEN "
          "result is '1Gpa'") {
  constexpr auto value = 1_Gpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gpa");
}

TEST_CASE("GIVEN a 1 tera Pascal WHEN passed to a streaming operator WHEN "
          "result is '1Tpa'") {
  constexpr auto value = 1_Tpa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tpa");
}

TEST_CASE("GIVEN a 1 exa Pascal WHEN passed to a streaming operator WHEN "
          "result is '1Epa'") {
  constexpr auto value = 1_Epa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Epa");
}

TEST_CASE("GIVEN a 1 peta Pascal WHEN passed to a streaming operator WHEN "
          "result is '1Ppa'") {
  constexpr auto value = 1_Ppa;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Ppa");
}

TEST_CASE(
    "GIVEN a string of '1apa' WHEN streamed into atto_pascal_t THEN result "
    "is a value of 1 atto_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1apa";
  SI::atto_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_apa);
}

TEST_CASE(
    "GIVEN a string of '1fpa' WHEN streamed into femto_pascal_t THEN result "
    "is a value of 1 femto_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1fpa";
  SI::femto_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fpa);
}

TEST_CASE(
    "GIVEN a string of '1ppa' WHEN streamed into pico_pascal_t THEN result "
    "is a value of 1 pico_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1ppa";
  SI::pico_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ppa);
}

TEST_CASE(
    "GIVEN a string of '1npa' WHEN streamed into nano_pascal_t THEN result "
    "is a value of 1 nano_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1npa";
  SI::nano_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_npa);
}

TEST_CASE(
    "GIVEN a string of '1upa' WHEN streamed into micro_pascal_t THEN result "
    "is a value of 1 micro_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1upa";
  SI::micro_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_upa);
}

TEST_CASE(
    "GIVEN a string of '1mpa' WHEN streamed into milli_pascal_t THEN result "
    "is a value of 1 milli_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1mpa";
  SI::milli_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mpa);
}

TEST_CASE("GIVEN a string of '1pa' WHEN streamed into pascal_t THEN result "
          "is a value of 1 pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1pa";
  SI::pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pa);
}

TEST_CASE(
    "GIVEN a string of '1kpa' WHEN streamed into kilo_pascal_t THEN result "
    "is a value of 1 kilo_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1kpa";
  SI::kilo_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kpa);
}

TEST_CASE(
    "GIVEN a string of '1Mpa' WHEN streamed into mega_pascal_t THEN result "
    "is a value of 1 mega_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mpa";
  SI::mega_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mpa);
}

TEST_CASE(
    "GIVEN a string of '1Gpa' WHEN streamed into giga_pascal_t THEN result "
    "is a value of 1 giga_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gpa";
  SI::giga_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gpa);
}

TEST_CASE(
    "GIVEN a string of '1Tpa' WHEN streamed into tera_pascal_t THEN result "
    "is a value of 1 tera_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tpa";
  SI::tera_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tpa);
}

TEST_CASE(
    "GIVEN a string of '1Ppa' WHEN streamed into peta_pascal_t THEN result "
    "is a value of 1 peta_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Ppa";
  SI::peta_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Ppa);
}

TEST_CASE(
    "GIVEN a string of '1Epa' WHEN streamed into exa_pascal_t THEN result "
    "is a value of 1 exa_pascal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Epa";
  SI::exa_pascal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Epa);
}
