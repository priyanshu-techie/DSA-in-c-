#include<iostream> 

using namespace std; 



int main(){
    int n =5;
    int sum=11;
    int arr[n]={3,2,5,4,1};

    for(int i =0;i<n;i++){
        int sumOfSubArray=0;
        for(int j=i;j<n;j++){
            sumOfSubArray+=arr[j];
            cout<<sumOfSubArray<<endl;

            // to get the indexes 👇👇
            // if(sumOfSubArray==sum){
            //     cout<<i <<" "<<j;
            //     return 1;
            // }
        }
        cout<<endl;
    }
    return 0;
}