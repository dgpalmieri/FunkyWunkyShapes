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
    int width = 0;
    int height = 0;
    for (auto i = _shapes.begin(); i != _shapes.end(); ++i)
    {
        if ( (*i)->getWidth() > width ) width = (*i)->getWidth();
        if ( (*i)->getHeight() > height ) height = (*i)->getHeight();
    }

    _width = width;
    _height = height;

}
void Layered::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScript.ps");
}

void Layered::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Layered::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScript.ps");
}

void Layered::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n";

    for (auto i = _shapes.begin(); i != _shapes.end(); ++i)
        (*i)->intoPS(fileStream, fileName);

    fileStream << "\ngrestore\n";
    fileStream.close();
}


double Layered::getWidth(){
    return _width;
}

double Layered::getHeight(){
    return _height;
}


