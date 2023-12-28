#include <iostream>

using namespace std;


// c version of the code (cpp version below)
void merge(int *arr, int low, int mid, int high)
{
    int *tempArr = new int[high- low + 1];
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] > arr[j])
        {
            tempArr[k++] = arr[j++];
            // k++; j++;
        }
        else
        {
            tempArr[k++] = arr[i++];
            // k++; i++;
        }
    }
    while (i <= mid)
    {
        tempArr[k++] = arr[i++];
    }
    while (j <= high)
    {
        tempArr[k++] = arr[j++];
    }
    k=0;
    for(i=low;i<=high;i++){
        // since we can be at any part of the array hence i = low , but we always want tempArr 0th index hence k=0
        arr[i]=tempArr[k];
        k++;
    }
    delete[] tempArr;

}

void mergeSort(int *arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    if(low!=high)
        merge(arr, low, mid, high);
}

int main()
{
    int ar[7]={7,5,2,1,6,3,8};
    mergeSort(ar,0,6);
    for(int i =0;i<7;i++){
        cout<< ar[i]<<" ";
    }
    return 0;
}


// cpp version of the code using vectors

// #include<iostream> 
// #include<vector>

// using namespace std;

// void merge(vector<int>&arr,int start, int mid , int end){
//     vector<int>temp(end-start+1);
//     int i=start,j=mid+1,k=0;
//     while (i<=mid&&j<=end)
//     {
//         if(arr[i]<arr[j]) temp[k++]= arr[i++];
//         else temp[k++] = arr[j++];
//     }
//     while (i<=mid)
//     {
//         temp[k++]= arr[i++];
//     }
//     while (j<=end)
//     {
//         temp[k++] = arr[j++];
//     }
//     k = 0;
//     for(int i=start;i<=end;i++){
//         arr[i]=temp[k++];
//     }
//     // destroy the temp vector 
//     temp.clear();
//     temp.shrink_to_fit();
// }

// void mergeSort(vector<int> &arr, int start , int end){
//     if(start==end) return;
//     int mid = (start + end)/2;
//     mergeSort(arr,start, mid);
//     mergeSort(arr,mid+1,end);
//     merge(arr,start,mid,end);
    
// }

// int main(){
//     vector<int> abc = {3,2,1,7,6,12,0,-7,45,9};
//     mergeSort(abc,0,abc.size()-1);
//     for(int val: abc){
//         cout<<val<<" ";
//     }
//     return 0;
// }