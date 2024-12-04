// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring> 
using namespace std;

class MyString {
private:
    char* str;
public:
    
    MyString(const char* s) {
        str = new char[strlen(s) + 1]; 
        strcpy(str, s); 
    }


    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1]; 
        strcpy(str, other.str); 
    }
    ~MyString() {
        delete[] str;
    }
    MyString operator+(const MyString& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str); 

        return MyString(newStr);
    }
    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");
    MyString result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();

    return 0;
}