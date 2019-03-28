//
// Created by Andrew on 3/27/2019.
//

#include "Rotated.h"


Rotated::Rotated(std::unique_ptr<Shape> shape, const int angle): _shape(std::move(shape)), _angle(angle){}

void Rotated::intoPS(){

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
