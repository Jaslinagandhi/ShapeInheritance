#pragma once
#include <string>
//parent class that defines the main 2 objects in all child classes
class Shape {
public:
    Shape() = default;
    std::string virtual getName() = 0;
    double virtual getArea() = 0;
    
};