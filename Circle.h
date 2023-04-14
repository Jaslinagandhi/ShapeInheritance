#pragma once 
//Includes parent class
#include "TwoDimensionalShape.h"

class Circle :public twoDimensionalShape {
    //Keep private definitions
    int radius = 0;
    double area = 0;
    //Public objects to be called in the main class
public:
    //Default constructor
    Circle() { 
        this->radius = 0;
    }
    //Constructor with parameters
    Circle(int radius) {
        this->radius = radius;
    }
    //public class to get private radius
    int getRadius(int radius) {
        return radius;
    }
    //Set the radius to an inputed value
    void setRadius(int r) {
        this->radius = r;
    }
    //User radius to calculate area
    double getArea()  {
        area = M_PI * (radius * radius);
        return area;
    }
    //get Name of shape
    std::string getName()  {
        std::string name = "Circle";
        return name;
    }
};