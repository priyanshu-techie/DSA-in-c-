#include<iostream> 

using namespace std; 
int notRecFact(int n){
    int ans = 1;
    while(n!=1){
        ans*=n;
        n--;
    }
    return ans;
}
int fact(int num){
    if(num<=1) return 1;
    return num* fact(num-1);
}

int main(){
    cout<<fact(15);
    cout<<notRecFact(15);
    return 0;
}