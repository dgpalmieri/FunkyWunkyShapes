//
// Created by Joseph Byam on 3/26/2019.
//

#include "Spacer.h"
#include <cmath>
#include <fstream>

Spacer::Spacer(const double & width, const double & height)
:_width(std::abs(width)), _height(std::abs(height)) {}

//Same uncertainty that I have about rectangle the only difference is that the lines are white

void Spacer::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScriptTest.ps");
}

void Spacer::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Spacer::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScriptTest.ps");
}

void Spacer::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName);
    fileStream << "gsave\n"
               << "0 0 moveto\n"
               << _width << " 0 lineto\n"
               << _width << " " << _height << " lineto\n"
               << "0 " << _height << " lineto\n"
               << "0 0 lineto\n"
               << "grestore";
    fileStream.close();
}


double Spacer::getWidth(){
    return _width;
}

double Spacer::getHeight(){
    return _height;
}


