// main.cpp
// Dylan Palmieri, Andrew Parker, Josh Byam
// starting point for Project 2, CS372
#include<utility>
#include<fstream>

#include <iostream>
#include "Shapes/Shape.h"
#include "Shapes/Circle.h"
#include "Shapes/Polygon.hpp"
#include "Shapes/Square.h"
#include "Shapes/Rectangle.h"
#include "Shapes/Rotated.h"

#include "catch.hpp"



int main() {
    std::ofstream ofs;
    ofs.open("PostScriptTest.ps", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    Polygon S(5,200);
    S.intoPS();
    Rotated R(std::make_unique<Polygon>(5,200), 90);  //423.607 461.653
    R.intoPS();

}