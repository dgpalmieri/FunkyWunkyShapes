//
// Created by Joseph Byam on 3/30/2019.
//

#include "Horizontal.h"
#include <cmath>
#include <fstream>
#include <string>
#include <memory>

// Takes a map that holds pairs of (Shape objects, string shapeID)
Horizontal::Horizontal(std::vector<std::unique_ptr<Shape>> & myShapes) : _shapes(std::move(myShapes)){
    int width = 0;
    int height = 0;
    for (auto & _shape : _shapes)
    {
        width += _shape->getWidth();
        if ( _shape->getHeight() > height ) height = static_cast<int>(_shape->getHeight());
    }

    _width = width;
    _height = height;

}

void Horizontal::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n";

    for (auto & _shape : _shapes) {
        _shape->intoPS(fileStream, fileName);
        fileStream << "\n" << _shape->getHeight() << " 0 translate\n";
    }

    fileStream << "\n grestore \n";
    fileStream.close();
}


double Horizontal::getWidth(){
    return _width;
}

double Horizontal::getHeight(){
    return _height;
}

