#include<iostream> 

using namespace std; 

class Employee{
    public:
        // string name;
        // string dob;
        // Employee(string nm,string db){
        //     name=nm;
        //     dob=db;
        // }   
        void walk(){
            cout<<" is walking";
        }
        void birth(){
            cout<<" was born on ";
        }
};

class Programmer:public Employee{
    public:
        void code(){
            cout<<" is coding";
        }
};

int main(){
    Programmer nitu;

    nitu.birth();
    nitu.code();

    

    return 0;
}