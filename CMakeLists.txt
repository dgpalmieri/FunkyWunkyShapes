cmake_minimum_required(VERSION 3.13)
project(FunkyWunkyShapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(FunkyWunkyShapes
    main.cpp Shapes/Shape.h Shapes/Circle.h Shapes/Circle.cpp Shapes/Rectangle.cpp Shapes/Rectangle.h)
