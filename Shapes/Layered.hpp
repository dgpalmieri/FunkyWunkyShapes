//
//  Layered.hpp
//  FunkyWunkyShapes
//
//  Created by Joseph Byam on 3/30/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#ifndef Layered_hpp
#define Layered_hpp


#include "Shape.h"
#include <string>
#include <memory>
#include <vector>

class Layered : public Shape{
public:
    explicit Layered(std::vector<std::unique_ptr<Shape>> & myShapes);
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
    std::vector<std::unique_ptr<Shape>> _shapes;
};


#endif /* Layered_hpp */

