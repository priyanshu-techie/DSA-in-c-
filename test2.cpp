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
    monkey.run();
    cout<<endl<<"the count is "<<animal::count;
    return 0;
}