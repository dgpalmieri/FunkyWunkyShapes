// main.cpp
// Dylan Palmieri, Andrew Parker, Josh Byam
// starting point for Project 2, CS372

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file


#include<utility>
#include<fstream>
#include<string>
#include <iostream>
#include "Shapes/Shape.h"
#include "Shapes/Circle.h"
#include "Shapes/Polygon.hpp"
#include "Shapes/Square.h"
#include "Shapes/Rectangle.h"
#include "Shapes/Rotated.h"
//#include "Shapes/Triangle.h"
#include "Shapes/Spacer.h"
#include "Shapes/Scaled.h"
#include "catch.hpp"


TEST_CASE("Return correct height", "[getheight()]") {
    Circle C(10);
    Square S(5);
    class Polygon P(6, 5);
    REQUIRE(C.getHeight() == 20.0);
    REQUIRE(round( S.getHeight() * 1000.0 ) / 1000.0 == 5.0);
    REQUIRE(round( P.getHeight() * 1000.0 ) / 1000.0 == 8.66);
}


/*
int main() {
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps", std::ofstream::out | std::ofstream::trunc);//Clears the file contents
    myfile.close();

    Scaled R2(std::make_unique<Square>(20), 3, 3);
    R2.intoPS();
    Rotated R(std::make_unique<Polygon>(7, 100), 180);
    R.intoPS();
}*/
