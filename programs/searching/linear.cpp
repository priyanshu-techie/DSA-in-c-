#include<iostream> 

using namespace std; 
int linerSearch(int *arr,int n, int target){
    for(int i =0;i<n;i++){
        if(arr[i]==target) 
            return i;
    }
    return -1;
}

int main(){
    cout<<"enter the size of the array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elems"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"enter your target elelm";
    int target;
    cin>> target;
    int ind= linerSearch(arr,n,target);
    cout<<"the index of the eleme is :"<<ind;

    return 0;
}