cmake_minimum_required(VERSION 3.16)
project(Progetto_Algoritmi)

set(CMAKE_CXX_STANDARD 11)

add_executable(Progetto_Algoritmi main.cpp Table.cpp Table.h)

set(BOOST_ROOT "C:/Users/Andrea/Desktop")
FIND_PACKAGE(Boost REQUIRED)
IF(Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
    ADD_DEFINITIONS( "-DHAS_BOOST" )
ENDIF()