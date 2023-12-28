#include <iostream>
#include <vector>
// make it a class implementation
using namespace std;
// more effiecint since it doesnt creates new arrays

void swap(int*a, int * b){
    int c = *a ;
    *a = * b;
    *b = c;
}

void quickSort(vector<int> &arr,int startInd, int endInd){
    if((endInd-startInd+1)<2) return;
    int pivot = arr[endInd];
    int left = startInd, right = endInd-1;
    while (left<=right)
    {
        if(arr[left]>pivot && arr[right]<pivot){
            swap(&arr[left],& arr[right]);
            left++;
            right--;
        }
        else{
            if(arr[left]<=pivot) left++;
            if(arr[right]>=pivot) right--;
        }
    }
    swap(&arr[left],&arr[endInd]);
    // pivot is in its correct place
    if(left-1>=0)
        quickSort(arr, startInd, left-1);
    if(left+1<=endInd)
        quickSort(arr, left+1,endInd);
}
int main(){
    vector<int> abc = {33,15,10,4,35,2,6,76,3,0,75,58,2,75,75};
    quickSort(abc,0, abc.size()-1);
    for(int val :abc ){
        cout<<val<<" ";
    }
    return 0;
}