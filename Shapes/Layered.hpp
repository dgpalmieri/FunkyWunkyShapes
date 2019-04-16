//
//  Layered.hpp
//  FunkyWunkyShapes
//
//  Created by Joseph Byam on 3/30/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#ifndef Layered_hpp
#define Layered_hpp


#include "Composite.hpp"
#include <string>
#include <memory>
#include <vector>

class Layered : public Composite{
public:
    explicit Layered(std::vector<std::unique_ptr<Shape>> & myShapes);
    void compositeType(std::fstream &, const std::string &) override;
    double getWidth() override;
    double getHeight() override;
private:
    double _width;
    double _height;
    std::vector<std::unique_ptr<Shape>> _shapes;
};


#endif /* Layered_hpp */

