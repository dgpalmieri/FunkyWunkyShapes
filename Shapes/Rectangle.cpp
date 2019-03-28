//
// Created by Joseph Byam on 3/26/2019.
//

#include "Rectangle.h"
#include <cmath>
#include <fstream>

Rectangle::Rectangle(const double & width, const double & height)
    :_width(std::abs(width)), _height(std::abs(height)) {}

//So this makes a rectangle and I know that the width and height are in the right places
//but I'm not sure where its supposed to start from. I just picked 0 because it seemed good.
//If it needs to be somewhere else just change all the zeros to the starting point.
void Rectangle::intoPS() {
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps");
    myfile << "gsave\n"
    << "0 0 moveto\n"
    << _width << " 0 lineto\n"
    << _width << " " << _height << " lineto\n"
    << "0 " << _height << " lineto\n"
    << "0 0 lineto\n"
    << "stroke\n"
    << "grestore";
    myfile.close();
}

double Rectangle::getWidth(){
    return _width;
}

double Rectangle::getHeight(){
    return _height;
}


