cmake_minimum_required(VERSION 3.28)
project(gtk_headerbar C)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk4-win32)

include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})
link_libraries(${GTK_LIBRARIES})

# headerbar.c does not have to be compiled
add_executable(gtk_headerbar
        main.c
        headerbar.c
        headerbar.h
)
