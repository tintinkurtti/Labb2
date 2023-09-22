//
// Created by tinti on 2023-09-20.
//

#include "Cylinder.h"


Cylinder::Cylinder(double radius, double heigth, std::string color) :Circle(radius, color), heigth(heigth){}

double Cylinder::get_area() const{
    return radius * 2 * M_PI * heigth;
}