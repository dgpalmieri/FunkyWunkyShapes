//
// Created by Joseph Byam on 3/30/2019.
//

#ifndef FUNKYWUNKYSHAPES_HORIZONTAL_H
#define FUNKYWUNKYSHAPES_HORIZONTAL_H

#include "Shape.h"
#include <vector>
#include <string>
#include <memory>

class Horizontal : public Shape{
public:
    explicit Horizontal(std::vector<std::unique_ptr<Shape>> & myShapes);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
    std::vector<std::unique_ptr<Shape>> _shapes;
};


#endif //FUNKYWUNKYSHAPES_HORIZONTAL_H

