#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes{
    class Area{
        public:
        static float squareArea(const Square& s);
        static float triangleArea(const Triangle& t);
        static float circleArea(const Circle& c); 
    };
}