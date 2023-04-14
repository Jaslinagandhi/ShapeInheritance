#pragma once
//Defines a class that doesn't inherit from anything and moves the shapes
class Moveable {
    //default constructor
    Moveable() = default;
    void virtual move() {}
};