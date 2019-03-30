//
// Created by Andrew on 3/27/2019.
//

#include "Rotated.h"
#include <fstream>



Rotated::Rotated(std::unique_ptr<Shape> shape, const int angle): _shape(std::move(shape)), _angle(angle){}

void Rotated::intoPS(){
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps", std::ios_base::app);
    myfile << _shape->getCenter().first << " " <<  _shape->getCenter().second << " translate\n"
            << _angle << " rotate\n"
            << _shape->getCenter().first*(-1) << " " <<  _shape->getCenter().second*(-1) << " translate\n";
    myfile.close();
    _shape->intoPS();
}
double Rotated::getWidth(){
    if(_angle == 90 || _angle == 270){
        return _shape->getHeight();
    }
    return _shape->getWidth();
}
double Rotated::getHeight(){
    if(_angle == 90 || _angle == 270){
        return _shape->getWidth();
    }
    return _shape->getHeight();
}

std::pair<double,double> Rotated::getCenter(){}
void Rotated::intoPS(const std::string & fileName){}
void Rotated::intoPS(std::fstream & fileStream){}
void Rotated::intoPS(std::fstream & fileStream, const std::string & fileName){}