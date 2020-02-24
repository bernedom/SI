#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
OS_NAME=$(uname)

setUp() {
    SI_BUILD_DIR=$(mktemp -d)
    INSTALL_PATH=$(mktemp -d)
    BUILD_DIR=$(mktemp -d)
}

tearDown() {
    if [ -d ${SI_BUILD_DIR} ]; then
        rm -rf ${SI_BUILD_DIR}
    fi
    
    if [ -d ${INSTALL_PATH} ]; then
        rm -rf ${INSTALL_PATH}
    fi
    
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testVersionNumberConsistency() {
    CHANGELOG_VERSION=$(sed -n -E '/## [0-9]+\.[0-9]+\.[0-9]+/p' ${ROOT_DIR}/CHANGELOG.md | head -1 | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    ORIG_DIR=$(pwd)
    if [ -x "$(command -v python3)" ]; then
        PYTHON_CMD=python3
    else
        PYTHON_CMD=python
    fi
    echo Using $(${PYTHON_CMD} --version)
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DBUILD_TESTING=off -DCMAKE_BUILD_TYPE=Debug
    cd ${SI_BUILD_DIR}
    CMAKE_VERSION=$(cmake --system-information | grep -E "VERSION:STATIC" | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    cd ${ROOT_DIR}
    CONAN_VERSION=$(${PYTHON_CMD} -c 'from conanfile import SiConan; print(SiConan.version)')
    cd ${ORIG_DIR}
    GIT_VERSION_EXACT=$(git describe --tags | grep -E -o '^[0-9]+\.[0-9]+\.[0-9]+$')
    
    assertEquals "version in changelog (${CHANGELOG_VERSION}) does not match cmake version (${CMAKE_VERSION})" $CHANGELOG_VERSION $CMAKE_VERSION
    assertEquals "version in cmake (${CMAKE_VERSION}) does not match conan version (${CONAN_VERSION})" $CMAKE_VERSION $CONAN_VERSION
    
    if [ "${GIT_VERSION_EXACT}" != "" ]; then
        assertEquals "version in files (${CMAKE_VERSION}) does not match git tag for release  (${GIT_VERSION_EXACT})" ${CMAKE_VERSION} ${GIT_VERSION_EXACT}
    else
        GIT_VERSION=$(git describe --tags | grep -E -o '^[0-9]+\.[0-9]+\.[0-9]+')
        assertNotEquals "version in files (${CMAKE_VERSION}) matches already existing release (${GIT_VERSION}):" ${CMAKE_VERSION} ${GIT_VERSION}
    fi
    
    for F in $(find ${ROOT_DIR}/include/SI -name "*.h"); do
        FILE_VERSION=$(grep -E 'version [0-9]+\.[0-9]+\.[0-9]+' ${F} | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
        assertEquals "version in header file ${F} does not match cmake version" ${CMAKE_VERSION} ${FILE_VERSION}
    done
    
}

testPureCmakeInstallation() {
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DBUILD_TESTING=off -DCMAKE_BUILD_TYPE=Release
    cmake --build ${SI_BUILD_DIR} --config Release --target install
    assertEquals "Installation build successful" 0 $?
    cmake ${ROOT_DIR}/test/installation-tests -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH}
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}

testCpackInstallation() {
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCPACK_PACKAGE_FILE_NAME=install-SI -DBUILD_TESTING=off -DCMAKE_BUILD_TYPE=Release
    cmake --build ${SI_BUILD_DIR} --config Release --target package
    assertEquals "Installation build successful" 0 $?
    
    if [ ${OS_NAME} == "Linux" || ${OS_NAME} == "Darwin" ]; then
        ${SI_BUILD_DIR}/install-SI.sh --prefix=${INSTALL_PATH} --skip-license --exclude-subdir
    else
        # echo "Using NSIS installer"
        # ${SI_BUILD_DIR}/install-SI.exe /V=5 /SD /D=${INSTALL_PATH}
        # echo "done"
        return
    fi
    
    
    assertEquals "Installation script successful" 0 $?
    
    cmake ${ROOT_DIR}/test/installation-tests -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH}
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}

testConanInstallation() {
    
    # preliminary cleanup
    conan remove -f *@SI/testing
    
    conan create ${ROOT_DIR} SI/testing
    assertEquals "Conan installation build successful" 0 $?
    conan install -if ${BUILD_DIR} ${ROOT_DIR}/test/conan-installation-test
    assertEquals "Conan installation successful" 0 $?
    
    cmake ${ROOT_DIR}/test/conan-installation-test -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
    # cleanup
    conan remove -f *@SI/testing
    
}

testConanCmakeIntegratedInstallation() {
    # preliminary cleanup
    conan remove -f *@SI/testing
    
    conan create ${ROOT_DIR} SI/testing
    assertEquals "Conan installation build successful" 0 $?
    
    cmake ${ROOT_DIR}/test/conan-cmake-installation-test -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
    # cleanup
    conan remove -f *@SI/testing
}

# Load shUnit2.
. shunit2
