# HEAD 

# 0.0.5

* Updated catch2 to version 2.7.2
* Added angle (radiant) and solid angle (sterradiant) typedefs
* luminous flux can be built from luminosity * solid_angle

# 0.0.4 

**Changes**

* Added CHANGELOG.md
* Fixed bug in number parser, magnitude of a numbrer is correctly counted even if a digit separator is present

# 0.0.3

**Changes**

* template specialization to differentiate scalar/unit for floating point and integral values
* Ran linter, minor cosmetical changes

# 0.0.2

**Changes**

* all cmake files use the same versions
* SI can be used with `add_subdirectory` thanks to cmake alias
* compiler flags are set using generator expressions

# 0.0.1

Initial relase, containig the base operators and template classes as well as typedefs the base units and named derived units of the  [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units)
