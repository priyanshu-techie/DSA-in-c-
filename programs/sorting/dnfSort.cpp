#include<iostream> 

using namespace std; 

void swap(int* a, int * b){
    int c =*a ;
    *a =*b;
    *b = c;
}

// apna college vid for explaination
// use to sort if there are only three types of elems in the array. For example 0,1 & 2.

void dnfSort(int arr[], int size){
    // start low and mid at 0, high at end 
    // if arr[low] == 1 mid++;
    // if 0 swap with low and low++ and mid++
    // if 2 then swap and high --
    // loop untill mid<high
    int mid=0,low=0,high= size-1;
    while (mid<high)
    {
        if(arr[mid]==1) mid++; 
        else if(arr[mid]==0){
            swap(&arr[mid],& arr[low]);
            mid++;
            low++;
        } 
        else{
            swap(&arr[mid],&arr[high]);
            high--;
        }
        
    }
    
}

int main(){
    int arr[] = {0,2,1,0,0,2,0,1,0,2,0,1,1,1,2,2,0,0,0,0}  ;
     dnfSort(arr, 20);
     for(int i=0 ;i<20;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}