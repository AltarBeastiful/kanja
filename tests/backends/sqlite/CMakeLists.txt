find_package(Qt5Test REQUIRED)
find_package(Qt5Sql REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src/domain)
include_directories(${CMAKE_SOURCE_DIR}/src/services)
include_directories(${CMAKE_SOURCE_DIR}/src/backends/sqlite)
include_directories(${Qt5Test_INCLUDE_DIRS} ${Qt5Sql_INCLUDE_DIRS})

MACRO(KANJA_SQLITE_BACKEND_TESTS)
    FOREACH(_testname ${ARGN})
        add_executable(${_testname} ${_testname}.cpp)
        target_link_libraries(${_testname} domain services kanjasqlite Qt5::Test Qt5::Sql )
        add_test(${_testname} ${CMAKE_CURRENT_BINARY_DIR}/${_testname})
    ENDFOREACH(_testname)
ENDMACRO(KANJA_SQLITE_BACKEND_TESTS)

kanja_sqlite_backend_tests(
    sqliteseriequeriestest
)
