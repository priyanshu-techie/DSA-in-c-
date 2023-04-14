#include <iostream>

using namespace std;

void merge(int *arr, int low, int mid, int high)
{
    // if we have two sorted arrays we will need two pointers one on low upto mid-1 and second from mid to high
    int ptr1 = low, ptr2 = mid;
    while (ptr1 < mid && ptr2 <= high)
    {
        if (arr[ptr1] < arr[ptr2])
        {
            ptr1++;
            continue;
        }
        if (arr[ptr1] > arr[ptr2])
        {
            int copy = arr[ptr1];
            arr[ptr1] = arr[ptr2];
            arr[ptr2] = copy;
            ptr2++;
            continue;
        }
        if(arr[ptr1]==arr[ptr2]){
            ptr1++;
            continue;
        }
    }
}

void mergeSort(int *arr, int low, int high)
{
    int mid;
    {
    int sum = low + high;
    if (sum % 2 == 0)
        mid = sum / 2;
    else
        mid = (sum + 1) / 2;
    }
    if (low != high)
    {
        mergeSort(arr, low, mid - 1);
        mergeSort(arr, mid, high);
    }
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {32, 23, 55, 6, 1, 66};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ,";
    }
    return 0;
}