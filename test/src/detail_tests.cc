#include <catch.hpp>

#include <SI/detail.h>
#include <SI/value_holder.h>

TEST_CASE("GIVEN values with ratio 1 THEN value holders returns "
          "ratio<1>")
{
    const SI::unit_t<'X', std::ratio<1>> v1{0};
    const SI::unit_t<'X', std::ratio<1>> v2{0};

    const auto rr =
        SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();
    static_assert(std::ratio_equal<decltype(rr), std::ratio<1>>::value,
                  "Result is ratio 1:1");
}

TEST_CASE(
    "GIVEN values with ratio<1,1> and <1, 1000> THEN value holders returns "
    "ratio<1, 1000>")
{
    constexpr SI::unit_t<'X', std::ratio<1>> v1{0};
    constexpr SI::unit_t<'X', std::milli> v2{0};

    constexpr auto rr =
        SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();
    static_assert(std::ratio_equal<decltype(rr), std::milli>::value,
                  "Result is a milli");
}

TEST_CASE(
    "GIVEN values with ratio<1,1> and <1000, 1> THEN value holders returns "
    "ratio<1000, 1>")
{
    constexpr SI::unit_t<'X', std::ratio<1>> v1{0};
    constexpr SI::unit_t<'X', std::kilo> v2{0};

    constexpr auto rr = SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();
    static_assert(std::ratio_equal<decltype(rr), std::kilo>::value,
                  "Result is a kilo");
}

TEST_CASE("GIVEN values with ratio<1000,1> and <1, 1000> THEN value "
          "holders returns "
          "ratio<1000000, 1>")
{
    constexpr SI::unit_t<'X', std::milli> v1{0};
    constexpr SI::unit_t<'X', std::kilo> v2{0};

    constexpr auto rr = SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();
    static_assert(std::ratio_equal<decltype(rr), std::mega>::value,
                  "Result is mega");
}

TEST_CASE("GIVEN values with ratio<1, 1000> and <1, 10> THEN value holder "
          "returns ratio<100,1>")
{
    constexpr SI::unit_t<'X', std::milli> v1{0};
    constexpr SI::unit_t<'X', std::deci> v2{0};

    constexpr auto rr = SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();
    static_assert(std::ratio_equal<decltype(rr), std::hecto>::value,
                  "Result is hecto");
}

TEST_CASE("GIVEN values with ratio<1000, 1> and <100, 1> THEN value holder "
          "returns ratio<100,1>")
{
    constexpr SI::unit_t<'X', std::kilo> v1{0};
    constexpr SI::unit_t<'X', std::hecto> v2{0};
    constexpr auto rr = SI::detail::ratio_to<decltype(v1)::ratio, decltype(v2)::ratio>();

    static_assert(std::ratio_equal<decltype(rr), std::deci>::value,
                  "Result is deci");
}
