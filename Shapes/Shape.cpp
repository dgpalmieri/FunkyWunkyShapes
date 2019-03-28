//
// Created by Andrew on 3/27/2019.
//

#include "Shape.h"

Shape::~Shape() = default;

std::pair<double, double> Shape::getCenter(){
    return std::make_pair(getWidth()+getWidth()/2,getHeight()+getHeight()/2);
}