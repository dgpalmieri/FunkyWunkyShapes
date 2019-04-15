//
// Created by Joseph Byam on 3/26/2019.
//

#include "Rectangle.h"
#include <cmath>
#include <fstream>

Rectangle::Rectangle(const double & width, const double & height)
    :_width(std::abs(width)), _height(std::abs(height)) {}

void Rectangle::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios_base::app);
    fileStream << "% Rectangle\n"
           << "gsave\n"
           << "0 0 moveto\n"
           << _width << " 0 lineto\n"
           << _width << " " << _height << " lineto\n"
           << "0 " << _height << " lineto\n"
           << "0 0 lineto\n"
           << "stroke\n"
           << "grestore\n";
    fileStream.close();
}


double Rectangle::getWidth(){
    return _width;
}

double Rectangle::getHeight(){
    return _height;
}

std::pair<double,double> Rectangle::getCenter(){
    return std::make_pair(getWidth()/2,getHeight()/2);
}
