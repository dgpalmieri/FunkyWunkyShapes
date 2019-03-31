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
    std::ofstream myfile;
    myfile.open("PostScriptTest.ps", std::ios_base::app);
    myfile << _fx << " " <<  _fy << " scale\n";
    myfile.close();
    _shape->intoPS();
    myfile.open("PostScriptTest.ps", std::ios_base::app);
    myfile << 1/_fx << " " <<  1/_fy << " scale\n";
    myfile.close();
}

double Scaled::getWidth() {
    return (_shape->getWidth() * _fx);
}

double Scaled::getHeight() {
    return (_shape->getHeight() * _fy);
}

std::pair<double, double> Scaled::getCenter() {
    return std::make_pair((_shape->getCenter().first) * _fx,
                          (_shape->getCenter().second) * _fy);
}