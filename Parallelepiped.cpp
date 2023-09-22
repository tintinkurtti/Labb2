//
// Created by tinti on 2023-09-20.
//

#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double h, double b, double d, std::string color)  : Rectangle(h, b, color), d(d){}
double Parallelepiped::get_area() const {
    return 2 * b * h + 2 * b * d + 2 * d * h;
}