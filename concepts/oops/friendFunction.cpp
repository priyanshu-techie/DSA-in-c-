#include<iostream> 

using namespace std; 

class Distance{
    private:
        int meter;
        friend int increase(Distance & temp);
    public:
        Distance():meter(0){}
        void show(){
            cout<<meter<<endl;
        }
};

int increase(Distance &temp){
    temp.meter+=5;
    return temp.meter;
}

// operator overloading is used to add values of two objects of the same class
// friend function to add values of two classes 

// initializing class B first 

class B;

class A{
    private:
     int valA;
    public:
        A(){valA=45;}
        friend int add(A & copyA, B &copyB);
};

class B{
    private:
     int valB;
    public:
        B(){valB=36;}
        friend int add(A & copyA, B &copyB);
};

int add (A & copyA, B & copyB){
    return copyA.valA+copyB.valB;
}

int main(){
    // Distance d1;
    // d1.show();
    // increase(d1);
    // d1.show();


    A a1; B b1;

    cout<< add(a1,b1);
    return 0;
}