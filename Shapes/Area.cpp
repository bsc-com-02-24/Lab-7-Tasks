#include "Area.h"

namespace shapes{
    float Area::squareArea(const Square& s){
        return s.getSideLength() * s.getSideLength();
    }
    
    float Area::triangleArea(const Triangle& t){
        return 0.5 * t.getBase() * t.getHeight();
    }
    
    float Area::circleArea(const Circle& c){
        return 3.14159 * c.getRadius() * c.getRadius();
    }
}