//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_PARALLELEPIPED_H
#define LABB2_PARALLELEPIPED_H

#include "Shape.h"
#include "Rectangle.h"

class Parallelepiped : Rectangle{
    Parallelepiped(double h, double b, double d, std::string color);
    double get_area() const override;
private:
    double d;

};


#endif //LABB2_PARALLELEPIPED_H
