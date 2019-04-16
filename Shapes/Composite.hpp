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

    void intoPS(std::fstream &, const std::string &) override;
    virtual void compositeType(std::fstream &, const std::string &) = 0;

};


#endif //FUNKYWUNKYSHAPES_COMPOSITE_HPP
