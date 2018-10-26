#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle{

public:
    Rectangle(int hauteur, int base);
    double aire();
    double perimetre();

private: 
     int _hauteur;
     int _base;
};

#endif 