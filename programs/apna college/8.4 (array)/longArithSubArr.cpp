#include<iostream> 

using namespace std; 


int lengthOfLongestArithmeticSubArr(int *arr,int n){
    if(n<=2) return n;
    int prevDiff, diff,count=2,ans=0;
    for(int i=2;i<n;i++){
        prevDiff=arr[i-1]-arr[i-2];
        diff=arr[i]-arr[i-1];
        if(prevDiff==diff){
            count++;
            ans=max(ans,count);
            continue;
        }
        else{
            count=2;
        }
    }
    return ans;


}

int main(){
    int arr[7]={10,7,4,6,8,10,11};
    cout<<lengthOfLongestArithmeticSubArr(arr,7);    
    return 0;
}