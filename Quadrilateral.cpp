#include "Point.h"
#include "Shape.h"
#include "Quadrilateral.h"

Quadrilateral:: Quadrilateral (int side1, int side2, int side3, int side4){
     _side1 = side1;
     _side2 = side2;
     _side3 = side3;
     _side4 = side4;
}

double Quadrilateral::area(){

}

double Quadrilateral::perimeter(){
    return (_side1+_side2+_side3+_side4);
}

