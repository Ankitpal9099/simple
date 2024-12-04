// friend function: for accessing private data_member outside the class.
#include<iostream>
using namespace std;
class A;
class B{
    private:
    int money=50;
    friend int Ankit(B,A);
};
class A{
    private:
    int money=100;
    friend int Ankit(B,A);
};
int Ankit(B t,A m){
    cout<<"sum ="<<t.money+m.money<<endl;
}
int main(){
    B tt;
    A mm;
Ankit(tt,mm);
}