#pragma once
//include parent class
#include "ThreeDimensionalShape.h"

//set class of shape that inherits from parent class
class Cube : public ThreeDimensionalShape {
    //private objects
    int a = 0;
    int volume = a ^ 3;
//public objects
public:
    //getters and setters for a or length, then calculates area and volume and gets name
    int getSide() {
        return a;
    }
    void setSide(int s) {
        this->a = s;
    }
    Cube(int side) {
        this->a = side;
    }
    double getArea() {
        int area;
        area = 6 * (a*a);
        return area;
    }
    double getVolume() {
        int volume = (a * a * a);
        return volume;
    }
    std::string getName() {
        std::string name = "Cube";
        return name;
    }
};

