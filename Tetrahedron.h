#pragma once
//parent class
#include "ThreeDimensionalShape.h"
//child class with parent class
class Tetrahedron : public ThreeDimensionalShape {
    //private objects
    int a = 0;
    int volume = (a ^ 3) / (6 * sqrt(2));
// gets and sets side length then calculates area and volume
public:
    //constructor
    Tetrahedron(int side) {
        this->a = side;
    }
    int getSide() {
        return a;
    }
    void setSide(int s) {
        this->a = s;
    }
    double getArea() {
        int area;
        area = sqrt(3) * (a ^ 2);
        return area;
    }
    double getVolume() {
        int volume = (a * a * a) / (6 * sqrt(2));
        return volume;
    }
    std::string getName() {
        std::string name = "Tetrahedron";
        return name;
    }
};