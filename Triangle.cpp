#include "Triangle.h"

Triangle::Triangle(int base, int hauteur, int hypotenuse): _base(base), _hauteur(hauteur), _hypotenuse(hypotenuse) {
    
}

double Triangle::aire() {
 return (_hauteur*_base/2);
}

double Triangle::perimetre(){
    return (_hauteur + _base + _hypotenuse);
}