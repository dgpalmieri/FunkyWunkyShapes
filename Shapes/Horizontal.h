//
// Created by Joseph Byam on 3/30/2019.
//

#ifndef FUNKYWUNKYSHAPES_HORIZONTAL_H
#define FUNKYWUNKYSHAPES_HORIZONTAL_H

#include "Composite.hpp"
#include <vector>
#include <string>
#include <memory>

class Horizontal : public Composite{
public:
    explicit Horizontal(std::vector<std::unique_ptr<Shape>> & myShapes);
    void compositeType(std::fstream &, const std::string &) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
    std::vector<std::unique_ptr<Shape>> _shapes;
};


#endif //FUNKYWUNKYSHAPES_HORIZONTAL_H

