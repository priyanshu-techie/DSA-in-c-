#include<iostream> 
#include<vector>

using namespace std; 

int fiboNoDP(int num){
    // it gives the nth fibonacci number
    if(num <= 1 ) return num;
    return fiboNoDP(num-1)+fiboNoDP(num-2);
}

int fiboWithDP(int num){
    // create an array to store the values of f(n) 
    static vector<int> memoization(num+1, -1);
    if(num <= 1 ){
        memoization[num] = num;
        return num;
    }
    // to find the val of fibo(n) i need fibo(n-1) and fibo(n-2)
    // check in the arr if i already have the nums
    // else go to the recurssion route
    int a,b;
    if(memoization[num-1] == -1 ) a = fiboWithDP(num-1);
    else a = memoization[num-1];
    if(memoization[num-2] == -1) b = fiboWithDP(num-2);
    else b = memoization[num-2];

    // saving the val
    int fiboOfNum = a+b;
    memoization[num] = fiboOfNum;

    return fiboOfNum;

}

int main(){
    cout<<fiboWithDP(8);
    return 0;
}