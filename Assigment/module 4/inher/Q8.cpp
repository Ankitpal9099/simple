//  Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
    double subtract(double a, double b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
    double multiply(double a, double b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b != 0)
            return static_cast<double>(a) / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int intA = 10, intB = 5;
    cout << "Integer Operations:" << endl;
    cout << "Addition: " << calc.add(intA, intB) << endl;
    cout << "Subtraction: " << calc.subtract(intA, intB) << endl;
    cout << "Multiplication: " << calc.multiply(intA, intB) << endl;
    cout << "Division: " << calc.divide(intA, intB) << endl;
    double doubleA = 10.5, doubleB = 5.2;
    cout << "\nDouble Operations:" << endl;
    cout << "Addition: " << calc.add(doubleA, doubleB) << endl;
    cout << "Subtraction: " << calc.subtract(doubleA, doubleB) << endl;
    cout << "Multiplication: " << calc.multiply(doubleA, doubleB) << endl;
    cout << "Division: " << calc.divide(doubleA, doubleB) << endl;

    return 0;
}