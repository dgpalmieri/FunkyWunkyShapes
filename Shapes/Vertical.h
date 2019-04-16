//
// Created by Joseph Byam on 3/30/2019.
//

#ifndef FUNKYWUNKYSHAPES_VERTICAL_H
#define FUNKYWUNKYSHAPES_VERTICAL_H

#include <vector>
#include <string>
#include <memory>
#include "Composite.hpp"

class Vertical : public Composite{
public:
    explicit Vertical(std::vector<std::unique_ptr<Shape>> & myShapes);
    void compositeType(std::fstream &, const std::string &) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
    std::vector<std::unique_ptr<Shape>> _shapes;
};


#endif //FUNKYWUNKYSHAPES_VERTICAL_H

