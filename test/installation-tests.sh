#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)


setUp(){
    SI_BUILD_DIR=$(mktemp -d)
    INSTALL_PATH=$(mktemp -d)
    BUILD_DIR=$(mktemp -d)
}

tearDown(){
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

testVersionNumberConsistency()
{
    CHANGELOG_VERSION=$(sed -n -E '/## [0-9]+\.[0-9]+\.[0-9]+/p' ${ROOT_DIR}/CHANGELOG.md | head -1 | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    ORIG_DIR=$(pwd)
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DBUILD_TESTING=off -G Ninja
    cd ${SI_BUILD_DIR}
    CMAKE_VERSION=$(cmake --system-information|grep -E "VERSION:STATIC"|grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    cd ${ORIG_DIR}
    
    assertEquals "version in changelog (${CHANGELOG_VERSION}) does not match cmake version (${CMAKE_VERSION})" $CHANGELOG_VERSION $CMAKE_VERSION
}


testPureCmakeInstallation(){
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DBUILD_TESTING=off -G Ninja
    cmake --build ${SI_BUILD_DIR} --config Release --target install
    assertEquals "Installation build successful" 0 $?
    cmake ${ROOT_DIR}/test/installation-tests -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}


testCpackInstallation(){
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCPACK_PACKAGE_FILE_NAME=install-SI -DBUILD_TESTING=off -G Ninja
    cmake --build ${SI_BUILD_DIR} --config Release --target package
    assertEquals "Installation build successful" 0 $?
    ${SI_BUILD_DIR}/install-SI.sh --prefix=${INSTALL_PATH} --skip-license --exclude-subdir
    assertEquals "Installation script successful" 0 $?
    
    cmake ${ROOT_DIR}/test/installation-tests -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}

testConanInstallation()
{
    conan create ${ROOT_DIR} SI/testing
    assertEquals "Conan installation build successful" 0 $?
    conan install -if ${BUILD_DIR} ${ROOT_DIR}/test/conan-installation-test
    assertEquals "Conan installation successful" 0 $?
    
    cmake ${ROOT_DIR}/test/conan-installation-test -B${BUILD_DIR} -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
    conan remove -f SI
    
}

testConanCmakeIntegratedInstallation()
{
    conan create ${ROOT_DIR} SI/testing
    assertEquals "Conan installation build successful" 0 $?
    
    cmake ${ROOT_DIR}/test/conan-cmake-installation-test -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
    conan remove -f SI
}


# Load shUnit2.
. shunit2