#include<iostream> 

using namespace std; 

int singleNonDupLinearSearch(int *arr,int size){
    for(int i =0;i<size;i++){
        if(arr[i]==arr[i+1])
            {
                i++;
                continue;
            }
        else return arr[i];
    }
    return -1;
}

int main(){
    int arr[]={1,2,2,3,3,4,4,5,5,6,6,7,7};
    int a = singleNonDupLinearSearch(arr, 12);
    cout<<a;
    return 0;
}