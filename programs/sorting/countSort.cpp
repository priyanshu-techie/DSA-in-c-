#include<iostream> 

using namespace std;

// steps : 1. find max
//         2. make countARr[max+1]
//         3. store the count

void countSort(int arr[] ,int size){
    int max = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    int count[max+1];
    for(int i =0 ;i<max+1;i++){
        count[i]=0;
    }
    for(int i = 0 ;i<size;i++){
        count[arr[i]]++;
    }
    int newArr[size];
    int itr=0;
    for(int i =0;i<max+1;i++){
        for(int j=0 ; j<count[i];j++){
            newArr[itr] = i;
            itr++;
        }
    }
    for(int i=0;i<size;i++){
        arr[i]= newArr[i];
    }

}

int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0 ;i<9;i++)   {
        cout<<arr[i]<<" ";
    }
    return 0;
}