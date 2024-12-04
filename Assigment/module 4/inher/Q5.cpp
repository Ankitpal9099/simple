//  Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>
using namespace std;


class Students {
protected:
    int rollNumber;

public:

    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }


    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};


class Test : public Students {
protected:
    float marks1;
    float marks2;

public:

    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter marks for Subject 2: ";
        cin >> marks2;
    }

    void displayMarks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};


class Result : public Test {
public:

    float calculateTotal() {
        return marks1 + marks2; 
    }


    void displayResult() {
        displayRollNumber(); 
        displayMarks();
        cout << "Total Marks: " << calculateTotal() << endl; 
    }
};

int main() {
    Result studentResult; 

    
    cout << "Enter Student Details:\n";
    studentResult.inputRollNumber();
    studentResult.inputMarks();

    cout << "\nStudent Result:\n";
    studentResult.displayResult();

    return 0;
}