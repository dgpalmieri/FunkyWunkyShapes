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

class Layered : public Shape{
public:
    explicit Layered(const map<Shape, string> myShapes); //Don't know if it should be by reference
    void intoPS() override;
    void intoPS(const std::string & fileName) override;
    void intoPS(std::fstream & fileStream) override;
    void intoPS(std::fstream & fileStream, const std::string & fileName) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
};


#endif /* Layered_hpp */

