set(domain_SRCS
    episode.cpp
    serie.cpp
)

add_library(domain STATIC ${domain_SRCS})

include_directories(${Qt5Core_INCLUDE_DIRS})

target_link_libraries(domain
                      Qt5::Core
)


