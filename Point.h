#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{

public:
    Point(int X, int Y);
    int getX();
    int getY();
    
private:
    int _x;
    int _y;
};

#endif