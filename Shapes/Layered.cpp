//
//  Layered.cpp
//  FunkyWunkyShapes
//
//  Created by Joseph Byam on 3/30/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#include "Layered.hpp"
#include <cmath>
#include <fstream>
#include <string>
#include <map>

Layered::Layered(std::vector<std::unique_ptr<Shape>> & myShapes) : _shapes(std::move(myShapes)) {
    double width = 0;
    double height = 0;
    for (auto & _shape : _shapes)
    {
        if ( _shape->getWidth() > width ) width = static_cast<int>(_shape->getWidth());
        if ( _shape->getHeight() > height ) height = static_cast<int>(_shape->getHeight());
    }

    _width = width;
    _height = height;

}

void Layered::compositeType(std::fstream & fileStream, const std::string & fileName){
    for (auto & _shape : _shapes)
        _shape->intoPS(fileStream, fileName);
}


double Layered::getWidth(){
    return _width;
}

double Layered::getHeight(){
    return _height;
}


