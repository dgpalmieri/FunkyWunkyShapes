//
// Created by Joseph Byam on 3/30/2019.
//

#include "Vertical.h"
#include <cmath>
#include <fstream>
#include <string>
#include <map>


Vertical::Vertical(std::vector<std::unique_ptr<Shape>> & myShapes)
                   : _shapes(std::move(myShapes)){
    double width = 0;
    double height = 0;
    for (auto & _shape : _shapes)
    {
        height += _shape->getHeight();
        if ( _shape->getWidth() > width ) width = static_cast<int>(_shape->getWidth());
    }
    
    _width = width;
    _height = height;
    
}


void Vertical::compositeType(std::fstream & fileStream, const std::string & fileName) {
    for (auto & _shape : _shapes) {
        _shape->intoPS(fileStream, fileName);
        fileStream << "\n0 " << _shape->getHeight() << " translate\n";
    }
}


double Vertical::getWidth(){
    return _width;
}

double Vertical::getHeight(){
    return _height;
}


