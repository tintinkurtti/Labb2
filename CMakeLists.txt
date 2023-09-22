cmake_minimum_required(VERSION 3.24)
project(Labb2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labb2 main.cpp Shape.cpp Shape.h Circle.cpp Circle.h Rectangle.cpp Rectangle.h Cylinder.cpp Cylinder.h Rounded_rectangle.cpp Rounded_rectangle.h Parallelepiped.cpp Parallelepiped.h Square.cpp Square.h)
