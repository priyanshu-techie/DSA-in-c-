#include<iostream> 
using namespace std; 

void doit(){
    static int count=0;
    cout<<endl<<"You have called this function "<<++count<<" times";
}

int main(){
    doit();
    doit();
    doit();
    doit();
    doit();
    doit();
    doit();
    doit();
    doit();
    
    return 0;
}