//
// Created by Dylan Palmieri on 4/15/2019.
//

#ifndef FUNKYWUNKYSHAPES_COMPOSITE_HPP
#define FUNKYWUNKYSHAPES_COMPOSITE_HPP

#include "Shape.h"
#include <vector>
#include <fstream>
#include <memory>

class Composite : public Shape{

    explicit Composite(std::vector<std::unique_ptr<Shape>> & myShapes);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    virtual void compositeType() = 0;

};


#endif //FUNKYWUNKYSHAPES_COMPOSITE_HPP
