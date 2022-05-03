#include <catch2/catch.hpp>

#include <SI/angle.h>
#include <SI/detail/eps_equal.h>
#include <SI/stream.h>
#include <cmath>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _arad THEN result is a "
          "angle type AND ratio 1 to 10^18") {
  constexpr auto one = 1_arad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_arad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _frad THEN result is a "
          "angle type AND ratio 1 to 10^15") {
  constexpr auto one = 1_frad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_frad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _prad THEN result is a "
          "angle type AND ratio 1 to 10^12") {
  constexpr auto one = 1_prad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_prad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nrad THEN result is a "
          "angle type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nrad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nrad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _urad THEN result is a "
          "angle type AND ratio 1 to 10^6") {
  constexpr auto one = 1_urad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_urad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mrad THEN result is a "
          "angle type AND ratio 1 to 1000") {
  constexpr auto one = 1_mrad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mrad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _rad THEN result is a "
          "angle type AND ratio 1 to 1") {
  constexpr auto one = 1_rad;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::angle_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_rad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto radian WHEN passed to a streaming operator THEN "
          "result is '1arad'") {
  constexpr auto value = 1_arad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 arad");
}

TEST_CASE("GIVEN a 1 femto radian WHEN passed to a streaming operator THEN "
          "result is '1frad'") {
  constexpr auto value = 1_frad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 frad");
}

TEST_CASE("GIVEN a 1 pico radian WHEN passed to a streaming operator THEN "
          "result is '1prad'") {
  constexpr auto value = 1_prad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 prad");
}

TEST_CASE("GIVEN a 1 nano radian WHEN passed to a streaming operator THEN "
          "result is '1prad'") {
  constexpr auto value = 1_nrad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nrad");
}

TEST_CASE("GIVEN a 1 micro radian WHEN passed to a streaming operator THEN "
          "result is '1urad'") {
  constexpr auto value = 1_urad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 urad");
}

TEST_CASE("GIVEN a 1 milli radian WHEN passed to a streaming operator THEN "
          "result is '1mrad'") {
  constexpr auto value = 1_mrad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mrad");
}

TEST_CASE("GIVEN a 1 radian WHEN passed to a streaming operator THEN result is "
          "'1rad'") {
  constexpr auto value = 1_rad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 rad");
}

TEST_CASE(
    "GIVEN a string of '1arad' WHEN streamed into atto_radian_t THEN result "
    "is a value of 1 atto_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1arad";
  SI::atto_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_arad);
}

TEST_CASE(
    "GIVEN a string of '1frad' WHEN streamed into femto_radian_t THEN result "
    "is a value of 1 femto_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1frad";
  SI::femto_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_frad);
}

TEST_CASE(
    "GIVEN a string of '1prad' WHEN streamed into pico_radian_t THEN result "
    "is a value of 1 pico_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1prad";
  SI::pico_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_prad);
}

TEST_CASE(
    "GIVEN a string of '1nrad' WHEN streamed into nano_radian_t THEN result "
    "is a value of 1 nano_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1nrad";
  SI::nano_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nrad);
}

TEST_CASE(
    "GIVEN a string of '1urad' WHEN streamed into micro_radian_t THEN result "
    "is a value of 1 micro_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1urad";
  SI::micro_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_urad);
}

TEST_CASE(
    "GIVEN a string of '1mrad' WHEN streamed into milli_radian_t THEN result "
    "is a value of 1 milli_radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1mrad";
  SI::milli_radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mrad);
}

TEST_CASE("GIVEN a string of '1rad' WHEN streamed into radian_t THEN result "
          "is a value of 1 radian_t AND stream is good") {
  std::stringstream ss;
  ss << "1rad";
  SI::radian_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_rad);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _udeg THEN result is a "
          "angle type AND ratio 1 to 10^6") {
  constexpr auto one = 1_udeg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::angle_t<int64_t,
                            std::ratio<100000000, 5729577951308232>>>::value);

  constexpr auto one_f = 1.0_udeg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::angle_t<long double,
                            std::ratio<100000000, 5729577951308232>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mdeg THEN result is a "
          "angle type AND ratio 1 to 1000") {
  constexpr auto one = 1_mdeg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::angle_t<
              int64_t, std::ratio<100000000000, 5729577951308232>>>::value);

  constexpr auto one_f = 1.0_mdeg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::angle_t<
              long double, std::ratio<100000000000, 5729577951308232>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _deg THEN result is a "
          "angle type AND ratio 1 to 1") {
  constexpr auto one = 1_deg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::angle_t<
              int64_t, std::ratio<100000000000000, 5729577951308232>>>::value);

  constexpr auto one_f = 1.0_deg;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::angle_t<long double, std::ratio<100000000000000,
                                                    5729577951308232>>>::value);
}

TEST_CASE("GIVEN a 1 micro degree WHEN passed to a streaming operator THEN "
          "result is '1udeg'") {
  constexpr auto value = 1_udeg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 udeg");
}

TEST_CASE("GIVEN a 1 milli degree WHEN passed to a streaming operator THEN "
          "result is '1mdeg'") {
  constexpr auto value = 1_mdeg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mdeg");
}

TEST_CASE("GIVEN a 1 degree WHEN passed to a streaming operator THEN result is "
          "'1deg'") {
  constexpr auto value = 1_deg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 deg");
}

TEST_CASE(
    "GIVEN a string of '1udeg' WHEN streamed into micro_degree_t THEN result "
    "is a value of 1 micro_degree_t AND stream is good") {
  std::stringstream ss;
  ss << "1udeg";
  SI::micro_degree_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_udeg);
}

TEST_CASE(
    "GIVEN a string of '1mdeg' WHEN streamed into milli_degree_t THEN result "
    "is a value of 1 milli_degree_t AND stream is good") {
  std::stringstream ss;
  ss << "1mdeg";
  SI::milli_degree_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mdeg);
}

TEST_CASE("GIVEN a string of '1deg' WHEN streamed into degree_t THEN result "
          "is a value of 1 degree_t AND stream is good") {
  std::stringstream ss;
  ss << "1deg";
  SI::degree_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_deg);
}

TEST_CASE("GIVEN a value of 1.0 rad WHEN converted to degrees THEN result is "
          "57.29577951308232") {

  constexpr auto value = 1.0_rad;
  constexpr SI::degree_t<long double> deg = value;

  REQUIRE(SI::detail::eps_equals(deg.value(), 57.29577951308232L));
}

TEST_CASE("GIVEN a value of 1.0 mrad WHEN converted to mdegrees THEN result is "
          "57.29577951308232") {

  constexpr auto value = 1.0_mrad;
  constexpr SI::milli_degree_t<long double> deg = value;

  REQUIRE(SI::detail::eps_equals(deg.value(), 57.29577951308232L));
}

TEST_CASE("GIVEN a value of 1.0 urad WHEN converted to udegrees THEN result is "
          "57.29577951308232") {

  constexpr auto value = 1.0_urad;
  constexpr SI::micro_degree_t<long double> deg = value;

  REQUIRE(SI::detail::eps_equals(deg.value(), 57.29577951308232L));
}

TEST_CASE(
    "GIVEN a value of 180.0 def WHEN converted to radian THEN result is PI") {
  constexpr auto value = 180.0_deg;
  constexpr SI::radian_t<long double> rad = value;

  REQUIRE(SI::detail::eps_equals(rad.value(), 3.14159265358979328643L));
}