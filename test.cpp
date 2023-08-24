#include<iostream> 

using namespace std; 

int main(){
    int a=0,b=0;
    int at[]={2,3,4,5};
    int bt[]={5,6,7,8};
    at[a++]=bt[b++];
    cout<<a<<" "<<b;
    cout<<endl<<at[0]<<at[1];
    return 0;
}