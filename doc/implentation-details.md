- [implementation details of SI](#implementation-details-of-si)
  - [Conversion to strings using stream operators](#conversion-to-strings-using-stream-operators)

# implementation details of SI

All units provided by SI are derived from the template `SI::detail::unit_t`. All units have a base typedef i.e.  `force_t` and further derived typedefs for each ratio i.e. `micro_newton_t`
u
example:
```cpp
template <typename _type, class _ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _type, _ratio>;

template <typename _type> using micro_newton_t = force_t<_type, std::micro>;
```

The implementation of the functionality is done purely in the classes of the `detail` namespace. 

## Conversion to strings using stream operators 

All units with a special typedef and literals can be passed to (string-) streams using the `<<` operator. Constructing from strings using the `>>` operator. 

For example:
```cpp

std::stringstream ss;
const auto value = 1_km; // constructs a value of the type SI::kilo_metre_t
ss << value; // ss now contains "1km"
SI::kilo_metre_t<int64_t> from_string{0};
ss >> value_from_string; // the value of from_string is now 1
```

If a value cannot be constrcuted from a string the failbit of the stream is set. 