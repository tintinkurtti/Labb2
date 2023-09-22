//
// Created by tinti on 2023-09-20.
//

#include "Shape.h"

Shape::Shape(std::string color) : color(std::move(color)){
}

std::string Shape::get_color(){
return color;
}
