//
// Created by Joseph Byam on 3/30/2019.
//

#include "Vertical.h"
#include <cmath>
#include <fstream>
#include <string>
#include <map>

// Takes a map that holds pairs of (Shape objects, string shapeID)
Vertical::Vertical(std::vector<std::unique_ptr<Shape>> & myShapes) : _shapes(std::move(myShapes)){
    int width = 0;
    int height = 0;
    for (auto i = _shapes.begin(); i != _shapes.end(); ++i)
    {
        height += (*i)->getHeight();
        if ( (*i)->getWidth() > width ) width = (*i)->getWidth();
    }
    
    _width = width;
    _height = height;
    
}

void Vertical::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScript.ps");
}

void Vertical::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Vertical::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScript.ps");
}

void Vertical::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n";

    for (auto i = _shapes.begin(); i != _shapes.end(); ++i) {
        (*i)->intoPS(fileStream, fileName);
        fileStream << "\n0 " << (*i)->getHeight() << " translate\n";
    }

    fileStream << "\ngrestore\n";
    fileStream.close();
}


double Vertical::getWidth(){
    return _width;
}

double Vertical::getHeight(){
    return _height;
}

