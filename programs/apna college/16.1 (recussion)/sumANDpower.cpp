#include<iostream> 

using namespace std; 

int sum(int n ){
    if(n <=1) return n;
    return n+sum(n-1);
}

int power(int n , int pow ){
    if(pow==0) return 1;
    return n*power(n,pow-1);
}

int main(){
    cout<<sum(50);
    cout<<endl<<power(2,4);
    return 0;
}