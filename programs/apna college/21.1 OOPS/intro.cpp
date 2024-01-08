#include<iostream> 

using namespace std; 

class Intro{
    public:
        string name;
        int age;
        char gender;

        // default constuctor 
        Intro(){
            this->name = "priyanshu ";
            this->age = 22;
            this->gender = 'm';
        }
        // parameterised connstructor
       Intro(string name, int age, char gender){
        this->name = name;
        this->age = age;
        this->gender = gender;
       }
       // copy constructor
        Intro(const Intro &sourceObj){
            this->name= sourceObj.name;
            this->age = sourceObj.age;
            this->gender = sourceObj.gender;
        }

       // destructor 
       ~ Intro (){
            cout<<endl<<"Destructor called for "<<this->name;
       }
        void printInfo(){
            string a;
            if(gender=='m') a = "I am a Male dog.";
            else a = "I am a Female bitch.";
            cout<<"Hello this is "<<name<<" i am "<<age<<" years old."<<a<<endl;
        }
};




int main(){
    Intro a, b("priya",21,'f');
    a.printInfo();
    b.printInfo();
    Intro c = a;
    c.printInfo();
    c.name = "rohit";
    c.printInfo();
    a.printInfo();
    return 0;
}