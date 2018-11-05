#include <iostream>

struct length_t {
  constexpr length_t(unsigned long long int l) : length_{l} {}
  unsigned long long int length_;

  bool operator==(const length_t &rhs) const { return rhs.length_ == length_; }
  constexpr length_t operator*(const unsigned long long int f) const {
    return {length_ * f};
  }
};

length_t operator"" _m(const unsigned long long int m) { return m * 100; }

length_t operator"" _km(const unsigned long long int km) { return km * 100000; }

length_t operator"" _cm(const unsigned long long int cm) { return cm; }