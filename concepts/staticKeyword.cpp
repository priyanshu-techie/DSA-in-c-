#include<iostream> 
#include<string>

// static is used to initialse a variable only once and doest reinitialise in every instance of a class
using namespace std; 
class animal{
    public:
    static int count;
    string name;

    animal(string nm){
        this->name=nm;
        count++; 
    }
    // this is a constructor fuction, it is automatically called whenever a class is instantiated.
    
    void run(){
        cout<<this->name<<" is running";
    }
};

int animal::count=0;// count variable in the scope of animal, make it zero

int main(){
    
    animal monkey("bandar"),lion("samsher");
    monkey.run();
    cout<<endl<<"the count is "<<animal::count;
    return 0;
}


