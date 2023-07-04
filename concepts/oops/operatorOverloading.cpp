#include <iostream>

using namespace std;

// unary operator
class Myclass
{
private:
    int count;

public:
    Myclass() : count(5) {}

    void operator++()
    {
        count += 5;
    }
    // to have the operator as a postfix just put int keyword in params
    Myclass operator++(int)
    {
        Myclass tempclass;
        tempclass.count = 90;
        return tempclass;
    }
    void operator--()
    {
        cout << "Why are you cancelling";
    }
    // to have the operator as a postfix just put int keyword in params
    // making a friend function
    friend int operator--(Myclass &temp, int);
    void operator-()
    {
        cout << endl
             << "You want to delte me !!!";
    }
    void print()
    {
        cout << count;
    }
};

// friend function declaration
int operator--(Myclass &temp,int)
{
    cout << "allowed to sub";
    temp.count -= 5;
    return  temp.count;
}

// binary overloading

class Complex
{
    int real;
    int imag;

public:
    // constructor
    Complex(int r, int im) : real(r), imag(im) {}
    void show()
    {
        // this pooints to the address of the object created.
        cout << this;
    }
    void viewNum()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex &other)
    { // passed as reference variable to prevent the overhead of being copied first and then some operations to be done
        int real = this->real + other.real;
        int imag = this->imag + other.imag;
        // also changing the other object value
        other.real++;
        return Complex(real, imag);
    }
};

// using += operator
class Random
{
    int val;

public:
    Random() : val(5) {}
    Random operator+=(Random &other)
    {
        val += other.val;
        // return the value of the same object;
        return *this;
    }

    void showVal()
    {
        cout << endl
             << val;
    }
};

int main()
{

    Complex num1(23, 3);
    Complex num2(3, 4);
    Complex num3 = num1 + num2;
    num3.viewNum();
    num2.viewNum(); // real part ++

    cout << endl;

    Random one;
    Random two;

    one += two;

    one.showVal();

    return 0;
}