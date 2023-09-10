#include<iostream> 
// sort STL is included in algorithms header file
#include<algorithm>

using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort takes  two arguments, one is the starting pointer, and next is the pointer just after the end of the array
    // sort(arr,arr+n);

    // if you give a different index in the first then soting will start from that index
    sort(arr+2,arr+n);

    // for vectors we need to do this
    // if vec is an int vector
    // sort(vec.begin(),vec.end());

    cout<<endl<<"Sorted Array is :";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}