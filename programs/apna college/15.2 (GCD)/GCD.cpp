#include<iostream> 

using namespace std; 

int gcd(int a, int b){
    int small, big;
    if(a>b){ small = b; big= a;}
    else{ small = a; big = b;}
    int rem = big%small;
    while(rem!=0){
        big = small;
        small = rem ;
        rem = big%small;
    }
    return small;
}


int main(){
    cout<<gcd(42,24);
    return 0;
}