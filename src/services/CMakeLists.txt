set(services_SRCS
    seriequeries.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/src/domain)

add_library(services STATIC ${services_SRCS})
target_link_libraries(services domain Qt5::Core)
