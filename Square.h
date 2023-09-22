//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_SQUARE_H
#define LABB2_SQUARE_H

#include "Shape.h"

class Square : Shape {
public:
    Square(double side, std::string color);
    double get_area() const override;
private:
    double side;
};


#endif //LABB2_SQUARE_H
