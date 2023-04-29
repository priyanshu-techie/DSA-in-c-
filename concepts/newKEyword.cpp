#include<iostream> 
#include<string>

using namespace std; 
class animal{
    public:
    static int count;
    string name;

    animal(){
        count++;
    }
    void setName(string raju){
        this->name=raju;
    }
    void run(){
        cout<<name<<" is running";
    }
};

int animal::count=0;

int main(){
    
    animal monkey,lion;
    monkey.setName("bandar");

    // agar ek class bna ke ek variable me store karna h then class name ke baad variable ka naam likh do
    // aur agar ek pointer to the instance of the class me rakhna hai then below 👇👇    
    animal * pointer =new animal ;
    cout<< pointer;
    return 0;
}