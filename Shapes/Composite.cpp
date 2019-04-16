//
// Created by dgpal on 4/15/2019.
//

#include "Composite.hpp"


void Composite::intoPS(std::fstream &fileStream, const std::string &fileName) {
    fileStream.open(fileName, std::ios::app);
    fileStream << "gsave\n";

    compositeType(fileStream, fileName);

    fileStream << "\n grestore \n";
    fileStream.close();
}
