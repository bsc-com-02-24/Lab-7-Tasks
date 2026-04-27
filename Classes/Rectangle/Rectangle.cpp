#include "Rectangle.h"

void Rectangle::setLength(float l){
    length = l;
}
void Rectangle::setWidth(float w){
    width = w;
}
float Rectangle::getLength(){
    return length;
}
float Rectangle::getWidth(){
    return width;
}
float Rectangle::calculateArea(){
    return length * width;
}