include_directories(${CMAKE_CURRENT_SOURCE_DIR})

find_package(Qt5Test REQUIRED)

enable_testing()

add_executable(UtilsTest
               timeformattertest.cpp
               )

target_link_libraries(UtilsTest
                      utils
                      Qt5::Test)

add_test(UtilsTest ${CMAKE_CURRENT_BINARY_DIR}/UtilsTest)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src/utils)

