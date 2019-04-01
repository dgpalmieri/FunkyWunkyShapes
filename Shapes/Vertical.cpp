//
// Created by Joseph Byam on 3/30/2019.
//

#include "Vertical.h"
#include <cmath>
#include <fstream>
#include <string>
#include <map>

// Takes a map that holds pairs of (Shape objects, string shapeID)
Vertical::Vertical(const map<Shape,string> myShapes){
    int width = 0;
    int height = 0;
    std::map<Shape, string>::iterator it = myShapes.begin();
    for(; it != myShapes.end(); it++)
    {
        height += it->second.getHeight();
        if ( it->second.getWidth() > width ) width = it->second.getWidth();
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
    fileStream << "gsave\n"

    //What goes here I'm still not sure of

    << "stroke\n"
    << "grestore";
    fileStream.close();
}


double Vertical::getWidth(){
    return _width;
}

double Vertical::getHeight(){
    return _height;
}

