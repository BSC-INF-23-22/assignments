#include <iostream>
using namespace std;


// Function to calculate the area of a triangle 
double Triangle(double base, double height){
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double Rectangle(double length, double width)
{
    return length * width;
}

// Function to calculate the area of a square
double Square(double side)
{
    return side * side;
}

int main() {
    int option;
    double base, height, length, width, side;

    while (true) {
        cout << "Please select the shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> option;

        if (option == 1) {
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout<<"Enter the height of the triangle: ";
            cin>> height;
            double triangleArea = Triangle (base, height);
            cout << "TRIANGLE'S IS: " << triangleArea <<endl;
        }
        else if (option == 2) {
            cout << "Enter the length of the rectangle:"<<endl;
            cin >> length;
            cout << "Enter the width of the rectangle:"<<endl;
            cin >> width;
            double rectangleArea = Rectangle(length, width);
            cout << "The area of the rectangle is: " << rectangleArea <<endl;
        }
        else if (option == 3) {
            cout << "Enter the side length of the square: ";
            cin >> side;
            double squareArea = Square (side);
            cout << "The area of the square is: " << squareArea <<endl;
        }
        else if (option == 4) {
            break;
        }
        else {
            cout << "input you entered is invalid. enter a valid choice (1-4)." << endl;
        }

        cout << endl;
    }

    cout << "Program terminated." << endl;

    return 0;
}

