//
// Created by tinti on 2023-09-20.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H


#include <string>

class Shape {
public :
    Shape(std::string color);
    virtual double get_area() const = 0;
    std::string get_color() const;
    virtual ~Shape() = default;
private:
    std::string color;
};


#endif //LABB2_SHAPE_H
