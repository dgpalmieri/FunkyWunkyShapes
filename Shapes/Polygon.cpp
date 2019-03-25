//
// Created by Dylan Palmieri on 3/25/2019.
//

#include "Polygon.hpp"
#include <iostream>
#include <fstream>

#define _USE_MATH_DEFINES
#include <cmath>

Polygon::Polygon(int numOfSides, double sideLength)
    : _numOfSides(numOfSides), _sideLength(sideLength)
    {}

void Polygon::intoPS() {

}

double Polygon::getWidth() {
    double width = 0;

    if (_numOfSides % 2 == 1){
        width = (M_E * sin(M_PI * (_numOfSides - 1) / 2 * _numOfSides))/
                (sin(M_PI / _numOfSides));
    }
    else if (_numOfSides % 4 == 0){ //(e cos(π/n))/(sin(π/n))
        width = (M_E * cos(M_PI / _numOfSides)) /
                (sin(M_PI / _numOfSides));
    }
    else { // e/(sin(π/n))
        width = M_E /
                (sin(M_PI / _numOfSides));
    }

    return width;
}

double Polygon::getHeight() {
    int height = 0;

    if (_numOfSides % 2 == 1){

    }
    else if (_numOfSides % 4 == 0){

    }
    else {

    }

    return height;
}
