//
// Created by Joseph on 4/1/2019.
//

#ifndef FUNKYWUNKYSHAPES_SMILEY_H
#define FUNKYWUNKYSHAPES_SMILEY_H

#include "Shape.h"

class Smiley : public Shape{
public:
    explicit Smiley(const int & r);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
    std::pair<double,double> getCenter() override;
private:
    int _radius;
};


#endif //FUNKYWUNKYSHAPES_SMILEY_H
