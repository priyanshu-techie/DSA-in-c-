#include<iostream> 

using namespace std; 
class Animal{
    protected:
        void slay(){
            cout<<"I can slay my prey";
        }
    public:
        void eat(){
            cout<<"I can eat!";
        }
        void walk(){
            cout <<"I can walk ";
        }
};
class Mammal:protected Animal{ // protected makes the public and protected members as protected;
    // ITS LIKE
    // protected:
    //     void slay(){
    //         cout<<"I can slay my prey";
    //     }
    //     void eat(){
    //         cout<<"I can eat!";
    //     }
    //     void walk(){
    //         cout <<"I can walk ";
    //     }
    public:
        void milk(){
            cout<<"I can give milk??";
            
        }
        void hungry(){
            cout<<"I am hungry"<<endl;
            // protected members are inherited
            slay();
        }

};
// inhering the protected members of the above derived class, they will be private in the panthera class
class panthera:public Mammal{ // public makes the public members public and protected members protected
    public:
        void doSomPrivateJob(){
            slay(); 
            eat();
            walk();
        }
        void doSomePublicJob(){
            milk();
        }
};

int main(){
    Animal doggie;
    Mammal lion;
    panthera tigris;
    // private and protected members are inaccessible outside the class
    // but protected members are inherited in the derived class as private member
    lion.hungry();

    // lion.eat(); // error protected memmber cant be accesible by object
    
    tigris.doSomPrivateJob();
    tigris.milk();
    
    return 0;
}