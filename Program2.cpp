// Program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Include all header files for each respective shape
#include <iostream>
//Define math to use M_PI for pi.
#define _USE_MATH_DEFINES // for C++
#include <math.h>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"


int main() {
    int type; //Saves user type of shape selection
    int shape; //Saves user shape selection

    //Gets user selection then directs it to that shape type
    std::cout << "What type of shape would you like to use?\n 1.Two Dimensional\n 2.Three Dimensional\n 3.Quit" << std::endl;
    std::cin >> type;
    // If user doesn't enter 3 for quit then it will go to 2d or 3d shape
    while (type != 3) {
        //2D shape selections
        if (type == 1) {
            std::cout << "Great! What 2D shape would you like to work with?\n 1.Circle\n 2.Square\n 3.Triangle" << std::endl;
            std::cin >> shape;
            //Gets radius then saves it and outputs calculated area
            if (shape == 1) {
                int radius;
                int area;
                Circle c1;
                std::cout << "What is the required radius (in cm): ";
                std::cin >> radius;
                c1.setRadius(radius);
                area = c1.getArea();
                std::cout << "The Area of " << c1.getName() << " is " << area << "cm " << std::endl;
            }
            //Gets side length then outputs calculated area
            else if (shape == 2) {
                int side;
                int area;
                Square s1;
                std::cout << "What is the required side length (in cm): ";
                std::cin >> side;
                s1.setSide(side);
                area = s1.getArea();
                std::cout << "The Area of " << s1.getName() << " is " << area << "cm " << std::endl;
            }
            //Gets base and height then calculates and outputs area
            else if (shape == 3) {
                int base;
                int height;
                int area;
                std::cout << "What is the required base length (in cm): ";
                std::cin >> base;
                std::cout << "What is the required height (in cm): ";
                std::cin >> height;
                Triangle t1;
                t1.setBase(base);
                t1.setHeight(height);
                area = t1.getArea();
                std::cout << "The Area of " << t1.getName() << " is " << area << "cm " << std::endl;
            }
            else
                std::cout << "Invalid Response! Please Try again!" << std::endl;
        }
        //For 3D shapes, gets which 3D shape then calculates area and volume
        else if (type == 2) {
            std::cout << "Great! What 3D shape would you like to work with?\n 1.Sphere\n 2.Cube\n 3.Tetrahedron" << std::endl;
            std::cin >> shape;
            //Gets radius then calculates volume and area and outputs it
            if (shape == 1) {
                int radius;
                int volume;
                int area;
                std::cout << "What is the required radius (in cm): ";
                std::cin >> radius;
                Sphere s1;
                s1.setRadius(radius);
                area = s1.getArea();
                volume = s1.getVolume();
                std::cout << "The Area of " << s1.getName() << " is " << area
                    << "cm " << "and the volume is " << volume << "cm " << std::endl;
            }
            //Gets side length then calculates and outputs volume and area
            else if (shape == 2) {
                int side;
                int volume;
                int area;
                std::cout << "What is the required side length (in cm): ";
                std::cin >> side;
                Cube c1(side);
                area = c1.getArea();
                volume = c1.getVolume();
                std::cout << "The Area of " << c1.getName() << " is " << area
                    << "cm " << "and the volume is " << volume << "cm " << std::endl;
            }
            //Gets side length then outputs calculated volume and area
            else if (shape == 3) {
                int length;
                int volume;
                int area;
                std::cout << "What is the required length (in cm): ";
                std::cin >> length;
                Tetrahedron t1(length);
                area = t1.getArea();
                volume = t1.getVolume();
                std::cout << "The Area of " << t1.getName() << " is " << area
                    << "cm " << "and the volume is " << volume << "cm " << std::endl;

            }
            //Anything except option 1 2 or 3 for shapes will output an error
            else
                std::cout << "Invalid Response! Please Try again!" << std::endl;
        }
        //Error message for shape type
        else
            std::cout << "Invalid Respone! Please Try Again!" << std::endl;
        //Reask first question to continue in the loop
        std::cout << "What type of shape would you like to use?\n 1.Two Dimensional\n 2.Three Dimensional\n 3.Quit" << std::endl;
        std::cin >> type;
    }
}

