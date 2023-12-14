#include<iostream> 

using namespace std;

void noRecfibo(int n){
    cout<<0<<", "<<1;
    int a = 0, b = 1; 
    while(n-2>0){
        int sum = a+b;
        a = b;
        b= sum;
        cout<<", "<<sum;
        n--;
    }
}

int main(){
    noRecfibo(10);
    return 0;
}