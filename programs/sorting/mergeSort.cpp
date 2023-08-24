#include <iostream>

using namespace std;

void merge(int *arr, int low, int mid, int high)
{
    int *tempArr = new int[high + 1];
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
    int ar[4]={32,5,33,2};
    mergeSort(ar,0,3);
    for(int i =0;i<4;i++){
        cout<< ar[i]<<" ";
    }
    return 0;
}