#include<iostream> 

using namespace std; 
int swapCount= 0;

void swap(int *a , int *b ){
    int c =*a;
    *a=*b;
    *b=c;
    swapCount++;
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
}

int main(){
    // taking input 
    int N;
    cin>>N;
    int arr[N];
    for(int i=0 ;i<N;i++){
        cin>>arr[i];
    }
    int decsending[N], k=0;
    for(int i =N -1 ;i>=0;i--){ decsending[k]=arr[i]; k++;}

    // bubble sort acending arr 

    bubbleSort(arr,N);
    int acendingSwaps = swapCount;
    swapCount=0;
    bubbleSort(decsending,N);
    int decsendingSwaps = swapCount;

    if(acendingSwaps<decsendingSwaps) cout<<acendingSwaps;
    else cout<<decsendingSwaps;

    return 0;
}