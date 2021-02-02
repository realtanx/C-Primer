//
//  Rectangle.hpp
//  C++Primer
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

class Rectangle {
    
private:
    double width;
    double height;
    
    static int count; // static member variable
    
public:
    Rectangle();
    ~ Rectangle();
    
    void set_width(double);
    void set_height(double);
    
    double get_width();
    double get_height();
    
    double get_area() const;
    
};

#endif /* Rectangle_hpp */
