#include <catch.hpp>

#include <length.h>

// stream operator needed to expand in test output
template <class R = std::ratio<1>>
std::ostream &operator<<(std::ostream &os, const length_t<R> &l)
{
    os << l.length_;
    return os;
}
TEST_CASE("km returns ratio 1000 to 1 floating point")
{
    const auto one_k = 1.0_km;
    REQUIRE(decltype(one_k)::ratio::num == 1000);
    REQUIRE(decltype(one_k)::ratio::den == 1);
}