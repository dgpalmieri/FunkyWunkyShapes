// main.cpp
// Dylan Palmieri, Andrew Parker, Josh Byam
// starting point for Project 2, CS372
#include<utility>

#include <iostream>
#include "Shapes/Shape.h"
#include "Shapes/Circle.h"
#include "Shapes/Polygon.hpp"
#include "Shapes/Square.h"
#include "Shapes/Rectangle.h"
#include "Shapes/Rotated.h"

#include "catch.hpp"



int main() {
    Square S(200);
    S.intoPS();
    //Rotated R(std::make_unique<Polygon>(4,200), 90);
    //R.intoPS();

}