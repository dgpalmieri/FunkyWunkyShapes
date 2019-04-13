// main.cpp
// Dylan Palmieri, Andrew Parker, Josh Byam
// starting point for Project 2, CS372

//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file


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
#include "Shapes/Triangle.h"
#include "Shapes/Spacer.h"
#include "Shapes/Scaled.h"
#include "Shapes/Smiley.h"
#include "catch.hpp"

/*
TEST_CASE("Return correct height", "[getHeight()]") {
    Circle C(10);
    Square S(5);
    class Polygon P(6, 5);
    REQUIRE(C.getHeight() == 20.0);
    REQUIRE(round( S.getHeight() * 1000.0 ) / 1000.0 == 5.0);
    REQUIRE(round( P.getHeight() * 1000.0 ) / 1000.0 == 8.66);
}

TEST_CASE("Return correct width", "[getWidth()]") {
    Circle C(10);
    Square S(5);
    class Polygon P(6, 5);
    class Polygon P2(7,10);
    REQUIRE(C.getWidth() == 20.0);
    REQUIRE(round( S.getWidth() * 1000.0 ) / 1000.0 == 5.0);
    REQUIRE(round( P.getWidth() * 1000.0 ) / 1000.0 == 10);
    REQUIRE(round( P2.getWidth() * 1000.0 ) / 1000.0 == 22.47);
}

TEST_CASE("Return correct center point", "[getCenter()]") {
    Square S(5);
    Smiley x(35);
    class Polygon P(6, 5);
    class Polygon P2(7,10);
    REQUIRE(round( S.getCenter().first * 1000.0 ) / 1000.0 == 7.5);
    REQUIRE(round( S.getCenter().second * 1000.0 ) / 1000.0 == 7.5);
    REQUIRE(round( P.getCenter().first * 1000.0 ) / 1000.0 == 12.5);
    REQUIRE(round( P.getCenter().second * 1000.0 ) / 1000.0 == 12.99);
}*/



int main() {

    std::ofstream myfile;
    myfile.open("PostScript.ps", std::ofstream::out | std::ofstream::trunc);//Clears the file contents
    myfile.close();

    Scaled R2(std::make_unique<Square>(20), 3, 3);
    R2.intoPS();
    Polygon X(8, 50);
    X.intoPS();
    Rotated R(std::make_unique<Polygon>(7, 100), 180);
    R.intoPS();

    Triangle T(10);
    T.intoPS();


}
