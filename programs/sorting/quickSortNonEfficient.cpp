#include<iostream> 
#include<vector>

using namespace std; 

// non efficient because i will be creating a new arrray in each recursive call

void quickSortNonEfficint(vector<int> & arr){
    if(arr.size()<2) return;
    vector<int>left ,right;
    int pivot = arr[arr.size()-1];// last elem
    for(int i = 0 ; i < arr.size()-1 ;i++){ // loop till second last elem
        if(arr[i]<=pivot) left.push_back(arr[i]); 
        if(arr[i]>pivot) right.push_back(arr[i]);
    }
    // got the left and right , now i want left and right arrs to be sorted
    quickSortNonEfficint(left);
    quickSortNonEfficint(right);
    // both are now sorted
    left.push_back(pivot);
    int i,k=0;
    for(i=0;i<left.size();i++){
        arr[i]= left[i];
    }
    for(i;i<arr.size();i++){
        arr[i]= right[k++];
    }
    left.clear();
    left.shrink_to_fit();
    right.clear();
    right.shrink_to_fit();    
}

int main(){
    vector<int>abc = {33,15,10,4,35,2,6,76,3,0,75,58,2,75};
    quickSortNonEfficint(abc);
    for(int val : abc){
        cout<<val<<" ";
    }
    return 0;
}