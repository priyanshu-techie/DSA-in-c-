#include<iostream> 

using namespace std; 

bool checkPyTriplet(int a , int b ,int c){
    int m=max(a,max(b,c));
    // if a is max
    if(a==m){
        return a*a == b*b + c*c;  
    }
    else if(b==m){
        return b*b == c*c + a*a;
    }
    else{
        return c*c == a*a + b*b;
    }
}

int main(){
    cout<<checkPyTriplet(3,4,6);
    return 0;
}