#include<iostream> 

using namespace std; 

void swap(int *a , int *b ){
    int c =*a;
    *a=*b;
    *b=c;
}

void bubbleSort(int * arr, int s){
    int size=s;
    while(true){
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }
        size--;
        if(size==1) 
            break;
    }
    for(int i =0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={2,32,4,34,12,10,87,9,8,56};
    bubbleSort(arr,10);
    return 0;
}