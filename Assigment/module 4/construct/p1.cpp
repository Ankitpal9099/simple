// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include <iostream>
using namespace std;

class Cal {
    float num1, num2;
public:
    Cal(float a, float b) {
        num1 = a;
        num2 = b;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Cal calc(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

}