#include <catch.hpp>

#include <SI/time.h>
#include <ratio>

using namespace SI::literals;

TEST_CASE("s returns ratio 1 to 1") {
  constexpr auto one = 1_s;
  static_assert(decltype(one)::ratio::num == 1, "One s is 1 / 1");
  static_assert(decltype(one)::ratio::den == 1, "One s is 1 / 1");

  constexpr auto one_f = 1.0_s;

  static_assert(decltype(one_f)::ratio::num == 1, "One s is 1 / 1");
  static_assert(decltype(one_f)::ratio::den == 1, "One s is 1 / 1");
}

TEST_CASE("us returns ratio micro") {
  constexpr auto one = 1_us;
  static_assert(std::ratio_equal<decltype(one)::ratio, std::micro>::value,
                "One us is 1 / 1000000");

  constexpr auto one_f = 1.0_us;
  static_assert(std::ratio_equal<decltype(one_f)::ratio, std::micro>::value,
                "One us is 1 / 1000000");
}

TEST_CASE("ms returns ratio milli") {
  constexpr auto one = 1_ms;
  static_assert(std::ratio_equal<decltype(one)::ratio, std::milli>::value,
                "One us is 1 / 1000");

  constexpr auto one_f = 1.0_ms;
  static_assert(std::ratio_equal<decltype(one_f)::ratio, std::milli>::value,
                "One us is 1 / 1000");
}

TEST_CASE("min returns ratio 60 to 1") {
  constexpr auto one = 1_min;
  static_assert(decltype(one)::ratio::num == 60, "min is 60 / 1");
  static_assert(decltype(one)::ratio::den == 1, "One min is 60 / 1");

  constexpr auto one_f = 1.0_min;
  static_assert(decltype(one_f)::ratio::num == 60, "min is 60 / 1");
  static_assert(decltype(one_f)::ratio::den == 1, "One min is 60 / 1");
}

TEST_CASE("h returns ratio 3600 to 1") {
  constexpr auto one = 1_h;
  static_assert(
      std::ratio_equal<decltype(one)::ratio, std::ratio<3600, 1>>::value,
      "One us is 3600 / 1");

  constexpr auto one_f = 1.0_h;
  static_assert(
      std::ratio_equal<decltype(one_f)::ratio, std::ratio<3600, 1>>::value,
      "One us is 3600 / 1");
}

TEST_CASE("negative duration test") {
  constexpr auto minus_one = -1_s;
  static_assert(minus_one.raw_value() == -1, "Negation works");
}

/* Test below intentionally fails to compile
TEST_CASE("Assert on overflow for s") { REQUIRE_THROWS(0xffffffffffffffff_s); }
*/