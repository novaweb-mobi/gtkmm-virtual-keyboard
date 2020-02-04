cmake_minimum_required(VERSION 3.5)

project(VirtualKeyboard LANGUAGES CXX)
find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM gtkmm-3.0)
pkg_check_modules(X11 REQUIRED x11 xtst)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "Linking GTK--")
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

message(STATUS "Linking X11")
link_directories(${X11_LIBRARY_DIRS})
include_directories(${X11_INCLUDE_DIRS})

message(STATUS "Copying .glade file")
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/VBoard.glade VBoard.glade)


message(STATUS ${X11_LIBRARIES})

add_executable(VirtualKeyboard main.cpp keyboardbutton.cpp keyboard.cpp keyboardentry.cpp)
target_link_libraries(VirtualKeyboard ${GTKMM_LIBRARIES} ${X11_LIBRARIES})
