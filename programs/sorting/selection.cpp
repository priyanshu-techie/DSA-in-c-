#include<iostream> 

using namespace std; 

void swap(int *a , int *b ){
    int c =*a;
    *a=*b;
    *b=c;
}

void selectionSort(int * arr, int size){
    int i,j, smallest=INT_MAX, s_index;
    for(i=0;i<size;i++){
        smallest=INT_MAX;
        for(j=i;j<size;j++){
            if(arr[j]<smallest){
                smallest=arr[j];
                s_index=j;
            }
        }
        swap( & arr[i],& arr[s_index]);
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[14]={15,7,3,14,11,5,12,12,56,33,23,11,678,4};
    selectionSort(arr,14);
    return 0;
}