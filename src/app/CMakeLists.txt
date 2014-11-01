set(app_SRCS
    main.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(kanja ${app_SRCS})

target_link_libraries(kanja
                      domain
                      Qt5::Core
                      Qt5::Widgets
                      Qt5::Qml
                      )

INCLUDE_DIRECTORIES(ressources/images)
