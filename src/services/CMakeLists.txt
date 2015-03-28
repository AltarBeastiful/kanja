set(services_SRCS
    seriequeries.cpp
)

add_library(services STATIC ${services_SRCS})
target_link_libraries(services Qt5::Core)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../domain)
