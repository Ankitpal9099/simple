// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;
class Shape {
protected:
    float length;
    float width;

public:
    
    void inputDimensions() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
};


class Rectangle : public Shape {
public:
    
    float calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect; 
    rect.inputDimensions(); 
    rect.displayArea(); 

    return 0;
}