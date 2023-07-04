#include<iostream> 

using namespace std; 

class Mammal
{
public:
    void walk(){
        cout<<"I can walk"<<endl;
    }
};
class Winged{
    public:
        void walk(){
            cout<<"I can fly";
        }
};
class Bat:public Mammal, public Winged {};

int main(){
    Bat b1;
    b1.Winged::walk();
    return 0;
}