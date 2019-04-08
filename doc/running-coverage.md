# Note about coverage metrics

Since most of the tests are done using `constexpr` the coverage returns less than what is actually covered. By replacing all `constexpr` with `const` and running cmake with `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE`  the coverage result is useable.

## How to run lcov

run in `build` folder

```
cmake -D CMAKE_CXX_FLAGS="--coverage -fprofile-arcs -ftest-coverage -fno-inline -fno-inline-small-functions -fno-default-inline -g -O0" ..
make -j$(nproc)
./test/SI_Tests
lcov --directory . --capture --output-file coverage.info
lcov --remove coverage.info '/usr/*' --output-file coverage_cleaned.info
genhtml -o out.html coverage_cleaned.info
```