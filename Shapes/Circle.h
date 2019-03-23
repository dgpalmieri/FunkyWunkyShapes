//
// Created by Andrew on 3/23/2019.
//

#ifndef FUNKYWUNKYSHAPES_CIRCLE_H
#define FUNKYWUNKYSHAPES_CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
public:
    Circle(double r);
    std::string intoPS() override;
    double getWidth() override;
    double getWidth() override;
private:
    double _r;
};


#endif //FUNKYWUNKYSHAPES_CIRCLE_H
