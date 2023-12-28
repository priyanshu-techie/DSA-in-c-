#include<iostream> 

using namespace std; 


//given a rectangular plot find the square of the largest side that can cover the whoole plot

int smallestSquare(int len, int bred){
    int l , b ; // l should be bigger than b
    if(len<bred){ l= bred; b= len;}
    else{l=len;b=bred;}
    int rem = l%b;
    if(rem==0) return b;
    int small = smallestSquare(b,rem);
    return small;
}

int main(){
    cout<<smallestSquare(1680,640);
    return 0;
}