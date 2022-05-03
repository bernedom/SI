# Changelog

## 2.5.0

* Removed implicit conversion from primitives to `unit_t`. See [issue #106](https://github.com/bernedom/SI/issues/106) for details
* When converting units to string a space is inserted between the value and the unit, as described in the [SI brochure, section 5.4.2](https://www.bipm.org/en/publications/si-brochure)
  * > The numerical value always precedes the unit and a space is always used to separate the
unit from the number
* Fix various spelling errors (thanks to [melg8](https://github.com/melg8)). 
* Renamed `sterradiant_t` to `steradian_t`  which is correct
  

## 2.4.1

* Fix reported [issue](https://github.com/bernedom/SI/issues/101) that `operator/(scalar / unit)` would calculate the ratio into the value.
* Add function `as<unit_t>()` to unit for convenient conversion to a unit of the same type but different ratio

## 2.4.0

* Add surface flow and volumetric flow units

## 2.3.0

* Add string conversions for velocity (`m/s`) and acceleration types (`m/s^2`)

## 2.2.0

* Add `degree_t` to angle type including literals `_deg`

## 2.1.3

* Fix CI pipeline for windows
* Add missing conversion between float and double for operator/

## 2.1.2

* Update to catch 2.13.6 in the conan recipes
* Remove deployment to bintray.com as it is scheduled to sunset on May 1 2021

## 2.1.1

* Tests are built without the need for conan if catch2 is found. (using conan is still the preferred way)
* Cleaning up obsolete todos and typos

## 2.1.0

* Moved helper function such as `unit_cast` and `unit_with_common_ratio` to own file for easier maintenance
* Moved cross-unit-operations and `epsEqual` to a separate file for easier maintenance
* Rename `epsEqual()` to `eps_equals()` for consistency with naming scheme

## 2.0.4

* Add literals for ton types up to peta ton

## 2.0.3

* Add synonymous `*_ton_t` types for mass magnitudes
* Renamed default branch from `master` to `main`

## 2.0.2

* Documentation update and fixing typos in test names
* Full magnitudes for mass up to zetta_gram

## 2.0.1

* Refactored type dependent functions to use `std::enable_if_v` instead of `std::enable_if::value`
* Use value types for type traits (i.e. `std::is_arithmetic_v` instead of `std::is_arithmetic::value`
* Add `SI::detail::is_ratio_v` and `SI::detail::is_unit_t_v`

## 2.0.0

* Support for fractions as exponents (Types from version 1.x.x are no longer supported)
* Rename access to stored scalar values to `value()` (from previously `raw_value()`) (Brakes interfaces from 1.x.x)
* The conan-package is named `si` instead of `SI` to match the conan naming convention (Include-paths stay upper case)

## 1.7.6

* Refactoring conanfile.py to create cmake object only once for a tiny bit more performance when packing

## 1.7.5

* `conanfile.py` pulls the version out of `CMakeLists.txt` for packaging.
* Selecting the cmake option `SI_INSTALL_LIBRARY=OFF` removes the target `install` completely
* Add new-line to the end of all files to fit with the ConanCenter code convention.

## 1.7.4

* If SI is built from within conan the conanbuildinfo provided by conan will be used instead of getting it from github
* Cleanup of obsolete code

## 1.7.3

* Extended technical documentation
* Add speed of light to velocity

## 1.7.2

* Correct naming for angle types `radian_t` (was `radiant_t`)
* Separate test for version consistency from installation tests

## 1.7.1

* Changed exponent type to `int8_t` as `char` might be unsigned
* Documentation and tests are only built if built as top-level project

## 1.7.0

* Add literals and typedefs for km/h (`_km_p_h`) m/s (`m_p_s`)
* Add literals for astronomical units of length (AU), light-years (ly) and parsecs (pc)
* API documentation is built over the cmake-target `api_doc`

## 1.6.1

* Add operators `++` and `--` for units
* Add cmake option `SI_ENABLE_TESTING` (default `ON`) to selectively disable tests for SI if used with `add_subdirectory()` and `EXCLUDE_FROM_ALL`

## 1.6.0

* Implicit type conversion for units (i.e. between units with internal `double` and `float` representation)
* Turn installation of by setting the cmake option `SI_INSTALL_LIBRARY` to `OFF` (default is `ON`). (Thanks to [bladan](https://github.com/bladan) for bringing it up.)
* Acceleration is buildable from v^2 / L (velocity squared divided by length). (Thanks to [bladan](https://github.com/bladan) for the work)

## 1.5.1

* Added `SI::to_string()` function to avoid using streams
* Update to Catch2 v2.11.1 for testing

## 1.5.0

* Bugfix: Operators < and > where comparing the wrong way round (this is embarrassing)
* Added Operators <= and =>
* Installation tests for OSX and Windows
* Renamed SI/detail/string.h to unit_symbol.h because of resolution-problems in osx/xcode

## 1.4.1

* Added micro-benchmarks for operations on `unit_t`
* Pulling catch2 for testing with conan is only done if testing is enabled
* Removed defaults for template parameters for `==` and `!=`

## 1.4.0

* Rule of five: assignment and construction for units with different ratios
* Retrieving Catch2 with conan to avoid having it in the repo (This no effect on using SI)

## 1.3.1

* Put version number in file comments (and testing for it)
* Overall linting

## 1.3.0

* Streaming operators for all dimension symbols
* Bugfix: Fixed dimension symbol clash between absorbed dose and equivalent dose
* Bugfix: Fixed dimension symbol clash between length and inductance

## 1.2.1

* Added operators +=, *=, /=, -= (Thanks to [Kicer96](https://github.com/Kicer86) for the initial work)
* Added momentum (Thanks to [Kicer96](https://github.com/Kicer86))
* Added packaging information for conan.io and deployment to bintray

## 1.2.0

* Changed spelling of length unit from 'meter' to 'metre' as this is the official SI spelling according to the [International Bureau of Weights and Measures](https://www.bipm.org/en/measurement-units/)
* added `SI_` prefix to preprocessor flag to disable ratio conversion to `SI_DISABLE_IMPLICIT_RATIO_CONVERSION` to scope it closer
* Renamed template parameters to fit with c++ naming convention ([See this stackoverflow thread](https://stackoverflow.com/questions/228783/what-are-the-rules-about-using-an-underscore-in-a-c-identifier))

## 1.1.1

* Unified usage of template arguments in unit_t
* electric conductance can be built from 1/Ohm (including all ratios)
* electric resistance can be built from 1/S (including all ratios)

## 1.1.0

* Implicit / automatic conversions between units of different ratio can be disabled with the preprocessor flag `DISABLE_IMPLICIT_RATIO_CONVERSION`
* Fixed division of units with same exponent so it considers ratio
* Bugfix in division of units with different exponent and different ratios
* Multiplying units with different ratios results in multiplied ratios instead of gcd of ratios squared
* Added division of units by a scalar

## 1.0.1

* cmake requires version 3.12 to support add_executable without sources and verbose project description
* all headers are prefixed with a license tag
* Added support for cpack (see README for usage)

## 1.0.0

* Literal operators return explicit return types instead of auto
* Removed indirection for overflow check when parsing ints
* Fixed typo of luminosity unit from candela -> candela

## 0.0.5

* Updated catch2 to version 2.7.2
* Added angle (radian) and solid angle (steradian) typedefs
* luminous flux can be built from luminosity *   solid_angle

## 0.0.4

* Added CHANGELOG.md
* Fixed bug in number parser, magnitude of a number is correctly counted even if a digit separator is present

## 0.0.3

* template specialization to differentiate scalar/unit for floating point and integral values
* Ran linter, minor cosmetic changes

## 0.0.2

* all cmake files use the same versions
* SI can be used with `add_subdirectory` thanks to cmake alias
* compiler flags are set using generator expressions

## 0.0.1

Initial release, containing the base operators and template classes as well as typedefs the base units and named derived units of the  [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units)
