#include<iostream> 

using namespace std; 

class Animal{
        string sec = "secret data";
    protected:
        string name = "golu";
    public:
        void walk(){
            cout<<"I am walking"<<endl;
        }
    void printSecRoot(){
        cout<<sec<<endl;
    }
};

class Dog : protected Animal{
    public:
        void printName(){
            cout<<name<<endl;
        }
};


class Puppy: public Dog{
    public:
        void printPuppyName(){
            cout<<name<<endl;
        }
};

int main(){
    Puppy cute;
    cute.printPuppyName();
    return 0;

}