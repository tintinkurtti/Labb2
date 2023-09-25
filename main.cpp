#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Cylinder.h"
#include "Parallelepiped.h"
#include "Rounded_rectangle.h"
#include "memory"
#include "vector"


using shape_pointer = std::unique_ptr<Shape>;

void get_data(const std::vector<shape_pointer>& shapes) {
    double total_area = 0;
    for (const auto& shape : shapes) {
        total_area += shape->get_area();
        std::cout << shape->get_color() << " " << shape->get_area() << std::endl;
    }
    std::cout << "Total area: " << total_area;
}


int main() {

    std::vector<shape_pointer> shapes;

    shapes.push_back(std::make_unique<Rectangle>(2, 3, "Red"));
    shapes.push_back(std::make_unique<Circle>(1, "Brown"));
    shapes.push_back(std::make_unique<Square>(2, "Black"));
    shapes.push_back(std::make_unique<Cylinder>(1, 5, "Brown"));
    shapes.push_back(std::make_unique<Parallelepiped>(4, 2, 4, "Green"));
    shapes.push_back(std::make_unique<Rounded_rectangle>(7, 5, 2, "Blue"));

    get_data(shapes);

    return 0;
}
