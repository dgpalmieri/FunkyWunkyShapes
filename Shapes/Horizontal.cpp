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
    for (auto i = _shapes.begin(); i != _shapes.end(); ++i)
    {
        width += (*i)->getWidth();
        if ( (*i)->getHeight() > height ) height = (*i)->getHeight();
    }

    _width = width;
    _height = height;

}

void Horizontal::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScript.ps");
}

void Horizontal::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Horizontal::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScript.ps");
}

void Horizontal::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n";

    for (auto i = _shapes.begin(); i != _shapes.end(); ++i) {
        (*i)->intoPS(fileStream, fileName);
        fileStream << "\n" << (*i)->getHeight() << " 0 translate\n";
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

