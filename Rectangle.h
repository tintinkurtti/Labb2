//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_RECTANGLE_H
#define LABB2_RECTANGLE_H

#include "Shape.h"

class Rectangle : Shape{
public:
    Rectangle(double h, double b, std:: string color);
    double get_area() const override;
protected:
    double h, b;
};


#endif //LABB2_RECTANGLE_H
