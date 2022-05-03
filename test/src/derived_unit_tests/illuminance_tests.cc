#include <catch2/catch.hpp>

#include <SI/illuminance.h>
#include <SI/luminous_flux.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _alx THEN result is a "
          "illuminance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_alx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_alx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _flx THEN result is a "
          "illuminance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_flx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_flx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _plx THEN result is a "
          "illuminance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nlx THEN result is a "
          "illuminance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ulx THEN result is a "
          "illuminance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ulx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ulx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mlx THEN result is a "
          "illuminance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _lx THEN result is a "
          "illuminance type AND ratio 1 to 1") {
  constexpr auto one = 1_lx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_lx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _klx THEN result is a "
          "illuminance type AND ratio 1000 to 1") {
  constexpr auto one = 1_klx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_klx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mlx THEN result is a "
          "illuminance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Glx THEN result is a "
          "illuminance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Glx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Glx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tlx THEN result is a "
          "illuminance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tlx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Plx THEN result is a "
          "illuminance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Plx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Elx THEN result is a "
          "illuminance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Elx;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::illuminance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Elx;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::illuminance_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a luminous_flux value WHEN divided by an "
                   "area value THEN "
                   "result is a illuminance value",
                   "[illuminance][operator/]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> luminous_flux{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = luminous_flux / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::illuminance_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a illuminance value WHEN multiplied by an "
                   "area value "
                   "THEN result is a luminous_flux value",
                   "[illuminance][operator*]", int64_t, long double) {
  constexpr SI::illuminance_t<TestType, std::ratio<1>> illuminance{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = illuminance * area;
  constexpr auto result_commutative = area * illuminance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminous_flux_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a luminous_flux value WHEN divided by a "
                   "illuminance value THEN "
                   "result is an area value",
                   "[luminous_flux][operator/]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> luminous_flux{1};
  constexpr SI::illuminance_t<TestType, std::ratio<1>> illuminance{1};

  constexpr auto result = luminous_flux / illuminance;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Lux WHEN passed to a streaming operator THEN "
          "result is '1alx'") {
  constexpr auto value = 1_alx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 alx");
}

TEST_CASE("GIVEN a 1 femto Lux WHEN passed to a streaming operator THEN "
          "result is '1flx'") {
  constexpr auto value = 1_flx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 flx");
}

TEST_CASE("GIVEN a 1 pico Lux WHEN passed to a streaming operator THEN "
          "result is '1plx'") {
  constexpr auto value = 1_plx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 plx");
}

TEST_CASE("GIVEN a 1 nano Lux WHEN passed to a streaming operator THEN "
          "result is '1plx'") {
  constexpr auto value = 1_nlx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nlx");
}

TEST_CASE("GIVEN a 1 micro Lux WHEN passed to a streaming operator THEN "
          "result is '1ulx'") {
  constexpr auto value = 1_ulx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ulx");
}

TEST_CASE("GIVEN a 1 milli Lux WHEN passed to a streaming operator THEN "
          "result is '1mlx'") {
  constexpr auto value = 1_mlx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mlx");
}

TEST_CASE("GIVEN a 1 Lux WHEN passed to a streaming operator THEN result is "
          "'1lx'") {
  constexpr auto value = 1_lx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 lx");
}

TEST_CASE("GIVEN a 1 kilo Lux WHEN passed to a streaming operator THEN "
          "result is '1klx'") {
  constexpr auto value = 1_klx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 klx");
}

TEST_CASE("GIVEN a 1 mega Lux WHEN passed to a streaming operator THEN "
          "result is '1Mlx'") {
  constexpr auto value = 1_Mlx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mlx");
}

TEST_CASE("GIVEN a 1 giga Lux WHEN passed to a streaming operator THEN "
          "result is '1Glx'") {
  constexpr auto value = 1_Glx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Glx");
}

TEST_CASE("GIVEN a 1 tera Lux WHEN passed to a streaming operator THEN "
          "result is '1Tlx'") {
  constexpr auto value = 1_Tlx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tlx");
}

TEST_CASE("GIVEN a 1 exa Lux WHEN passed to a streaming operator THEN "
          "result is '1Elx'") {
  constexpr auto value = 1_Elx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Elx");
}

TEST_CASE("GIVEN a 1 peta Lux WHEN passed to a streaming operator THEN "
          "result is '1Plx'") {
  constexpr auto value = 1_Plx;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Plx");
}

TEST_CASE("GIVEN a string of '1alx' WHEN streamed into atto_lux_t THEN result "
          "is a value of 1 atto_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1alx";
  SI::atto_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_alx);
}

TEST_CASE("GIVEN a string of '1flx' WHEN streamed into femto_lux_t THEN result "
          "is a value of 1 femto_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1flx";
  SI::femto_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_flx);
}

TEST_CASE("GIVEN a string of '1plx' WHEN streamed into pico_lux_t THEN result "
          "is a value of 1 pico_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1plx";
  SI::pico_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_plx);
}

TEST_CASE("GIVEN a string of '1nlx' WHEN streamed into nano_lux_t THEN result "
          "is a value of 1 nano_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1nlx";
  SI::nano_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nlx);
}

TEST_CASE("GIVEN a string of '1ulx' WHEN streamed into micro_lux_t THEN result "
          "is a value of 1 micro_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1ulx";
  SI::micro_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ulx);
}

TEST_CASE("GIVEN a string of '1mlx' WHEN streamed into milli_lux_t THEN result "
          "is a value of 1 milli_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1mlx";
  SI::milli_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mlx);
}

TEST_CASE("GIVEN a string of '1lx' WHEN streamed into lux_t THEN result "
          "is a value of 1 lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1lx";
  SI::lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_lx);
}

TEST_CASE("GIVEN a string of '1klx' WHEN streamed into kilo_lux_t THEN result "
          "is a value of 1 kilo_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1klx";
  SI::kilo_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_klx);
}

TEST_CASE("GIVEN a string of '1Mlx' WHEN streamed into mega_lux_t THEN result "
          "is a value of 1 mega_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mlx";
  SI::mega_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mlx);
}

TEST_CASE("GIVEN a string of '1Glx' WHEN streamed into giga_lux_t THEN result "
          "is a value of 1 giga_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1Glx";
  SI::giga_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Glx);
}

TEST_CASE("GIVEN a string of '1Tlx' WHEN streamed into tera_lux_t THEN result "
          "is a value of 1 tera_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tlx";
  SI::tera_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tlx);
}

TEST_CASE("GIVEN a string of '1Plx' WHEN streamed into peta_lux_t THEN result "
          "is a value of 1 peta_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1Plx";
  SI::peta_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Plx);
}

TEST_CASE("GIVEN a string of '1Elx' WHEN streamed into exa_lux_t THEN result "
          "is a value of 1 exa_lux_t AND stream is good") {
  std::stringstream ss;
  ss << "1Elx";
  SI::exa_lux_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Elx);
}
