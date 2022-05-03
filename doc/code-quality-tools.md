# Note about coverage metrics

Since most of the tests are done using `constexpr` the coverage returns less than what is actually covered. By replacing all `constexpr` with `const` and running cmake with `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE`  the coverage result is usable.

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

## Running clang-tidy

See https://clang.llvm.org/extra/clang-tidy/

```
mkdir build && cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
run-clang-tidy -checks=bugprone-* -header-filter=.*
run-clang-tidy -checks=performance-* -header-filter=.*
run-clang-tidy -checks=modernize-* -header-filter=.*
run-clang-tidy -checks=clang-analyzer-* -header-filter=.*
run-clang-tidy -checks=readability-* -header-filter=.*
