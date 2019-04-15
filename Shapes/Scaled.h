//
// Created by Andrew on 3/31/2019.
//

#ifndef FUNKYWUNKYSHAPES_SCALED_H
#define FUNKYWUNKYSHAPES_SCALED_H

#include "Shape.h"
#include <fstream>
#include <memory>

class Scaled : public Shape{
public:
    Scaled(std::unique_ptr<Shape>, const double & fx, const double & fy);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
    std::pair<double,double> getCenter() override;
private:
    std::unique_ptr<Shape> _shape;
    double _fx;
    double _fy;
};

#endif //FUNKYWUNKYSHAPES_SCALED_H
