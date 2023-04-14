#pragma once
//parent class
#include "ThreeDimensionalShape.h"

//child class that inherits from parent
class Sphere : public ThreeDimensionalShape {
    //private object
    int radius = 0;
//public objects
public:
    //add constr.
    Sphere() {
        this->radius = 0;
    }
    //constructor with parameters
    Sphere(int radius) {
        this->radius = radius;
    }
    //gets and sets radius then calculates area and volume and gets name
    int getRadius() { return radius; }
    void setRadius(int r) { this->radius = r; }
    double getArea() {
        int area = 4 * M_PI * (radius ^ 2);
        return area;
    }

    double getVolume() override {
        int volume = (4 / 3) * M_PI * (radius ^ 3);
        return volume;
    }
    std::string getName() override {
        return "Sphere";
    
    }
};