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
    Polygon S(5,200);
    S.intoPS();
    //Rotated R(std::make_unique<Polygon>(5,200), 90); // 461.653 485.41
    //R.intoPS();

}