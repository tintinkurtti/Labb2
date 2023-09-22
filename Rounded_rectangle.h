//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_ROUNDED_RECTANGLE_H
#define LABB2_ROUNDED_RECTANGLE_H

#include "Shape.h"
#include "Rectangle.h"

class Rounded_rectangle : public Rectangle{
public:
    Rounded_rectangle(double b, double h, double corner_radius, std::string color);
    double get_area() const override;
private:
    double corner_radius;
};


#endif //LABB2_ROUNDED_RECTANGLE_H
