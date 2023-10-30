#!/bin/bash
# file: test/installation-tests.sh

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)

setUp() {
    SI_BUILD_DIR=$(mktemp -d)
    BUILD_DIR=$(mktemp -d)
}

tearDown() {
    if [ -d ${SI_BUILD_DIR} ]; then
        rm -rf ${SI_BUILD_DIR}
    fi

    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testVersionNumberConsistency() {

    CHANGELOG_VERSION=$(sed -n -E '/## [0-9]+\.[0-9]+\.[0-9]+/p' ${ROOT_DIR}/CHANGELOG.md | head -1 | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    ORIG_DIR=$(pwd)

    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DSI_BUILD_TESTING=OFF -DCMAKE_BUILD_TYPE=Debug >/dev/null
    cd ${SI_BUILD_DIR}
    CMAKE_VERSION=$(cmake --system-information | grep -E "VERSION:STATIC" | grep -E -o '[0-9]+\.[0-9]+\.[0-9]+')
    cd ${ORIG_DIR}
    GIT_VERSION_EXACT=$(git describe --tags | { grep -E -o '^[0-9]+\.[0-9]+\.[0-9]+$' || true; })

    assertEquals "version in changelog (${CHANGELOG_VERSION}) does not match cmake version (${CMAKE_VERSION})" $CHANGELOG_VERSION $CMAKE_VERSION

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

# Load shUnit2.
. shunit2
