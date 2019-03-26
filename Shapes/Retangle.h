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
    int getWidth() override;
    int getHeight() override;
private:
    double _width;
    double _height;
};


#endif //FUNKYWUNKYSHAPES_CIRCLE_H
