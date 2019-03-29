//
// Created by Andrew on 3/23/2019.
//

#ifndef FUNKYWUNKYSHAPES_CIRCLE_H
#define FUNKYWUNKYSHAPES_CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
public:
    explicit Circle(const int & r);
    void intoPS() override;
    double getWidth() override;
    double getHeight() override;
    std::pair<double,double> getCenter() override;
private:
    int _radius;
};


#endif //FUNKYWUNKYSHAPES_CIRCLE_H
