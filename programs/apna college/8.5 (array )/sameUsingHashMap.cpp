#include<iostream> 
#include<unordered_map>
#include<vector>

using namespace std; 

int minIndexOfFirstRepeatingElem(int *nums,int size){
    // logic
    /* 
        * loop through the nums array, take 1 as starting index as if theres no val then map stores it 0
        * store the index of the elems which first encountered. Ex- {num:index}
        * if elem repeate then push the first index in an  ansArray
        * loop through the ansArray and find the minimum
    */
    if(size<=1) return -1;
    unordered_map<int, int> traker;
    vector<int> ansArr;
    for(int i =0;i<size;i++){
        if(traker[nums[i]]==0){
            traker[nums[i]]=i+1;
        }
        else{
            ansArr.push_back(traker[nums[i]]); // push the index if it existed before
        }
    }
    int min=INT_MAX;
    for(int i=0;i<ansArr.size();i++){
        if(ansArr[i]<min) min=ansArr[i];
    }
    if(min==INT_MAX) return -1;
    else return min-1;
}

int main(){
    int arr[9]={1,7,3,4,3,5,6,4,5};
    cout<<minIndexOfFirstRepeatingElem(arr,9);

    return 0;
}
