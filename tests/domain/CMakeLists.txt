include_directories(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src/domain)

find_package(Qt5Test REQUIRED)
include_directories(${Qt5Test_INCLUDE_DIRS})

MACRO(KANJA_DOMAIN_TESTS)
  FOREACH(_testname ${ARGN})
        add_executable(${_testname} ${_testname}.cpp)
        target_link_libraries(${_testname} domain Qt5::Test)
        add_test(${_testname} ${CMAKE_CURRENT_BINARY_DIR}/${_testname})
    ENDFOREACH(_testname)
ENDMACRO(KANJA_DOMAIN_TESTS)

kanja_domain_tests(
    serietest
    episodetest
    usertest
)
