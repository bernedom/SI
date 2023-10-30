#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
INSTALL_PATH=$(realpath ~/SI-install)

buildSingleTarget()
{
    if [ "${2}" == "DEFAULTBUILD" ]; then
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_BUILD_TYPE=Release -G Ninja > /dev/null
        assertEquals "Configuration successful" 0 $?

    else
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja > /dev/null
        assertEquals "Configuration successful" 0 $?
    fi

    cmake --build ${BUILD_DIR} --config Release --target $1 > /dev/null
    RESULT=$?

    if [ "${3}" == "PASS" ]; then
        assertEquals "Building successful" 0 $RESULT
    else
        assertNotEquals "Building fails" 0 $RESULT
    fi
}

oneTimeSetUp(){

    BUILD_DIR=$(mktemp -d)
    conan install . --output-folder=${BUILD_DIR} --build=missing --settings=build_type=Release 2>&1> /dev/null

    # install SI
    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DSI_BUILD_TESTING=OFF -DCMAKE_BUILD_TYPE=Release -G Ninja > /dev/null
    cmake --build ${BUILD_DIR} --config Release --target install > /dev/null

    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

setUp(){
    BUILD_DIR=$(mktemp -d)
    conan install . --output-folder=${BUILD_DIR} --build=missing --settings=build_type=Release 2>&1> /dev/null
}

tearDown(){
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testSISelfSuccessfulCompilationWhenDefaultInvocation() {

    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=${BUILD_DIR} -G Ninja > /dev/null
    assertEquals "Configuration successful" 0 $?
    cmake --build ${BUILD_DIR} --config Release > /dev/null
    assertEquals "Building successful" 0 $?
}

testSISelfFailedCompilationWhenImplicitConversionDisabled() {

    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja > /dev/null
    assertEquals "Configuration successful" 0 $?
    cmake --build ${BUILD_DIR} --config Release
    assertNotEquals "Building fails" 0 $?
}

testOperatorCopyCtorWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorCopyCtorWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}

testOperatorCopyCtorCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorCopyCtorFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorMoveCtorWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorMoveCtorWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}

testOperatorMoveCtorCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorMoveCtorFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}



testOperatorCopyAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorCopyAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorCopyAssignmentWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorCopyAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}

testOperatorMoveAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorMoveAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorMoveAssignmentWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}

testOperatorMoveAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}

testOperatorEqualsCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorEqualsFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}


testOperatorLessThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_less_than_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorLessThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_less_than_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorGreaterThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greater_than_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorGreaterThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greater_than_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorMultiplyCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorMultiplyFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorAddCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorAddFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}


testOperatorAddAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorAddAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorAddAssignmentSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}


testOperatorSubtractCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorSubtractFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorSubtractAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorSubtractAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorSubtractAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}



testOperatorDivideCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorDivideFromFloatingPointCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFromFloatingPointFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}


testOperatorDivideFromIntegralCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFromIntegralFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testCompilationFailsWhenNumberParserOverflows()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testCompilationSucceedsWhenNumberParserDoesNotOverflow()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test_pass_compilation.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


# Load shUnit2.
. shunit2
