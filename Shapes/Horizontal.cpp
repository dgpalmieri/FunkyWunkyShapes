//
// Created by Joseph Byam on 3/30/2019.
//

#include "Horizontal.h"
#include <cmath>
#include <fstream>
#include <string>
#include <map>

 Takes a map that holds pairs of (Shape objects, string shapeID)
Horizontal::Horizontal(const map<Shape,string> myShapes){
    int width = 0;
    int height = 0;
    std::map<Shape, string>::iterator it = myShapes.begin();
    for(; it != myShapes.end(); it++)
    {
        width += it->second.getWidth();
        if ( it->second.getHeight() > height ) height = it->second.getHeight();
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
    fileStream << "gsave\n"
    //What goes here I'm still not sure of
    << "stroke\n"
    << "grestore";
    fileStream.close();
}


double Horizontal::getWidth(){
    return _width;
}

double Horizontal::getHeight(){
    return _height;
}

