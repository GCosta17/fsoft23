cmake_minimum_required(VERSION 3.24)
project(SchoolApplication)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})
set(SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/pl2.h
        ${PROJECT_SOURCES_DIR}/pl2.cpp
        )


add_executable(SchoolApplication main.cpp headers/pl2.h sources/pl2.cpp headers/Point.h sources/Point.cpp headers/Shape.h headers/Circle.h sources/Shape.cpp sources/Circle.cpp)
