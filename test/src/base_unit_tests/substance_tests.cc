#include <catch.hpp>

#include <SI/substance.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _mol result is a value"
          " of substance type AND ratio 1 to 1") {
  constexpr auto one = 1_mol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_mol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mmol result is a value"
          " of substance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kmol result is a value"
          " of substance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::kilo>>::value);
}
