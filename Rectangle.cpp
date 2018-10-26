#include "Rectangle.h"

Rectangle::Rectangle(int base, int hauteur): _base(base), _hauteur(hauteur) {
    
}

double Rectangle::aire() {
 return (_hauteur*_base);
}

double Rectangle::perimetre(){
    return (_hauteur*2 + _base*2);
}  