#include<iostream> 

using namespace std; 
int noOfRecordBreakingDays(int * arr, int n){
    if(n==1) return 1;
    int maxi=INT_MIN,ans=0;
    for(int i =0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            if(i!=n-1){
                if(arr[i+1]<arr[i]) ans++;
            }
            else ans++;
        }
    }
    return ans;
}

int main(){
    int arr[8]={1,2,0,7,2,0,2,2};
    cout<<noOfRecordBreakingDays(arr,8);

    return 0;
}