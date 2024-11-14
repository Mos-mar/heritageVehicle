cmake_minimum_required(VERSION 3.5.0)
project(vehicle VERSION 0.1.0 LANGUAGES C CXX)

add_executable(vehicle CMoto.cpp CVehicle.cpp CVoiture.cpp main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")