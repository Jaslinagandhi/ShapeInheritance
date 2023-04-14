#pragma once
//parent class
#include "TwoDimensionalShape.h"
//child class
class Triangle : public twoDimensionalShape {
    //private objects defined
    int base = 0;
    int height = 0;
    int area = 0;
//public sets and gets height and base then calculates area and gets name
public:
    //constructor
    Triangle() {
        this->height = height;
        this->base = base;
    }
    Triangle(int height, int base) {
        this->height = height;
        this->base = base;
    }
    int getBase(int base) {
        return base;
    }
    int getHeight(int height) {
        return height;
    }
    void setBase(int b) {
        this->base = b;
    }
    void setHeight(int h) {
        this->height = h;
    }
    
    double getArea()  {
        int area = (0.5) * base * height;
        return area;
    }
    std::string getName()  {
        std::string name = "Triangle";
        return name;
    }

};
