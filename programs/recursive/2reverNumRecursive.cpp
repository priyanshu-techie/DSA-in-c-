#include<iostream>
using namespace std;

int reverseNum(int n){
    static int reverse = 0;
    if(n==0){
        return reverse;
    }
    reverse=reverse * 10 + n%10;
    return  reverseNum(n/10);
}

int main(){
    int reverse = reverseNum(5676567);
    cout << reverse<<endl;
}