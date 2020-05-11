cmake_minimum_required(VERSION 3.15)
project(Jardinerie)

set(CMAKE_CXX_STANDARD 20)

add_executable(Jardinerie main.cpp Plante.cpp Plante.h Botaniste.cpp Botaniste.h Fleur.cpp Fleur.h PlanteCarnivore.cpp PlanteCarnivore.h)