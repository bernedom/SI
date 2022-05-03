#include <catch2/catch.hpp>

#include <SI/electric_potential.h>
#include <SI/magnetic_flux.h>
#include <SI/stream.h>
#include <SI/time.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mWb THEN result is a "
          "magnetic_flux type AND ratio 1 to 1000") {
  constexpr auto one = 1_mWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Wb THEN result is a "
          "magnetic_flux type AND ratio 1 to 1") {
  constexpr auto one = 1_Wb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Wb;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::magnetic_flux_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kWb THEN result is a "
          "magnetic_flux type AND ratio 1000 to 1") {
  constexpr auto one = 1_kWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MWb THEN result is a "
          "magnetic_flux type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GWb THEN result is a "
          "magnetic_flux type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TWb THEN result is a "
          "magnetic_flux type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PWb THEN result is a "
          "magnetic_flux type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_flux_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PWb;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_flux_t<long double, std::peta>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a electric_potential value WHEN multiplied with a time "
    "value THEN result is a magnetic_flux value",
    "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>> f{1};
  constexpr SI::time_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = f * l;
  constexpr auto result_commutative = l * f;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_flux_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a magnetic_flux value WHEN divided by time THEN then "
                   "result is a electric_potential value",
                   "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::time_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = e / l;
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by electric_potential THEN then "
    "result is a acceleration value",
    "[magnetic_flux][operators]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>> f{1};

  constexpr auto result = e / f;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Weber WHEN passed to a streaming operator WHEN "
          "result is '1aWb'") {
  constexpr auto value = 1_aWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aWb");
}

TEST_CASE("GIVEN a 1 femto Weber WHEN passed to a streaming operator WHEN "
          "result is '1fWb'") {
  constexpr auto value = 1_fWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fWb");
}

TEST_CASE("GIVEN a 1 pico Weber WHEN passed to a streaming operator WHEN "
          "result is '1pWb'") {
  constexpr auto value = 1_pWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pWb");
}

TEST_CASE("GIVEN a 1 nano Weber WHEN passed to a streaming operator WHEN "
          "result is '1pWb'") {
  constexpr auto value = 1_nWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nWb");
}

TEST_CASE("GIVEN a 1 micro Weber WHEN passed to a streaming operator WHEN "
          "result is '1uWb'") {
  constexpr auto value = 1_uWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uWb");
}

TEST_CASE("GIVEN a 1 milli Weber WHEN passed to a streaming operator WHEN "
          "result is '1mWb'") {
  constexpr auto value = 1_mWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mWb");
}

TEST_CASE("GIVEN a 1 Weber WHEN passed to a streaming operator WHEN result is "
          "'1Wb'") {
  constexpr auto value = 1_Wb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Wb");
}

TEST_CASE("GIVEN a 1 kilo Weber WHEN passed to a streaming operator WHEN "
          "result is '1kWb'") {
  constexpr auto value = 1_kWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kWb");
}

TEST_CASE("GIVEN a 1 mega Weber WHEN passed to a streaming operator WHEN "
          "result is '1MWb'") {
  constexpr auto value = 1_MWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MWb");
}

TEST_CASE("GIVEN a 1 giga Weber WHEN passed to a streaming operator WHEN "
          "result is '1GWb'") {
  constexpr auto value = 1_GWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GWb");
}

TEST_CASE("GIVEN a 1 tera Weber WHEN passed to a streaming operator WHEN "
          "result is '1TWb'") {
  constexpr auto value = 1_TWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TWb");
}

TEST_CASE("GIVEN a 1 exa Weber WHEN passed to a streaming operator WHEN "
          "result is '1EWb'") {
  constexpr auto value = 1_EWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EWb");
}

TEST_CASE("GIVEN a 1 peta Weber WHEN passed to a streaming operator WHEN "
          "result is '1PWb'") {
  constexpr auto value = 1_PWb;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PWb");
}

TEST_CASE(
    "GIVEN a string of '1aWb' WHEN streamed into atto_weber_t THEN result "
    "is a value of 1 atto_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1aWb";
  SI::atto_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aWb);
}

TEST_CASE(
    "GIVEN a string of '1fWb' WHEN streamed into femto_weber_t THEN result "
    "is a value of 1 femto_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1fWb";
  SI::femto_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fWb);
}

TEST_CASE(
    "GIVEN a string of '1pWb' WHEN streamed into pico_weber_t THEN result "
    "is a value of 1 pico_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1pWb";
  SI::pico_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pWb);
}

TEST_CASE(
    "GIVEN a string of '1nWb' WHEN streamed into nano_weber_t THEN result "
    "is a value of 1 nano_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1nWb";
  SI::nano_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nWb);
}

TEST_CASE(
    "GIVEN a string of '1uWb' WHEN streamed into micro_weber_t THEN result "
    "is a value of 1 micro_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1uWb";
  SI::micro_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uWb);
}

TEST_CASE(
    "GIVEN a string of '1mWb' WHEN streamed into milli_weber_t THEN result "
    "is a value of 1 milli_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1mWb";
  SI::milli_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mWb);
}

TEST_CASE("GIVEN a string of '1Wb' WHEN streamed into weber_t THEN result "
          "is a value of 1 weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1Wb";
  SI::weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Wb);
}

TEST_CASE(
    "GIVEN a string of '1kWb' WHEN streamed into kilo_weber_t THEN result "
    "is a value of 1 kilo_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1kWb";
  SI::kilo_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kWb);
}

TEST_CASE(
    "GIVEN a string of '1MWb' WHEN streamed into mega_weber_t THEN result "
    "is a value of 1 mega_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1MWb";
  SI::mega_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MWb);
}

TEST_CASE(
    "GIVEN a string of '1GWb' WHEN streamed into giga_weber_t THEN result "
    "is a value of 1 giga_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1GWb";
  SI::giga_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GWb);
}

TEST_CASE(
    "GIVEN a string of '1TWb' WHEN streamed into tera_weber_t THEN result "
    "is a value of 1 tera_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1TWb";
  SI::tera_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TWb);
}

TEST_CASE(
    "GIVEN a string of '1PWb' WHEN streamed into peta_weber_t THEN result "
    "is a value of 1 peta_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1PWb";
  SI::peta_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PWb);
}

TEST_CASE("GIVEN a string of '1EWb' WHEN streamed into exa_weber_t THEN result "
          "is a value of 1 exa_weber_t AND stream is good") {
  std::stringstream ss;
  ss << "1EWb";
  SI::exa_weber_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EWb);
}
