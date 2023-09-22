//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H


#include "Shape.h"
#include <cmath>

class Circle : public Shape{
public:
    Circle(double radius, std::string color = "");
    double get_area() const override;

protected:
    double radius;
};


#endif //LABB2_CIRCLE_H
