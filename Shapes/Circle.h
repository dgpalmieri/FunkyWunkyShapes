//
// Created by Andrew on 3/23/2019.
//

#ifndef FUNKYWUNKYSHAPES_CIRCLE_H
#define FUNKYWUNKYSHAPES_CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
public:
    explicit Circle(double r);
    std::string intoPS() override;
    double getWidth() override;
    double getHeight() override;
private:
    double _radius;
};


#endif //FUNKYWUNKYSHAPES_CIRCLE_H
