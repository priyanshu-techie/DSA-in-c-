#include<iostream> 

using namespace std; 

// {1,2,3,4,5,6}
// if first two are sorted  then leave teh rest for the recursion to check.

bool isSorted(int arr[],int size){
    if(size==1) return true;
    bool restSorted = isSorted(arr+1, size-1);
    return (arr[0]<arr[1] && restSorted);
}

int main(){
    int arr[]={1,2,4,5,6};
    cout<<isSorted(arr,5);
    return 0;
}