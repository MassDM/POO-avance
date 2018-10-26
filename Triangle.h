#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>


class Triangle{
public:
    Triangle(int hauteur, int base, int hypotenuse);
    double aire();
    double perimetre();
    

private: 
     int _hauteur;
     int _base;
     int _hypotenuse;

};

#endif 