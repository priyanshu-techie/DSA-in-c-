#include<iostream> 

using namespace std; 

int main(){
    //7=00000111 5=00000101 9=00001001
    int a =7, b=5,c=9;
    cout<<(a&b);
    cout<<endl<< (a|b);
    cout<<endl<< (~c);
    cout<<endl<< (c<<1);
    cout<< endl<< (c>>1);
    cout<<endl<<c;
    return 0;
}