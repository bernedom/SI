#include <catch2/catch.hpp>

#include <SI/electric_capacity.h>
#include <SI/electric_charge.h>
#include <SI/electric_potential.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uC THEN result is a "
          "electric_capacity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mC THEN result is a "
          "electric_capacity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mF;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _C THEN result is a "
          "electric_capacity type AND ratio 1 to 1") {
  constexpr auto one = 1_F;
  STATIC_REQUIRE(std::is_same<
                 decltype(one),
                 const SI::electric_capacity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_F;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_capacity_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kC THEN result is a "
          "electric_capacity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MC THEN result is a "
          "electric_capacity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GC THEN result is a "
          "electric_capacity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TC THEN result is a "
          "electric_capacity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PC THEN result is a "
          "electric_capacity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EC THEN result is a "
          "electric_capacity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EF;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_capacity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EF;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_capacity_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_charge value WHEN divided by an "
                   "electric_potential value THEN "
                   "result is a electric_capacity value",
                   "[electric_capacity][operator/]", int64_t, long double) {
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_charge / electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_capacity_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_capacity value WHEN multiplied by an "
                   "electric_potential value "
                   "THEN result is a electric_charge value",
                   "[electric_capacity][operator*]", int64_t, long double) {
  constexpr SI::electric_capacity_t<TestType, std::ratio<1>> electric_capacity{
      1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_capacity * electric_potential;
  constexpr auto result_commutative = electric_potential * electric_capacity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_charge_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_charge value WHEN divided by a "
                   "electric_capacity value THEN "
                   "result is an electric_potential value",
                   "[electric_charge][operator/]", int64_t, long double) {
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};
  constexpr SI::electric_capacity_t<TestType, std::ratio<1>> electric_capacity{
      1};

  constexpr auto result = electric_charge / electric_capacity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Farad WHEN passed to a streaming operator THEN "
          "result is '1aF'") {
  constexpr auto value = 1_aF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aF");
}

TEST_CASE("GIVEN a 1 femto Farad WHEN passed to a streaming operator THEN "
          "result is '1fF'") {
  constexpr auto value = 1_fF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fF");
}

TEST_CASE("GIVEN a 1 pico Farad WHEN passed to a streaming operator THEN "
          "result is '1pF'") {
  constexpr auto value = 1_pF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pF");
}

TEST_CASE("GIVEN a 1 nano Farad WHEN passed to a streaming operator THEN "
          "result is '1pF'") {
  constexpr auto value = 1_nF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nF");
}

TEST_CASE("GIVEN a 1 micro Farad WHEN passed to a streaming operator THEN "
          "result is '1uF'") {
  constexpr auto value = 1_uF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uF");
}

TEST_CASE("GIVEN a 1 milli Farad WHEN passed to a streaming operator THEN "
          "result is '1mF'") {
  constexpr auto value = 1_mF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mF");
}

TEST_CASE("GIVEN a 1 Farad WHEN passed to a streaming operator THEN result is "
          "'1F'") {
  constexpr auto value = 1_F;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 F");
}

TEST_CASE("GIVEN a 1 kilo Farad WHEN passed to a streaming operator THEN "
          "result is '1kF'") {
  constexpr auto value = 1_kF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kF");
}

TEST_CASE("GIVEN a 1 mega Farad WHEN passed to a streaming operator THEN "
          "result is '1MF'") {
  constexpr auto value = 1_MF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MF");
}

TEST_CASE("GIVEN a 1 giga Farad WHEN passed to a streaming operator THEN "
          "result is '1GF'") {
  constexpr auto value = 1_GF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GF");
}

TEST_CASE("GIVEN a 1 tera Farad WHEN passed to a streaming operator THEN "
          "result is '1TF'") {
  constexpr auto value = 1_TF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TF");
}

TEST_CASE("GIVEN a 1 exa Farad WHEN passed to a streaming operator THEN "
          "result is '1EF'") {
  constexpr auto value = 1_EF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EF");
}

TEST_CASE("GIVEN a 1 peta Farad WHEN passed to a streaming operator THEN "
          "result is '1PF'") {
  constexpr auto value = 1_PF;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PF");
}

TEST_CASE("GIVEN a string of '1aF' WHEN streamed into atto_farad_t THEN result "
          "is a value of 1 atto_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1aF";
  SI::atto_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aF);
}

TEST_CASE(
    "GIVEN a string of '1fF' WHEN streamed into femto_farad_t THEN result "
    "is a value of 1 femto_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1fF";
  SI::femto_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fF);
}

TEST_CASE("GIVEN a string of '1pF' WHEN streamed into pico_farad_t THEN result "
          "is a value of 1 pico_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1pF";
  SI::pico_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pF);
}

TEST_CASE("GIVEN a string of '1nF' WHEN streamed into nano_farad_t THEN result "
          "is a value of 1 nano_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1nF";
  SI::nano_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nF);
}

TEST_CASE(
    "GIVEN a string of '1uF' WHEN streamed into micro_farad_t THEN result "
    "is a value of 1 micro_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1uF";
  SI::micro_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uF);
}

TEST_CASE(
    "GIVEN a string of '1mF' WHEN streamed into milli_farad_t THEN result "
    "is a value of 1 milli_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1mF";
  SI::milli_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mF);
}

TEST_CASE("GIVEN a string of '1F' WHEN streamed into farad_t THEN result "
          "is a value of 1 farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1F";
  SI::farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_F);
}

TEST_CASE("GIVEN a string of '1kF' WHEN streamed into kilo_farad_t THEN result "
          "is a value of 1 kilo_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1kF";
  SI::kilo_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kF);
}

TEST_CASE("GIVEN a string of '1MF' WHEN streamed into mega_farad_t THEN result "
          "is a value of 1 mega_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1MF";
  SI::mega_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MF);
}

TEST_CASE("GIVEN a string of '1GF' WHEN streamed into giga_farad_t THEN result "
          "is a value of 1 giga_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1GF";
  SI::giga_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GF);
}

TEST_CASE("GIVEN a string of '1TF' WHEN streamed into tera_farad_t THEN result "
          "is a value of 1 tera_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1TF";
  SI::tera_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TF);
}

TEST_CASE("GIVEN a string of '1PF' WHEN streamed into peta_farad_t THEN result "
          "is a value of 1 peta_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1PF";
  SI::peta_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PF);
}

TEST_CASE("GIVEN a string of '1EF' WHEN streamed into exa_farad_t THEN result "
          "is a value of 1 exa_farad_t AND stream is good") {
  std::stringstream ss;
  ss << "1EF";
  SI::exa_farad_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EF);
}
