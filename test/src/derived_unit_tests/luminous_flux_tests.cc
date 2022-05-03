#include <catch2/catch.hpp>

#include <SI/luminosity.h>
#include <SI/luminous_flux.h>
#include <SI/solid_angle.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _alm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_alm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_alm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _flm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_flm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_flm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _plm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^12") {
  constexpr auto one = 1_plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nlm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ulm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ulm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ulm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mlm THEN result is a "
          "luminous_flux type AND ratio 1 to 1000") {
  constexpr auto one = 1_mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _lm THEN result is a "
          "luminous_flux type AND ratio 1 to 1") {
  constexpr auto one = 1_lm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_lm;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::luminous_flux_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _klm THEN result is a "
          "luminous_flux type AND ratio 1000 to 1") {
  constexpr auto one = 1_klm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_klm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mlm THEN result is a "
          "luminous_flux type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Glm THEN result is a "
          "luminous_flux type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Glm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Glm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tlm THEN result is a "
          "luminous_flux type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Plm THEN result is a "
          "luminous_flux type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Elm THEN result is a "
          "luminous_flux type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Elm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Elm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminosity value WHEN multiplied with a solid_angle "
    "value THEN result is a luminous_flux value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminosity_t<TestType, std::ratio<1>> l{1};
  constexpr SI::solid_angle_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = a * l;
  constexpr auto result_commutative = l * a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminous_flux_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminous_flux value WHEN divided by solid_angle THEN then "
    "result is a luminosity value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::solid_angle_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = e / l;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminosity_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminous_flux value WHEN divided by luminosity THEN then "
    "result is a acceleration value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::luminosity_t<TestType, std::ratio<1>> f{1};

  constexpr auto result = e / f;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::solid_angle_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Lumen WHEN passed to a streaming operator THEN "
          "result is '1alm'") {
  constexpr auto value = 1_alm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 alm");
}

TEST_CASE("GIVEN a 1 femto Lumen WHEN passed to a streaming operator THEN "
          "result is '1flm'") {
  constexpr auto value = 1_flm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 flm");
}

TEST_CASE("GIVEN a 1 pico Lumen WHEN passed to a streaming operator THEN "
          "result is '1plm'") {
  constexpr auto value = 1_plm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 plm");
}

TEST_CASE("GIVEN a 1 nano Lumen WHEN passed to a streaming operator THEN "
          "result is '1plm'") {
  constexpr auto value = 1_nlm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nlm");
}

TEST_CASE("GIVEN a 1 micro Lumen WHEN passed to a streaming operator THEN "
          "result is '1ulm'") {
  constexpr auto value = 1_ulm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ulm");
}

TEST_CASE("GIVEN a 1 milli Lumen WHEN passed to a streaming operator THEN "
          "result is '1mlm'") {
  constexpr auto value = 1_mlm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mlm");
}

TEST_CASE("GIVEN a 1 Lumen WHEN passed to a streaming operator THEN result is "
          "'1lm'") {
  constexpr auto value = 1_lm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 lm");
}

TEST_CASE("GIVEN a 1 kilo Lumen WHEN passed to a streaming operator THEN "
          "result is '1klm'") {
  constexpr auto value = 1_klm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 klm");
}

TEST_CASE("GIVEN a 1 mega Lumen WHEN passed to a streaming operator THEN "
          "result is '1Mlm'") {
  constexpr auto value = 1_Mlm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mlm");
}

TEST_CASE("GIVEN a 1 giga Lumen WHEN passed to a streaming operator THEN "
          "result is '1Glm'") {
  constexpr auto value = 1_Glm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Glm");
}

TEST_CASE("GIVEN a 1 tera Lumen WHEN passed to a streaming operator THEN "
          "result is '1Tlm'") {
  constexpr auto value = 1_Tlm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tlm");
}

TEST_CASE("GIVEN a 1 exa Lumen WHEN passed to a streaming operator THEN "
          "result is '1Elm'") {
  constexpr auto value = 1_Elm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Elm");
}

TEST_CASE("GIVEN a 1 peta Lumen WHEN passed to a streaming operator THEN "
          "result is '1Plm'") {
  constexpr auto value = 1_Plm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Plm");
}

TEST_CASE(
    "GIVEN a string of '1alm' WHEN streamed into atto_lumen_t THEN result "
    "is a value of 1 atto_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1alm";
  SI::atto_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_alm);
}

TEST_CASE(
    "GIVEN a string of '1flm' WHEN streamed into femto_lumen_t THEN result "
    "is a value of 1 femto_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1flm";
  SI::femto_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_flm);
}

TEST_CASE(
    "GIVEN a string of '1plm' WHEN streamed into pico_lumen_t THEN result "
    "is a value of 1 pico_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1plm";
  SI::pico_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_plm);
}

TEST_CASE(
    "GIVEN a string of '1nlm' WHEN streamed into nano_lumen_t THEN result "
    "is a value of 1 nano_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1nlm";
  SI::nano_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nlm);
}

TEST_CASE(
    "GIVEN a string of '1ulm' WHEN streamed into micro_lumen_t THEN result "
    "is a value of 1 micro_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1ulm";
  SI::micro_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ulm);
}

TEST_CASE(
    "GIVEN a string of '1mlm' WHEN streamed into milli_lumen_t THEN result "
    "is a value of 1 milli_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1mlm";
  SI::milli_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mlm);
}

TEST_CASE("GIVEN a string of '1lm' WHEN streamed into lumen_t THEN result "
          "is a value of 1 lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1lm";
  SI::lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_lm);
}

TEST_CASE(
    "GIVEN a string of '1klm' WHEN streamed into kilo_lumen_t THEN result "
    "is a value of 1 kilo_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1klm";
  SI::kilo_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_klm);
}

TEST_CASE(
    "GIVEN a string of '1Mlm' WHEN streamed into mega_lumen_t THEN result "
    "is a value of 1 mega_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mlm";
  SI::mega_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mlm);
}

TEST_CASE(
    "GIVEN a string of '1Glm' WHEN streamed into giga_lumen_t THEN result "
    "is a value of 1 giga_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1Glm";
  SI::giga_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Glm);
}

TEST_CASE(
    "GIVEN a string of '1Tlm' WHEN streamed into tera_lumen_t THEN result "
    "is a value of 1 tera_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tlm";
  SI::tera_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tlm);
}

TEST_CASE(
    "GIVEN a string of '1Plm' WHEN streamed into peta_lumen_t THEN result "
    "is a value of 1 peta_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1Plm";
  SI::peta_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Plm);
}

TEST_CASE("GIVEN a string of '1Elm' WHEN streamed into exa_lumen_t THEN result "
          "is a value of 1 exa_lumen_t AND stream is good") {
  std::stringstream ss;
  ss << "1Elm";
  SI::exa_lumen_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Elm);
}
