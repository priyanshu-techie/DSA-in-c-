#include<iostream> 

using namespace std; 

void sumOfSubArrays(){
    int n =4;
    int sum=11;
    int arr[n]={-1,4,7,2};

    for(int i =0;i<n;i++){
        int sumOfSubArray=0;
        for(int j=i;j<n;j++){
            sumOfSubArray+=arr[j];
            cout<<sumOfSubArray<<endl;
        }
        cout<<endl;
    }
}

void indexOfSum(){
    int n =4;
    int sum=11;
    int arr[n]={-1,4,7,2};

    for(int i =0;i<n;i++){
        int sumOfSubArray=0;
        for(int j=i;j<n;j++){
            sumOfSubArray+=arr[j];

            // to get the indexes 👇👇
            if(sumOfSubArray==sum){
                cout<<i <<" "<<j;
            }
        }
        cout<<endl;
    }
}
 void maxSumFromSubArr(){
    int n =7;
    int arr[n]={5,-1,4,-6,7,5,-4};
    int maximum= INT_MIN;

    for(int i =0;i<n;i++){
        int sumOfSubArray=0;
        for(int j=i;j<n;j++){
            sumOfSubArray+=arr[j];
            // to get the max sum 👇👇
            maximum= max(sumOfSubArray,maximum);
        }
        cout<<endl;
    }
    cout<<maximum;
 }

 void maxSumFromSubArr_O_n_timeComplexity(){
    // KADANE'S ALGORITHM 
    int n=5;
    int arr[n]={-1,4,-6,7,-4};
    int currentSum=0;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        maximum=max(maximum,currentSum);
        // if current sum is less than 0 then instead of increasing it will decrease the further current sums, hence it should be changed to 0
        if(currentSum<0)
            currentSum=0;
    }
    cout<<maximum;
    // time complexity O(n);
 }



int main(){
    // maxSumFromSubArr_O_n_timeComplexity();
    maxSumFromSubArr();
    return 0;
}