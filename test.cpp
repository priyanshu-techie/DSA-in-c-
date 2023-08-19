#include<iostream> 

using namespace std; 
bool isPrime(int num){
    int half=num/2;
    bool flag=true;
    while(half>1){
        if(num%half==0){
            flag=false;
            break;
        }
        half--;
    }
    return flag;
}

int main(){
    cout<<isPrime(2);
    
    return 0;
}