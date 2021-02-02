//
//  Rectangle.cpp
//  C++Primer
//
//

#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle()
{
    width = 0.0;
    height = 0.0;
}

Rectangle:: ~Rectangle()
{
    std::cout << "the destructor of Rectangle is called." << std::endl;
}

void Rectangle::set_width(double w)
{
    if (w > 0) {
        width = w;
    }
}

void Rectangle::set_height(double h)
{
    if (h > 0) {
        height = h;
    }
}

double Rectangle::get_width()
{
    return width;
}

double Rectangle::get_height()
{
    return height;
}

double Rectangle::get_area() const
{
    return width * height;
}
