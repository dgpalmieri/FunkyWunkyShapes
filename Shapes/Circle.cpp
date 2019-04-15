//
// Created by Andrew on 3/23/2019.
//

#include "Circle.h"
#include <cmath>
#include <fstream>

Circle::Circle(const int & r): _radius(std::abs(r)){}

void Circle::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios_base::app);
    fileStream << "% Circle\n"
               << "gsave\n"
               << _radius << " " << _radius << " translate\n"
               << "0 0 "<< _radius << " 0 360 arc\n"
               << "stroke\n"
               << "grestore\n";
    fileStream.close();
}

double Circle::getWidth(){
    return 2 * _radius;
}

double Circle::getHeight(){
    return 2 * _radius;
}

std::pair<double,double> Circle::getCenter(){
    return std::make_pair(0, 0);
}
