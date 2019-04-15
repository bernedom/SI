# implementation details of SI

All units provided by SI are derived from the template `SI::detail::unit_t`. All units have a base typedef i.e. `force_t` and further derived typedefs for each ratio i.e. `micro_newton_t`

example:
```cpp
template <typename _Type, class _Ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _Type, _Ratio>;

template <typename _Type> using micro_newton_t = force_t<_Type, std::micro>;
```

The implementation of the functionality is done purely in the classes of the `detail` namespace. 

