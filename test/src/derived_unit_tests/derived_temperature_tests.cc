#include <catch2/catch.hpp>
#include <SI/temperature.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value of 0K WHEN unit_casted to celsius THEN the resulting value is -273.15C")
{
    constexpr auto zero_K = 0.0_K;
    constexpr SI::celsius_t<long double> expected{-273.15};
    constexpr SI::celsius_t<long double> converted_c = SI::detail::unit_cast<decltype(expected)>(zero_K);
    

    STATIC_REQUIRE(converted_c == expected, "Converted value is -273.15");
}