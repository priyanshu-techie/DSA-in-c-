#include<iostream> 

using namespace std; 

int indexOfFirstRepeatingElem(int *arr,int n){
    int N= 1e6+1;
    int minIndex=INT_MAX;
    int indexStore[N];
    for(int i=0;i<N;i++){
        indexStore[i]=-1;
    }
    for(int i=0;i<n;i++){
       if(indexStore[arr[i]]==-1){
            indexStore[arr[i]]=i;
       }
       else if(indexStore[arr[i]]<minIndex){
            minIndex=indexStore[arr[i]];
       }
    }
    if(minIndex==INT_MAX) return -1;
    return minIndex;
}

int main(){
    int arr[9]={1,2,3,4,5,5,6,3,2};
    int n=indexOfFirstRepeatingElem(arr,9);
    cout<<n;
    return 0;
}