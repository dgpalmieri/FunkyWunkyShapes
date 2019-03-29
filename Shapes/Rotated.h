//
// Created by Andrew on 3/27/2019.
//

#ifndef FUNKYWUNKYSHAPES_ROTATED_H
#define FUNKYWUNKYSHAPES_ROTATED_H

#include "Shape.h"
#include <memory>

class Rotated : public Shape{
public:
    Rotated(std::unique_ptr<Shape>,int angle);
    void intoPS() override;
    double getWidth() override;
    double getHeight() override;
private:
    std::unique_ptr<Shape> _shape;
    int _angle;
};



#endif //FUNKYWUNKYSHAPES_ROTATED_H