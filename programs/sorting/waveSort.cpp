#include<iostream> 

using namespace std; 

void swap(int* a, int * b){
    int c =*a ;
    *a =*b;
    *b = c;
}
// arrange the elems in a wave like pattern such that mid is smaller than its sides

void waveSort(int arr[],int size){
    int i =1;
    while(i<size){
        if(arr[i-1]<arr[i]){
            swap(&arr[i-1],&arr[i]);
        }
        if(i+1<size && arr[i+1]<arr[i]){
            swap(&arr[i+1],&arr[i]);
        }
        i+=2;
    }
}

int main(){
    int arr[] = {1,3,4,7,5,6,2};
    waveSort(arr,7);
    for(int i=0 ;i<7;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}