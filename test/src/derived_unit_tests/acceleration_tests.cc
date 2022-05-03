#include <catch2/catch.hpp>

#include <SI/acceleration.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;

TEMPLATE_TEST_CASE(
    "GIVEN velocity value WHEN divided by time value THEN result is "
    "an acceleration value",
    "[acceleration][operators]", int64_t, long double) {

  constexpr SI::velocity_t<TestType, std::ratio<1>> one_ms{1};
  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr auto acceleration = one_ms / one_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a length value WHEN divided by time squared THEN result is an "
    "acceleration value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::length_t<TestType, std::ratio<1>> one_m{1};

  constexpr auto one_square_s = one_s * one_s;
  constexpr auto acceleration = one_m / one_square_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN an acceleration value WHEN multiplied by time squared THEN "
    "result is a length value",
    "[acceleration][operators]", int64_t, long double) {

  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::length_t<TestType, std::ratio<1>> one_m{1};

  constexpr auto one_square_s = one_s * one_s;
  constexpr auto acceleration = one_m / one_square_s;
  constexpr auto length = acceleration * one_square_s;
  constexpr auto length_commutative = one_square_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(length),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(length_commutative),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN an acceleration value WHEN multiplied by time THEN "
                   "result is a velocity value",
                   "[acceleration][operators]", int64_t, long double) {

  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> acceleration{1};
  constexpr auto velocity = acceleration * one_s;
  constexpr auto velocity_commutative = one_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(velocity),
                   const SI::velocity_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(velocity_commutative), decltype(velocity)>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a velocity value WHEN divided by acceleration THEN result is "
    "a time value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::velocity_t<TestType, std::ratio<1>> v{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = v / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a length value WHEN divided by acceleration THEN result is "
    "a time squared value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::length_t<TestType, std::ratio<1>> L{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = L / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_squared_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a squared velocity value WHEN divided by length THEN result is "
    "a acceleration value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::velocity_squared_t<TestType, std::ratio<1>> v2{1};
  constexpr SI::length_t<TestType, std::ratio<1>> L{1};

  constexpr auto result = v2 / L;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a length value WHEN multiplied by an acceleration "
                   "value THEN result is "
                   "a velocity squared value",
                   "[acceleration][operators]", int64_t, long double) {
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};
  constexpr SI::length_t<TestType, std::ratio<1>> L{1};

  constexpr auto result = L * a;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::velocity_squared_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a squared velocity value WHEN divided by an "
                   "acceleration value THEN result is "
                   "a length value",
                   "[acceleration][operators]", int64_t, long double) {
  constexpr SI::velocity_squared_t<TestType, std::ratio<1>> v2{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = v2 / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1am/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::atto> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 am/s^2");
}

TEST_CASE(
    "GIVEN a string of '1am/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 atto metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1am/s^2";
  SI::acceleration_t<int64_t, std::atto> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::atto>{1});
}

TEST_CASE("GIVEN a 1 femto metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1fm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::femto> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1fm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 femto metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1fm/s^2";
  SI::acceleration_t<int64_t, std::femto> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::femto>{1});
}

TEST_CASE("GIVEN a 1 pico metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1pm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::pico> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1pm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 pico metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1pm/s^2";
  SI::acceleration_t<int64_t, std::pico> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::pico>{1});
}

TEST_CASE("GIVEN a 1 nano metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1nm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::nano> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1nm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 nano metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1nm/s^2";
  SI::acceleration_t<int64_t, std::nano> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::nano>{1});
}

TEST_CASE("GIVEN a 1 micro metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1um/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::micro> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 um/s^2");
}

TEST_CASE(
    "GIVEN a string of '1um/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 micro metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1um/s^2";
  SI::acceleration_t<int64_t, std::micro> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::micro>{1});
}

TEST_CASE("GIVEN a 1 milli metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1mm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::milli> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1mm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 milli metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1mm/s^2";
  SI::acceleration_t<int64_t, std::milli> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::milli>{1});
}

TEST_CASE(
    "GIVEN a 1 metre per second^2 WHEN passed to a streaming operator THEN "
    "result is '1m/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::ratio<1>> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 m/s^2");
}

TEST_CASE(
    "GIVEN a string of '1m/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1m/s^2";
  SI::acceleration_t<int64_t, std::ratio<1>> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::ratio<1>>{1});
}

TEST_CASE("GIVEN a 1 kilo metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1km/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::kilo> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 km/s^2");
}

TEST_CASE(
    "GIVEN a string of '1km/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 kilo metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1km/s^2";
  SI::acceleration_t<int64_t, std::kilo> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::kilo>{1});
}

TEST_CASE("GIVEN a 1 mega metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1Mm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::mega> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1Mm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 mega metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1Mm/s^2";
  SI::acceleration_t<int64_t, std::mega> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::mega>{1});
}

TEST_CASE("GIVEN a 1 giga metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1Gm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::giga> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1Gm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 giga metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1Gm/s^2";
  SI::acceleration_t<int64_t, std::giga> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::giga>{1});
}

TEST_CASE("GIVEN a 1 tera metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1Tm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::tera> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1Tm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 tera metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1Tm/s^2";
  SI::acceleration_t<int64_t, std::tera> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::tera>{1});
}

TEST_CASE("GIVEN a 1 peta metre per second^2 WHEN passed to a streaming "
          "operator THEN "
          "result is '1Pm/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::peta> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pm/s^2");
}

TEST_CASE(
    "GIVEN a string of '1Pm/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 peta metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1Pm/s^2";
  SI::acceleration_t<int64_t, std::peta> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::peta>{1});
}

TEST_CASE(
    "GIVEN a 1 exa metre per second^2 WHEN passed to a streaming operator THEN "
    "result is '1Em/s^2'") {
  constexpr SI::acceleration_t<int64_t, std::exa> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Em/s^2");
}

TEST_CASE(
    "GIVEN a string of '1Em/s^2' WHEN streamed into metre_per_second^2_t THEN "
    "result "
    "is a value of 1 exa metre_per_second^2 AND stream is good") {
  std::stringstream ss;
  ss << "1Em/s^2";
  SI::acceleration_t<int64_t, std::exa> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == SI::acceleration_t<int64_t, std::exa>{1});
}
