//
// Created by tinti on 2023-09-20.
//

#include "Circle.h"


Circle::Circle(double radius, std::string color) : Shape(color), radius(radius){}

double Circle::get_area() const{
    return M_PI * std::pow(radius, 2);
}