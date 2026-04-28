#include "Square.h"

namespace shapes{
    void Square::setSideLength(float s){
        sideLength = s;
    }

    float Square::getSideLength() const{
        return sideLength;
    }
}