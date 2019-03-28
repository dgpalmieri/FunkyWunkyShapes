//
// Created by Joseph Byam on 3/26/2019.
//

#ifndef FUNKYWUNKYSHAPES_RECTANGLE_H
#define FUNKYWUNKYSHAPES_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
public:
    explicit Rectangle(const double & width, const double & height);
    void intoPS() override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
};


#endif //FUNKYWUNKYSHAPES_RECTANGLE_H
