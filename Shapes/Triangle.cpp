#include "Triangle.h"

namespace shapes{
    void Triangle::setBase(float b){
        base = b;
    }
    
    void Triangle::setHeight(float h){
        height = h;
    }

    float Triangle::getBase() const{
        return base;
    }
    
    float Triangle::getHeight() const{
        return height;
    }
}