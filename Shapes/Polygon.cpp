//
// Created by Dylan Palmieri on 3/25/2019.
//

#include "Polygon.hpp"
#include <iostream>
#include <fstream>

#define _USE_MATH_DEFINES

#include <cmath>

Polygon::Polygon(const int & numOfSides, const int & sideLength)
    : _numOfSides(numOfSides), _sideLength(sideLength)
    {}

void Polygon::intoPS() {
    std::ofstream myFile;
    myFile.open("PostScriptTest.ps");
    myFile  << "newpath"
            << "\n"
            << getWidth() << " " << getHeight() << " moveto"
            << "\n"
            << "gsave"
            << "\n"
            << "/angle 360 " << _numOfSides << " div def"
            << "\n"
            << "1 1 " << _numOfSides << " {"
            << "\n"
            << _sideLength << " 0 rlineto"
            << "\n"
            << "angle rotate"
            << "\n"
            << "} for"
            << "\n"
            << "stroke"
            << "\n"
            << "grestore"
            << "\n";

    myFile.close();
}

double Polygon::getWidth() {
    int width = 0;

    if (_numOfSides % 2 == 1){
        width = _sideLength * sin((M_PI * (_numOfSides - 1)) / (2 * _numOfSides)) /
                (sin(M_PI / _numOfSides));
    }
    else if (_numOfSides % 4 == 0){
        width = _sideLength * cos(M_PI / _numOfSides) /
                (sin(M_PI / _numOfSides));
    }
    else {
        width = _sideLength /
                (sin(M_PI / _numOfSides));
    }

    return width;
}

double Polygon::getHeight() {
    int height = 0;

    if (_numOfSides % 2 == 1){
        height = _sideLength * (1 + cos(M_PI/_numOfSides)) /
                (2 * sin(M_PI/_numOfSides));
    }
    else {
        height = _sideLength * (cos(M_PI/_numOfSides)) /
                 (sin(M_PI/_numOfSides));
    }

    return height;
}
