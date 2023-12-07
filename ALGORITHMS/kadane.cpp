#include<iostream> 

using namespace std; 
// algo to find the max sum of a subarray in O(n) complexity
int main(){
    int arr[] = {-1,4,-6,7,-4};
    int currSum =0 , maxSum =  INT_MIN;
    for(int i =0;i<5;i++){
        currSum+= arr[i];
        // if less than 0 make it 0 as a restart
        if(currSum <0) currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    cout<< maxSum;
    return 0;
}