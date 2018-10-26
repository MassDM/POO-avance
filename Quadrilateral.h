#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Point.h"
#include "Shape.h"
#include <iostream>

class Quadrilateral : public Shape {

public: 
    Quadrilateral (Point A, Point B, Point C, Point D);
        double area();
        double perimeter();   

private:
    int _side1;
    int _side2;
    int _side3;
    int _side4;


};

#endif