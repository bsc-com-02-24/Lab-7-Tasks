#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main(){
    int choice = 0;
    bool running = true;

    while(running){
        cout << "\n=== Shape Area Calculator ===" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice){
            case 1:{
                float sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                Square mySquare(sideLength);
                cout << "\nArea of the square: " << Area::squareArea(mySquare) << endl;
                break;
            }
            case 2:{
                float base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle myTriangle(base, height);
                cout << "\nArea of the triangle: " << Area::triangleArea(myTriangle) << endl;
                break;
            }
            case 3:{
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle myCircle(radius);
                cout << "\nArea of the circle: " << Area::circleArea(myCircle) << endl;
                break;
            }
            case 4:{
                cout << "Thank you for using the Shape Area Calculator. Goodbye!" << endl;
                running = false;
                break;
            }
            default:{
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
            }
        }
    }

    return 0;
}