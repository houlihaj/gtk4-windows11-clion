cmake_minimum_required(VERSION 3.28)
project(gtk_builder C)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk4-win32)

include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})
link_libraries(${GTK_LIBRARIES})

set(GUI_HEADERS
        demo.gresource.h
)

# builder.c does not have to be compiled
set(GUI_SOURCES
        main.c
        builder.c
        demo.gresource.c
)

set(GUI_FORMS
        demo.ui
)

add_executable(${PROJECT_NAME} ${GUI_HEADERS} ${GUI_SOURCES} ${GUI_FORMS})
