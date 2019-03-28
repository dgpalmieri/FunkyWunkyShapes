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
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps");
    myfile << "gsave\n"
    << "1 1 1 setrgbcolor\n"
    << "0 0 moveto\n"
    << _width << " 0 lineto\n"
    << _width << " " << _height << " lineto\n"
    << "0 " << _height << " lineto\n"
    << "0 0 lineto\n"
    << "stroke\n"                   //I might have done it the dumb way, if so just comment out line 17 and 23
    << "grestore";
    myfile.close();
}

double Spacer::getWidth(){
    return _width;
}

double Spacer::getHeight(){
    return _height;
}


