#pragma once

class Rectangle{
    private:
    float length;
    float width;

    public:

    //default constructor
    Rectangle(){
        length =0.0;
        width = 0.0;      
    }

    //overloaded constructor to initialize length and width
    Rectangle(float& l,float& w){
        length = l;
        width = w;
    }

    ~Rectangle(){

    }

    //accessor methods for assigning values to member variables in public Ractangle class
    void setLength(float l);
    void setWidth(float w);

    //accessor methods for retrieving values from the member variables in public Ractangle Class
    float getLength();
    float getWidth();

    //method to calculate and return the area of the rectangle as a float using length and width
    float calculateArea();
};