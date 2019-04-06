#include <SI/length.h>
#include <iostream>

using namespace SI::literals;

void printLength(const SI::meter_t<long double> &m) {
  std::cout << m.raw_value() << std::endl;
}

int main(int, char **) {
  constexpr auto one_m = 1.0_m;
  printLength(one_m);
  return 0;
}