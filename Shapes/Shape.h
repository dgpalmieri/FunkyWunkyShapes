//
// Created by Andrew on 3/23/2019.
//

#ifndef FUNKYWUNKYSHAPES_SHAPE_H
#define FUNKYWUNKYSHAPES_SHAPE_H

#include <string>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void intoPS() = 0;
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
};


#endif //FUNKYWUNKYSHAPES_SHAPE_H
