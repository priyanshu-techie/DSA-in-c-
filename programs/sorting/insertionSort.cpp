#include<iostream> 

using namespace std; 

void insertionSort(int * arr, int size){
    int current, j;
    for(int i =1;i<size;i++){
        current= arr[i];
        j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main(){
    int abc[8]={12,13,45,23,64,1,444,23};
    insertionSort(abc,8);

    for(int i =0;i<8;i++){
        cout<<abc[i]<<" ";
    }
    
    return 0;
}