//
// Created by tinti on 2023-09-20.
//

#include "Square.h"


Square::Square(double side, std::string color) : Shape(color), side(side){}

double Square::get_area() const{
    return side * side;
}