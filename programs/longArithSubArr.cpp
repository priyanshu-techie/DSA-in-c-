#include<iostream> 
#include<vector>

using namespace std; 

int maxElem(vector<int> abc){
    int max= INT_MIN;
    for(int i=0;i<abc.size();i++){
        if(abc[i]>max) max=abc[i];
    }
    return max;
}

int lengthOfLongestArithmeticSubArr(int *arr,int n){
    if(n<=2) return n;
    int prevDiff, diff,count=2;
    vector<int> maxL;
    for(int i=2;i<n;i++){
        prevDiff=arr[i-1]-arr[i-2];
        diff=arr[i]-arr[i-1];
        if(prevDiff==diff){
            count++;
            continue;
        }
        else{
            maxL.push_back(count);
            count=1;
        }
    }
    maxL.push_back(count);
    return maxElem(maxL);


}

int main(){
    int arr[7]={1,1,1,1,1,1,1};
    cout<<lengthOfLongestArithmeticSubArr(arr,7);    
    return 0;
}