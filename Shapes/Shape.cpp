//
// Created by Andrew on 3/27/2019.
//

#include <fstream>
#include "Shape.h"

Shape::~Shape() = default;

void Shape::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScriptTest.ps");
}

void Shape::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Shape::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScriptTest.ps");
}