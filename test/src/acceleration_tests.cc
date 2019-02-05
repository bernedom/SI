#include <catch.hpp>

#include <SI/acceleration.h>
#include <SI/time.h>

using namespace SI::literals;

/// @todo add building from L / t^2

TEST_CASE("GIVEN one velocity value WHEN divided by time value THEN result is "
          "an acceleration value") {

  constexpr SI::velocity_t<std::ratio<1>, int64_t> one_ms{1};
  constexpr auto acceleration = one_ms / 1_s;

  static_assert(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<std::ratio<1>, int64_t>>::value);
}