//
// Created by Andrew on 3/31/2019.
//

#include "Scaled.h"

Scaled::Scaled(std::unique_ptr<Shape> shape, const double &fx, const double &fy) : _shape(std::move(shape)), _fx(fx),
                                                                                   _fy(fy) {}

void Scaled::intoPS() {
    std::fstream myOut;
    return this->intoPS(myOut, "PostScriptTest.ps");
}

void Scaled::intoPS(const std::string &fileName) {
    std::fstream myOut;
    return this->intoPS(myOut, fileName);
}

void Scaled::intoPS(std::fstream &fileStream) {
    return this->intoPS(fileStream, "PostScriptTest.ps");
}

void Scaled::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios_base::app);
    //fileStream <<
    fileStream.close();
}

double Scaled::getWidth(){

}
double Scaled::getHeight(){

}
std::pair<double,double> Scaled::getCenter(){

}