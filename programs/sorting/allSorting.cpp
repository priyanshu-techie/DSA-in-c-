#include<iostream> 
#include<vector>
using namespace std; 
void swap(int *a, int *b)
{
    int c = * a;
    *a =*b;
    *b = c; 
}

void bubbleSort(vector<int>&vec){
    int end = vec.size() -1;
    while(end>0){
        for(int i=0; i<end; i++){
            if(vec[i]>vec[i+1]){
                swap(&vec[i],&vec[i+1]);
            }
        }
        end--;
    }
    
}
void insertionSort(vector<int>&vec){
    int end =1, size = vec.size();
    while(end<size){
        for(int i=end; i>=1; i--){
            if(vec[i]<vec[i-1]){
                swap(&vec[i],&vec[i-1]);
            }
        }
        end++;
    }
}

int main(){
    vector<int> abc = {12,5,35,78,32,8,2,4,1};
    // bubbleSort(abc);
    insertionSort(abc);
    for(int val : abc){
        cout<<val <<" ";
    }                
    return 0;
}