#pragma once
//parent classes
#include "Shape.h"
#include "Moveable.h"
//class that inherits from two classes but does nothing
class MoveableShape :public Shape, public Moveable {
	//default constructor
	MoveableShape() = default;
};