//  Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance
#include <iostream>
using namespace std;
class Grandparent {
protected:
    int grandparentValue;

public:
     Grandparent(int gValue) {
        grandparentValue = gValue;
        cout << "Grandparent constructor called. Value: " << grandparentValue << endl;
    }
};
class Parent : public Grandparent {
protected:
    int parentValue;

public:
  
    Parent(int gValue, int pValue) : Grandparent(gValue) {
        parentValue = pValue;
        cout << "Parent constructor called. Value: " << parentValue << endl;
    }
};
class Child : public Parent {
private:
    int childValue;

public:
    
    Child(int gValue, int pValue, int cValue) : Parent(gValue, pValue) {
        childValue = cValue;
        cout << "Child constructor called. Value: " << childValue << endl;
    }
    void displayValues() {
        cout << "Grandparent Value: " << grandparentValue << endl;
        cout << "Parent Value: " << parentValue << endl;
        cout << "Child Value: " << childValue << endl;
    }
};

int main() {
    Child child(10, 20, 30);

    cout << endl << "Displaying Values:" << endl;
    child.displayValues();

    return 0;
}