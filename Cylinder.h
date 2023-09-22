//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H

#include "Circle.h"

class Cylinder : Circle {
    Cylinder(double radius, double heigth, std::string color);
    double get_area() const override;
private:
    double heigth;
};


#endif //LABB2_CYLINDER_H
