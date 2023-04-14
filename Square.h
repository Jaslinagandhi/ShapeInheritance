#pragma once
//parent class
#include "TwoDimensionalShape.h"
//child class that inherits from parent
class Square : public twoDimensionalShape {
    //private objects
    int side = 0;
    int area = side ^ 2;
//public objects from parent class that set and get side length then calculate area
public:
    //default constructor
    Square() {
        this->side = side;
    }
    //constructor with parameters
    Square(int side) {
        this->side = side;
    }
    int getSide(int side) {
        return side;
    }
    void setSide(int s) {
        this->side = s;
    }
    
    double getArea()  {
        area = side * side;
        return area;
    }
    std::string getName()  {
        std::string name = "Square";
        return name;
    }


};
