//
// Created by Joseph Byam on 3/26/2019.
//

#ifndef FUNKYWUNKYSHAPES_RECTANGLE_H
#define FUNKYWUNKYSHAPES_RECTANGLE_H

#include "Shape.h"

class Spacer : public Shape{
public:
    explicit Spacer(const double & width, const double & height);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
};


#endif //FUNKYWUNKYSHAPES_CIRCLE_H

