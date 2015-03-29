set(SQLITE_SRCS
    sqlitestorage.cpp
    sqliteseriequeries.cpp
)

find_package(Qt5Sql REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/src/domain)
include_directories(${CMAKE_SOURCE_DIR}/src/services)
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Sql_INCLUDE_DIRS})

add_library(kanjasqlite STATIC ${SQLITE_SRCS})
target_link_libraries(kanjasqlite
                      domain
                      services
                      Qt5::Core
                      Qt5::Sql
)
