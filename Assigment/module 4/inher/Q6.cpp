//  Write a C++ Program to show access to Private Public and Protected using
// Inheritance
#include <iostream>
using namespace std;
class Base {
private:
    int privateVar; 
protected:
    int protectedVar; 
public:
    int publicVar; 

    Base(int pVar, int proVar, int pubVar) {
        privateVar = pVar;
        protectedVar = proVar;
        publicVar = pubVar;
    }
    void displayBase() {
        cout << "Private Variable: " << privateVar << endl; 
        cout << "Protected Variable: " << protectedVar << endl; 
        cout << "Public Variable: " << publicVar << endl; 
    }
};
class Derived : public Base {
public:
    Derived(int pVar, int proVar, int pubVar) : Base(pVar, proVar, pubVar) {}
    void displayDerived() {
        cout << "Protected Variable: " << protectedVar << endl; 
        cout << "Public Variable: " << publicVar << endl; 
    }
};

int main() {
    Base base(10, 20, 30); 
    Derived derived(40, 50, 60); 

    cout << "Base Class Variables:\n";
    base.displayBase();
    cout << "\nDerived Class Variables:\n";
    derived.displayDerived();
    cout << "\nAccessing Public Variable from Base Class: " << base.publicVar << endl;
    cout << "Accessing Public Variable from Derived Class: " << derived.publicVar << endl;

    return 0;
}