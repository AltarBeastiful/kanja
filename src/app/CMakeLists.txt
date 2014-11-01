set(app_SRCS
    main.cpp
)

set(app_RESOURCES
    qml.qrc
)

QT5_ADD_RESOURCES(app_RESOURCES_RCC ${app_RESOURCES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(kanja ${app_SRCS}
                     ${app_RESOURCES_RCC})

target_link_libraries(kanja
                      domain
                      Qt5::Core
                      Qt5::Widgets
                      Qt5::Qml
                      )

INCLUDE_DIRECTORIES(ressources/images)
