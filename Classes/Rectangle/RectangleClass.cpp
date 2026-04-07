#include <iostream>

using namespace std;

class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle(){
        length =0.0;
        width = 0.0;      
    }
    ~Rectangle(){

    }
    //accessor methods for assigning values to member variables in public Ractangle class
    void setLength(float l){
        length = l;
    }
    void setWidth(float w){
        width = w;
    }
    //accessor methods for retrieving values from the member variables in public Ractangle Class
    float getLength(){
        return length;
    }
    float getWidth(){
        return width;
    }
    //method to calculate and return the area of the rectangle as a float using length and width
    float calculateArea(){
        return length * width;
    }
};

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
    cout << "\nLength of the rectangle: " << myRectangle.getLength()<<endl;
    cout << "\nWidth of the rectangle: " << myRectangle.getWidth()<<endl;
    cout << "\nArea of the rectangle: " << myRectangle.calculateArea()<<endl;
}