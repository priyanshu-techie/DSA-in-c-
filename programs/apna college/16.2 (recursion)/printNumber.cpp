#include<iostream> 

using namespace std; 

void printNumDescend(int n){
    if(n<1){ cout<<0<<" "; return;}
    cout<<n<<", ";
    printNumDescend(--n);
}

//using static variable, loop jisa hi ho gaya but 
// void printNumAscend(int n){
//     static int a = 1  ;
//     cout<<a<<", ";
//     a++;
//     if(a>n) return;
//     printNumAscend(n);
// }


// normal recursion
void inc(int n){
    if(n <= 1){cout<<1<<", "; return;}
    inc(n-1);
    cout<<n<<", ";
}

int main(){
    // printNumDescend(20);
    // printNumAscend(20);
    inc(20);
    return 0;
}