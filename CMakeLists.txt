cmake_minimum_required(VERSION 3.10)

project(Base64EncodeDecode)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

set(SOURCES
    base64.cxx
)

add_executable(base64 ${SOURCES})

target_link_libraries(base64 Qt5::Core Qt5::Gui Qt5::Widgets)
qt5_wrap_cpp(MOC_SOURCES base64app.h)

target_sources(base64 PRIVATE ${MOC_SOURCES})
