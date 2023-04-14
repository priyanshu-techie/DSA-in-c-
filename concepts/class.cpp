#include <iostream>
#include<string>

using namespace std;

// class animal
// {
//     int age;
// public:
//     animal(int x){
//          age=x;
//     }
//     int showAge(){
//         return age;
//     }

// };
class animal
{
private:
    string name;
public:
    animal(string);

    void walk()
    {
        cout<<name<<" is walking";
    }
    void run(){
        cout<<name<<" is running";
    }
    void stop(){
        cout<<name<<" has stooped";
    }
};

animal::animal(string str)
{
    name = str;
}

int main()
{
    animal first("chimpanzee");
    animal second("monkey");
    first.run();
    cout<<endl;
    second.run();
    return 0;
}