#!/bin/bash
# file: test/installation-tests.sh

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
OS_NAME=$(uname)

echo "Running on operation system: ${OS_NAME}"

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

testPureCmakeInstallation() {
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DSI_BUILD_TESTING=OFF -DCMAKE_BUILD_TYPE=Release
    cmake --build ${SI_BUILD_DIR} --config Release --target install
    assertEquals "Installation build successful" 0 $?
    cmake ${ROOT_DIR}/test/installation-tests -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH}
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?

}

testPureCmakeInstallationWithInstallOptionTurnedOff() {
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DSI_BUILD_TESTING=OFF -DSI_INSTALL_LIBRARY=OFF -DCMAKE_BUILD_TYPE=Release
    cmake --build ${SI_BUILD_DIR} --config Release --target install
    assertNotEquals "Installation build successful" 0 $?

    DIRECTORY_CONTENTS=$(ls -A ${INSTALL_PATH})
    EMPTY=""
    assertEquals "Installation directory is empty" "${EMPTY}" "${DIRECTORY_CONTENTS}"

}

testCpackInstallation() {
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCPACK_PACKAGE_FILE_NAME=install-SI -DSI_BUILD_TESTING=OFF -DCMAKE_BUILD_TYPE=Release
    cmake --build ${SI_BUILD_DIR} --config Release --target package
    assertEquals "Installation build successful" 0 $?
    if [ "${OS_NAME}" = "Linux" ] || [ "${OS_NAME}" = "Darwin" ]; then
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


testUsageAsSubdirectory() {
    # install SI
    cmake ${ROOT_DIR}/test/installation-test-subdirectory -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?

}

# Load shUnit2.
. shunit2
