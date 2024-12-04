// Write a program to swap the two numbers using friend function
// without using third variable

#include <iostream>
using namespace std;

class Swapper {
private:
    int a;
    int b;

public:
    Swapper(int x, int y) : a(x), b(y) {}

    friend void swap(Swapper& s);
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
void swap(Swapper& s) {
    s.a = s.a + s.b; 
    s.b = s.a - s.b; 
    s.a = s.a - s.b; 
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swapper swapper(x, y);

    cout << "Before swapping: ";
    swapper.display(); 
    swap(swapper);

    cout << "After swapping: ";
    swapper.display(); 

    return 0;
}