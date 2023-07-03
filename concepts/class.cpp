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

// you can also initialise the variables by writing the variables in this way

// animal(string str, int age):name(str),age(age){}s


int main()
{
    animal first("chimpanzee");
    animal second("monkey");
    first.run();
    cout<<endl;
    second.run();
    first.stop();
    return 0;
}