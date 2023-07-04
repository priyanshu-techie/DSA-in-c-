#include <iostream>

using namespace std;
class Cin
{
public:
    int val;
    Cin() : val(1) {}
    friend void operator-(Cin &temp);
    friend void showVal(Cin temp);
};
void operator -(Cin &temp)
{
    cout << "You are trying to subtract"<<endl;
    temp.val--;
}
void showVal(Cin temp){ 
    cout<<temp.val<<endl;
}
int main()
{
    Cin abc;
    showVal(abc);
    -abc;
    showVal(abc);


    return 0;
}