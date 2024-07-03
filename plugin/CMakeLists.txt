set(systemdpplugin_SRCS
    systemdplugin.cpp
    systemdprocess.cpp
)

add_library(systemdplugin SHARED ${systemdpplugin_SRCS})

target_link_libraries(systemdplugin Qt5::Quick KF5::Plasma)

install(TARGETS systemdplugin DESTINATION ${QML_INSTALL_DIR}/Process)

install(FILES qmldir DESTINATION ${QML_INSTALL_DIR}/Process)
