from conans import ConanFile, CMake


class SiConan(ConanFile):
    name = "SI"
    version = "1.0.0"
    license = "MIT"
    author = "Dominik Berner <dominik.berner+SI-conan@gmail.com"
    url = "https://github.com/bernedom/SI"
    description = "A header only c++ library that provides type safety and user defined literals for handling pyhsical values defined in the International System of Units."
    topics = ("physical units", "SI-unit-conversion", "cplusplus-library", "cplusplus-17")
    exports_sources = "include/*"
    no_copy_source = True

    def package(self):
        self.copy("*.h")

    def package_id(self):
        self.info.header_only()
