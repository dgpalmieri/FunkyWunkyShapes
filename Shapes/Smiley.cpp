//
// Created by Joseph on 4/1/2019.
//

#include "Smiley.h"
#include <cmath>
#include <fstream>

Smiley::Smiley(const int & r): _radius(std::abs(r)){}

void Smiley::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScriptTest.ps");
}

void Smiley::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Smiley::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScriptTest.ps");
}

void Smiley::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName);
    fileStream << "gsave \n"
    << "matrix currentmatrix /originmat exch def \n"
    << "/umatrix {originmat matrix concatmatrix setmatrix} def \n"
    << "[28.3465 0 0 28.3465 10.5 100.0] umatrix \n"
    << "0 setgray \n"
    << "0.2 setlinewidth \n"
    << "% head \n"
    << "10 5 " << _radius << " 0 360 arc closepath \n"
    << "1 1 0 setrgbcolor fill \n"
    << "stroke \n"
    << "% mouth \n"
    << "4 5 2 210 330 arc closepath \n"
    << "gsave \n"
    << "% this is blue: \n"
    << "0 0 0 setrgbcolor fill \n"
    << "grestore \n"
    << "stroke \n"
    << "% eyes \n"
    << "3 6 0.8 0 360 arc closepath \n"
    << "gsave \n"
    << "% this is red: \n"
    << "0 0 0 setrgbcolor fill \n"
    << "grestore \n"
    << "stroke \n"
    << "5 6 0.8 0 360 arc closepath \n"
    << "gsave \n"
    << "% this is black: \n"
    << "0 0 0 setrgbcolor fill \n"
    << "grestore \n"
    << "stroke \n"
    << "grestore";
    fileStream.close();
}

double Smiley::getWidth(){
    return 2 * _radius;
}

double Smiley::getHeight(){
    return 2 * _radius;
}

std::pair<double,double> Smiley::getCenter(){
    
}
