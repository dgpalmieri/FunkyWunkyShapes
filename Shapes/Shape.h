//
// Created by Andrew on 3/23/2019.
//

#ifndef FUNKYWUNKYSHAPES_SHAPE_H
#define FUNKYWUNKYSHAPES_SHAPE_H

#include <string>
#include <utility>

class Shape {
public:
    virtual ~Shape();
    virtual void intoPS() = 0;
    virtual void intoPS(const std::string & fileName) = 0;
    virtual void intoPS(std::fstream & fileStream) = 0;
    virtual void intoPS(std::fstream & fileStream, const std::string & fileName) = 0;
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
    virtual std::pair<double,double> getCenter() = 0;
};


#endif //FUNKYWUNKYSHAPES_SHAPE_H
