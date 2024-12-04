//  Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    
    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void inputStudentData() {
        inputPersonData(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }


    void displayStudentData() {
        displayPersonData(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class MarkSheet : public Student {
private:
    int marks[5]; 

public:

    void inputMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
        int totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += marks[i];
        }
        percentage = static_cast<float>(totalMarks) / 5; 
    }

    //
    void displayMarkSheet() {
        displayStudentData(); 
        cout << "Marks:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
        cout << "Calculated Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    MarkSheet markSheet; 

    
    cout << "Enter Student Details:\n";
    markSheet.inputStudentData();
    markSheet.inputMarks();


    cout << "\nStudent Mark Sheet:\n";
    markSheet.displayMarkSheet();

    return 0;
}