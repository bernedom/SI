#include <catch2/catch.hpp>

#include <SI/angle.h>
#include <SI/angular_frequency.h>
#include <SI/frequency.h>
#include <SI/velocity.h>

using namespace SI::literals;

TEST_CASE("compilation test car kinematic example using tricycle model") {
  // longitudinal wheel to wheel distance
  const auto wheelbase = 1.0_m; // SI::metre_t<double>
  // X position of the middle of the rear axle
  auto x = 0.0_m;
  // Y position of the middle of the rear axle
  auto y = 0.0_m;
  // Heading of the vehicle
  auto heading = 0.0_rad;
  // Wheel angle
  auto angle = 10.0_deg;
  // Vehicle longitudinal speed
  auto speed = 10.0_km / 1.0_h;
  // Time step
  auto dt = 0.1_s;
  //
  auto u = 1.0_rad;

  // works if the brackets are set
  heading += dt * ((speed / wheelbase) * u * std::tan(angle.value()));
  // this does not work but should
  // heading += dt * (speed / wheelbase) * u * std::tan(angle.value());

  x = x + dt * speed * std::cos(heading.value()); // += not accepted
  y = y + dt * speed * std::sin(heading.value()); // std::sin(h) not accepted

  // std::cout << "=== Step " << i << ":" << std::endl;
  // std::cout << "Position:" << x.value() << ", " << y.value() << std::endl;
  // std::cout << "Speed:" << speed.value() << std::endl;
  // std::cout << "h:" << heading.value() << std::endl; // << h not accepted
}