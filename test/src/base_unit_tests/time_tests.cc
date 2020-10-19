#include <catch2/catch.hpp>

#include <SI/stream.h>
#include <SI/time.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _as THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_as;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_as;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fs THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fs;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fs;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ps THEN result is a "
          "force type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ps;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ps;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ns THEN result is a "
          "force type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ns;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ns;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _us THEN resulting "
          "value is of time type AND ratio micro") {
  constexpr auto one = 1_us;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_us;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ms THEN resulting "
          "value is of time type AND ratio milli") {
  constexpr auto one = 1_ms;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_ms;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _s THEN resulting value "
          "is of time type AND ratio 1 to 1") {
  constexpr auto one = 1_s;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _min THEN resulting "
          "value is of time type AND ratio 60 to 1") {
  constexpr auto one = 1_min;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_t<int64_t, std::ratio<60, 1>>>::value);

  constexpr auto one_f = 1.0_min;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<60, 1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _h THEN resulting value "
          "is of time type AND ratio 3600 to 1") {
  constexpr auto one = 1_h;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_t<int64_t, std::ratio<3600, 1>>>::value);

  constexpr auto one_f = 1.0_h;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<3600, 1>>>::value);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _negative duration test") {
  constexpr auto minus_one = -1_s;
  STATIC_REQUIRE(minus_one.value() == -1);
}

TEST_CASE("GIVEN a 1 atto seconds WHEN passed to a streaming operator THEN "
          "result is '1as'") {
  constexpr auto value = 1_as;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1as");
}

TEST_CASE("GIVEN a 1 femto seconds WHEN passed to a streaming operator THEN "
          "result is '1fs'") {
  constexpr auto value = 1_fs;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1fs");
}

TEST_CASE("GIVEN a 1 pico seconds WHEN passed to a streaming operator THEN "
          "result is '1ps'") {
  constexpr auto value = 1_ps;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1ps");
}

TEST_CASE("GIVEN a 1 nano seconds WHEN passed to a streaming operator THEN "
          "result is '1ps'") {
  constexpr auto value = 1_ns;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1ns");
}

TEST_CASE("GIVEN a 1 micro seconds WHEN passed to a streaming operator THEN "
          "result is '1us'") {
  constexpr auto value = 1_us;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1us");
}

TEST_CASE("GIVEN a 1 milli seconds WHEN passed to a streaming operator THEN "
          "result is '1ms'") {
  constexpr auto value = 1_ms;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1ms");
}

TEST_CASE(
    "GIVEN a 1 seconds WHEN passed to a streaming operator THEN result is "
    "'1s'") {
  constexpr auto value = 1_s;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1s");
}

TEST_CASE("GIVEN a 1 min WHEN passed to a streaming operator THEN result is "
          "'1min'") {
  constexpr auto value = 1_min;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1min");
}

TEST_CASE("GIVEN a 1 hour WHEN passed to a streaming operator THEN result is "
          "'1h'") {
  constexpr auto value = 1_h;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1h");
}

TEST_CASE(
    "GIVEN a string of '1as' WHEN streamed into atto_seconds_t THEN result "
    "is a value of 1 atto_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1as";
  SI::atto_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_as);
}

TEST_CASE(
    "GIVEN a string of '1fs' WHEN streamed into femto_seconds_t THEN result "
    "is a value of 1 femto_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1fs";
  SI::femto_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fs);
}

TEST_CASE(
    "GIVEN a string of '1ps' WHEN streamed into pico_seconds_t THEN result "
    "is a value of 1 pico_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1ps";
  SI::pico_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ps);
}

TEST_CASE(
    "GIVEN a string of '1ns' WHEN streamed into nano_seconds_t THEN result "
    "is a value of 1 nano_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1ns";
  SI::nano_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ns);
}

TEST_CASE(
    "GIVEN a string of '1us' WHEN streamed into micro_seconds_t THEN result "
    "is a value of 1 micro_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1us";
  SI::micro_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_us);
}

TEST_CASE(
    "GIVEN a string of '1ms' WHEN streamed into milli_seconds_t THEN result "
    "is a value of 1 milli_seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1ms";
  SI::milli_seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ms);
}

TEST_CASE("GIVEN a string of '1s' WHEN streamed into seconds_t THEN result "
          "is a value of 1 seconds_t AND stream is good") {
  std::stringstream ss;
  ss << "1s";
  SI::seconds_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_s);
}

TEST_CASE("GIVEN a string of '1min' WHEN streamed into minutes_t THEN result "
          "is a value of 1 minutes_t AND stream is good") {
  std::stringstream ss;
  ss << "1min";
  SI::minutes_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_min);
}

TEST_CASE("GIVEN a string of '1h' WHEN streamed into hours_t THEN result "
          "is a value of 1 hours_t AND stream is good") {
  std::stringstream ss;
  ss << "1h";
  SI::hours_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_h);
}
