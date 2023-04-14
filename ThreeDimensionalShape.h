#pragma once
//parent class
#include "Shape.h"
//child class that inherits from the parent class
class ThreeDimensionalShape : public Shape {
protected:
    //defines objects to be inherited by their children
    ThreeDimensionalShape() {}
    double virtual getVolume() = 0;
};
