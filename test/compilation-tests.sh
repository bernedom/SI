#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

testSuccessfulCompilationWithNoArguments() {
  TMP_DIR=$(mktemp -d)
  ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)

  cd ${TMP_DIR}
  cmake ${ROOT_DIR} -G Ninja
  assertEquals "Configuration successful" $? 0
  cmake --build . --config Release 
  assertEquals "Building successful" $? 0
  
  if [ -d ${TMP_DIR} ]; then
    rm -rf ${TMP_DIR}
  fi
  cd ${ROOT_DIR}
}

# Load shUnit2.
. shunit2