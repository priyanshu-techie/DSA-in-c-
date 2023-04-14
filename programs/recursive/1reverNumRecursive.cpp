#include<iostream> 
#include<cmath>

using namespace std; 

int reverseNum(int num){
    if(num/10==0) return num;

    int copy=num,digit=num%10,ans,countOfDigits=0;
    //counting number of digits
    while(copy!=0){
        copy/=10;
        countOfDigits++;
    }
    ans=digit*pow(10,countOfDigits-1) + reverseNum(num/10);
    return ans;
}

int main(){
    int num=3459876;
    int rev=reverseNum(num);
    cout<<rev;
    return 0;
}