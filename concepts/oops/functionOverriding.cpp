// C++ program to demonstrate function overriding

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
    derived1.print();
    // accesing overwritten function
    derived1.Base::print();

    // using pointers
    Derived derived2;
    Base* ptr=&derived2;
    ptr->print();
    return 0;
}