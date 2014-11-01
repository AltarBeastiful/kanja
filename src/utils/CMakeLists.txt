set(utils_SRCS
    timeformatter.cpp
)

add_library(utils STATIC ${utils_SRCS})

include_directories(${Qt5Core_INCLUDE_DIRS})

target_link_libraries(utils
                      Qt5::Core
)


