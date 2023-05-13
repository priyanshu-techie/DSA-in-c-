#include<iostream>
#include<string> 

using namespace std; 
class Random
{ 
public:
    string name;
    static int count; // yaha pe initialise nii kar skte, kyuki aise to har bar when we reinstantiate the obj, we will make the count varialbel 0
    //constructor👇👇
    Random(string name){
        this->name=name;
        count++;
    }
    int countOg=0; 
    // static functions are the ones that can be used withot initialising an object, they are the functions of a class
    // static functions can only use static variables of the class
    static void showCount(){
        cout<<"No of objects made is "<<count<<endl;
        // cout<<countOg;
        //👆this will not work
    }
};
// count is for the whole class and not for every object
int Random::count; // it is by default equal to 0



int main(){
    Random shit("abhijeet");
    cout<<shit.name<<endl;
    Random::showCount();

    Random hit("pradeep");
    cout<<hit.name<<endl;
    Random::showCount();
    
    Random it("preeti");
    cout<<it.name<<endl;
    Random::showCount();

    return 0;
}