#include <catch.hpp>

#include <ratio>
#include <value_holder.h>

TEST_CASE("GIVEN two values with ratio 1 THEN value holders returns "
          "ratio<1>") {
  const value_holder_t<std::ratio<1>> v1{0};
  const value_holder_t<std::ratio<1>> v2{0};

  const auto rr = v1.ratio_to(v2);
  static_assert(decltype(rr)::num == 1, "ratio numerator is 1");
  static_assert(decltype(rr)::den == 1, "ratio denumerator is 1");
}

TEST_CASE(
    "GIVEN two values with ratio<1,1> and <1, 1000> THEN value holders returns "
    "ratio<1, 1000>") {
  constexpr value_holder_t<std::ratio<1>> v1{0};
  constexpr value_holder_t<std::milli> v2{0};

  constexpr auto rr = v1.ratio_to(v2);
  static_assert(decltype(rr)::num == 1, "ratio numerator is 1");
  static_assert(decltype(rr)::den == 1000, "ratio denumerator is 1000");
}

TEST_CASE(
    "GIVEN two values with ratio<1,1> and <1000, 1> THEN value holders returns "
    "ratio<1000, 1>") {
  constexpr value_holder_t<std::ratio<1>> v1{0};
  constexpr value_holder_t<std::kilo> v2{0};

  constexpr auto rr = v1.ratio_to(v2);
  static_assert(decltype(rr)::num == 1000, "Ratio numerator is 1000");
  static_assert(decltype(rr)::den == 1, "Ratio denumerator is 1");
}

/*TEST_CASE(
    "GIVEN two values with ratio<1000,1> and <1, 1000> THEN value holders
returns " "ratio<1000000, 1>")
{
  constexpr value_holder_t<std::milli> v1{0};
  constexpr value_holder_t<std::kilo> v2{0};

  constexpr auto rr = v1.ratio_to(v2);
  REQUIRE(decltype(rr)::num == 1000000);
  REQUIRE(decltype(rr)::den == 1);
}*/
