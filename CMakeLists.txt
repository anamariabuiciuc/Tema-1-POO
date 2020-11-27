cmake_minimum_required(VERSION 3.17)
project(Tema_1_POO)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Tema_1_POO
        Client.cpp
        Client.h
        Comanda.cpp
        Comanda.h
        main.cpp
        Produs.cpp
        Produs.h)
