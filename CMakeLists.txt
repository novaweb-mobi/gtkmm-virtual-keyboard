cmake_minimum_required(VERSION 3.5)

project(VirtualKeyboard LANGUAGES CXX)
find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM gtkmm-3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "Linking GTK--")
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(VirtualKeyboard main.cpp keyboardbutton.cpp keyboard.cpp keyboardentry.cpp)
target_link_libraries(VirtualKeyboard ${GTKMM_LIBRARIES})
