project(Kanja)

cmake_minimum_required (VERSION 2.6)

cmake_policy(SET CMP0020 NEW)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
set(CMAKE_INCLUDE_CURRENT_DIR ON) # As moc files are generated in the binary dir, tell CMake to always look for includes
set(CMAKE_AUTOMOC ON) # Tell CMake to run moc when necessary:

find_package(Qt5 COMPONENTS Core Widgets Declarative Qml REQUIRED)

if(NOT Qt5_FOUND)
  message(FATAL_ERROR "Package Qt required, but not found!")
endif(NOT Qt5_FOUND)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
