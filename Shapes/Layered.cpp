//
//  Layered.cpp
//  FunkyWunkyShapes
//
//  Created by Joseph Byam on 3/30/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#include "Layered.h"
#include <cmath>
#include <fstream>
#include <string>
#include <map>

Layered::Layered(const map<Shape,string> myShapes) {
    int width = 0;
    int height = 0;
    std::map<Shape, string>::iterator it = myShapes.begin();
    for(; it != myShapes.end(); it++)
    {
        if ( it->second.getWidth() > width ) width = it->second.getWidth();
        if ( it->second.getHeight() > height ) height = it->second.getHeight();
    }

    _width = width;
    _height = height;

}
void Layered::intoPS() {
    std::ofstream myOut;
    return this->intoPS(myOut, "PostScript.ps");
}

void Layered::intoPS(const std::string &fileName) {
    std::ofstream myOut(std::ios::app);
    return this->intoPS(myOut, fileName);
}

void Layered::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScript.ps");
}

void Layered::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n"
    //What goes here I'm still not sure of
    << "stroke\n"
    << "grestore";
    fileStream.close();
}


double Layered::getWidth(){
    return _width;
}

double Layered::getHeight(){
    return _height;
}


