cmake_minimum_required(VERSION 3.13)
project(FunkyWunkyShapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(FunkyWunkyShapes
               Tests.cpp catch.hpp
               Shapes/Shape.h Shapes/Shape.cpp
               Shapes/Circle.h Shapes/Circle.cpp
               Shapes/Rectangle.cpp Shapes/Rectangle.h
               Shapes/Polygon.cpp Shapes/Polygon.hpp
               Shapes/Spacer.cpp Shapes/Spacer.h
               Shapes/Square.h Shapes/Square.cpp
               Shapes/Rotated.cpp Shapes/Rotated.h
               Shapes/Scaled.cpp Shapes/Scaled.h
               Shapes/Smiley.h Shapes/Smiley.cpp
                Shapes/Triangle.cpp Shapes/Triangle.h)
