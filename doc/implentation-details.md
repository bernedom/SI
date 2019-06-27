# implementation details of SI

All units provided by SI are derived from the template `SI::detail::unit_t`. All units have a base typedef i.e. `force_t` and further derived typedefs for each ratio i.e. `micro_newton_t`

example:
```cpp
template <typename _type, class _ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _type, _ratio>;

template <typename _type> using micro_newton_t = force_t<_type, std::micro>;
```

The implementation of the functionality is done purely in the classes of the `detail` namespace. 

# Packaging with conan

See https://docs.conan.io/en/latest/howtos/header_only.html#with-unit-tests on how to pack a header onlz library

conan create . user/channel -s compiler.cppstd=17