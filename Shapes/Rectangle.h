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
    void intoPS(const std::string & fileName) override;
    void intoPS(std::fstream & fileStream) override;
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
    std::pair<double,double> getCenter() override;
private:
    double _width;
    double _height;
};


#endif //FUNKYWUNKYSHAPES_RECTANGLE_H
