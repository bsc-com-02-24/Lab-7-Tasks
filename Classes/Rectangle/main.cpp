#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    //create an instance of rectangle using the Rectangle class
    Rectangle myRectangle;

    float userLength =0.0;
    float userWidth =0.0;

    cout << "Enter the length of the rectangle: ";
    cin >> userLength;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;

    //use accessor methods to assign values for length and width
    myRectangle.setLength(userLength);
    myRectangle.setWidth(userWidth);

    //Display the information processed about myRectangle from user inputs
    cout << "\nLength of the myRectangle: " << myRectangle.getLength()<<endl;
    cout << "\nWidth of the myRectangle: " << myRectangle.getWidth()<<endl;
    cout << "\nArea of the myRectangle: " << myRectangle.calculateArea()<<endl;

    Rectangle otherRectangle;

    otherRectangle(userLength,userWidth);
    cout<<"\nLength of otherRectangle: "<< otherRectangle.getLength()<<endl;
    cout<<"\nLength of otherRectangle: "<< otherRectangle.getWidth()<<endl;
    cout<<"\nArea of otherRectangle: "<< otherRectangle.calculateArea()<<endl;
}