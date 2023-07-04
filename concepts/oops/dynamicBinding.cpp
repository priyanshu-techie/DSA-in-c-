// #include<iostream> 

// using namespace std; 

// class A{
//     public:
//         void walk(){
//             cout<<"I am walking A";
//         }
// };
// class B:public A{
//     public:
//         void walk(){
//             cout<<"I am walking B";
//         }
// };
// class C:public A{
//     public:
//         void walk(){
//             cout<<"I am walking C";
//         }
// };



// int main(){
//     C c1; B b1;
//     A * ptr=&c1;
    
//     ptr->walk();
//     ptr=&b1;
//     ptr->walk();
//     return 0;
// }



// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();

    return 0;
}