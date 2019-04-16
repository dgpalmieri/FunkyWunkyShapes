//
// Created by Joseph Byam on 3/30/2019.
//

#include "Horizontal.h"
#include <cmath>
#include <fstream>
#include <string>
#include <memory>


Horizontal::Horizontal(std::vector<std::unique_ptr<Shape>> & myShapes) : _shapes(std::move(myShapes)){
    double width = 0;
    double height = 0;
    for (auto & _shape : _shapes)
    {
        width += _shape->getWidth();
        if ( _shape->getHeight() > height ) height = static_cast<int>(_shape->getHeight());
    }

    _width = width;
    _height = height;

}


void Horizontal::compositeType(std::fstream & fileStream, const std::string & fileName) {
    for (auto & _shape : _shapes) {
        _shape->intoPS(fileStream, fileName);
        fileStream << "\n" << _shape->getHeight() << " 0 translate\n";
    }
}


double Horizontal::getWidth(){
    return _width;
}

double Horizontal::getHeight(){
    return _height;
}

