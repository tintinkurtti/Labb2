//
// Created by tinti on 2023-09-20.
//

#include "Shape.h"

Shape::Shape(std::string color) : color((color)){
}

std::string Shape::get_color() const{
return color;
}
