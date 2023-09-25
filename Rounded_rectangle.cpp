//
// Created by tinti on 2023-09-20.
//


#include "Rounded_rectangle.h"
#include "cmath"

Rounded_rectangle::Rounded_rectangle(double b, double h, double corner_radius, std::string color) : Rectangle(b, h, color), corner_radius(corner_radius){}
double Rounded_rectangle::get_area() const{
    return b * h - (corner_radius * corner_radius) * (4 - M_PI);
}