//
// Created by Dylan Palmieri on 3/25/2019.
//

#include "Shape.h"

#ifndef FUNKYWUNKYSHAPES_POLYGON_HPP
#define FUNKYWUNKYSHAPES_POLYGON_HPP

class Polygon: public Shape {
public:
    Polygon(const int & numOfSides, const int & sideLength);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
    std::pair<double,double> getCenter() override;

private:
    int _numOfSides;
    int _sideLength;
};


#endif //FUNKYWUNKYSHAPES_POLYGON_HPP
