//
// Created by Andrew on 3/23/2019.
//

#include "Circle.h"
#include <cmath>
#include <fstream>

Circle::Circle(double r): _r(std::abs(r)){}

std::string Circle::intoPS() {
    std::ofstream myfile;
    myfile.open("Postscripttest.ps")
    myfile << "gsave\n "
            << "0 0 "<<_r<< " 0 360 arc closepath\n"
            << "stroke\n";
    myfile.close();
    return "";
}

double Circle::getWidth(){
    return 2*_r;
}

double Circle::getHeight(){
    return 2*_r;
}

