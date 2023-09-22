//
// Created by tinti on 2023-09-20.
//

#include "Rectangle.h"


Rectangle::Rectangle(double h, double b, std:: string color) : Shape(color), h(h), b(b) {}

double Rectangle::get_area() const{
    return h * b;
}