include_directories(${CMAKE_CURRENT_SOURCE_DIR})

find_package(Qt5Test REQUIRED)

enable_testing()

add_executable(SerieTest
               serietest.cpp
               )

target_link_libraries(SerieTest
                      domain
                      Qt5::Test)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src/domain)

