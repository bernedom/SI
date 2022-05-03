- [Implementation details of SI](#implementation-details-of-si)
  - [How specific units are defined](#how-specific-units-are-defined)
  - [Implicit ratio conversion & possible loss of precision](#implicit-ratio-conversion--possible-loss-of-precision)
  - [Conversion to strings](#conversion-to-strings)

# Implementation details of SI

The API documentation is available at https://si.dominikberner.ch/doc/

## How specific units are defined

All units provided by SI are derived from the template `SI::detail::unit_t`. All units have a base typedef i.e.  `force_t` and further derived typedefs for each ratio i.e. `micro_newton_t`

example:
```cpp
template <typename _type, class _ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', std::ratio<1>, _type, _ratio>;

template <typename _type> using micro_newton_t = force_t<_type, std::micro>;
```

The implementation of the functionality is done purely in the classes of the `detail` namespace.

## Implicit ratio conversion & possible loss of precision

SI handles operations of units of the same ratios as well as when the ratios are different. Operations of between units of the same ratio are overhead-free, else there is additional computation cost to adjust the values to the units. By passing the flag `SI_DISABLE_IMPLICIT_RATIO_CONVERSION` to the compiler implicit ratio conversion is not done and fails with a compiler error. See the [continuous benchmark results](https://si.dominikberner.ch/dev/bench/) for comparing the reference measurements and the implementation in SI.

If the internal type of a unit is an integral type (`int64_t`, `int` etc.) integer rounding applies when assigning to a unit of bigger ratio. When assigning to units with a smaller ratio overflows might happen if the value is not checked beforehand. 
```cpp

const auto almost_a_km = 999_m;
const auto zero_km = 0_km;
const SI::kilo_metre_t km_value = almost_a_km; // value is integer-rounded to 0 km

assert(almost_a_km == zero_km); // values are equal 
```

For all operations conversion of the ratio happens first before the actual operation is performed. For comparison operations both sides values are converted to a unit having the greatest common denominator before comparison. Under most circumstances, if the bigger ratio is a multiple of the smaller ratio this means that the value with the bigger ratio is converted to the smaller ratio first. 

For addition and subtraction and assignment operations the right hand side is converted to the unit of the left hand side first as the left hand side of the operation determines the type of the result.

```cpp

const auto one_m = 1_m; // ratio is 1/1
const auto one_km = 1_km; // ratio is 1000/1

const auto lots_of_m = one_m + one_km; // ratio of lots_of_m is 1/1 and the value is 1001

```

When multiplying or dividing the ratios of the values are multiplied/divided as well and the resulting ratio is accordingly. 

```cpp
const auto one_km = 1_km; // ratio is 1000/1
const auto square_km = one_km * one_km // ratio is 1000000 / 1 (or 1000 * 1000 / 1)
```

## Conversion to strings

All units with a special typedef and literals can be passed to (string-) streams using the `<<` operator. Constructing from strings using the `>>` operator. Alternatively using the `SI::to_string()` function can be used to get a string. 

For example:
```cpp

std::stringstream ss;
const auto value = 1_km; // constructs a value of the type SI::kilo_metre_t
ss << value; // ss now contains "1 km"
SI::kilo_metre_t<int64_t> from_string{0};
ss >> value_from_string; // the value of from_string is now 1

std::string str = SI::to_string(value);
```

If a value cannot be constructed from a string the failbit of the stream is set, but the value might still be present in the unit

```cpp
std::stringstream ss;
const auto value = 1_km; // constructs a value of the type SI::kilo_metre_t
ss << value; // ss now contains "1 km"
SI::milli_metre_t<int64_t> from_string{0};
ss >> value_from_string; // the value of from_string is now 1 but the failbit is set

assert(!ss.fail()); // will fail, because 1 km is not implicitely converted to mm


```
