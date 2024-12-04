// Write a program to find the max number from given two numbers
// using friend function
#include <iostream>
using namespace std;

class MaxFinder {
private:
    int a;
    int b;

public:

    MaxFinder(int x, int y) : a(x), b(y) {}


    friend int findMax(MaxFinder& mf);
};
int findMax(MaxFinder& mf) {
    return (mf.a > mf.b) ? mf.a : mf.b; 
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    MaxFinder maxFinder(x, y);
    int maxNumber = findMax(maxFinder);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}