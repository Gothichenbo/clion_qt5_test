cmake_minimum_required(VERSION 3.20)
project(qt5_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(qt5_test main.cpp mainwindow.h mainwindow.cpp   test1.cpp test1.h test1.ui)

target_link_libraries(qt5_test
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )
