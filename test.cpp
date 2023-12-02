#include<iostream> 
#include<unordered_map>

using namespace std; 

int main(){
    // hash map immplementation:


    // int arr[7] = {1,5,3,4,3,5,6};
    // int min = INT_MAX;
    // unordered_map<int, int> umap;
    // for(int i=0;i<7;i++){
    //     if(umap[arr[i]]==0){// elem not found
    //         umap[arr[i]]= i+1;
    //     }else{// elem reapeted
    //         min>umap[arr[i]]? min = umap[arr[i]] : min = min;
    //     }
    // }
    // cout<<min;
    // return 0;


    // array implementation
    int arr[7] = {1,5,3,4,3,5,6};
    int temp[1000002];
    int min = INT_MAX;
    for(int  i =0; i<1000002;i++){
        temp[i] =-1;
    }
    for(int i=0;i<7;i++){
        if(temp[arr[i]]==-1){
            temp[arr[i]] = i+1;
        }
        else{
            min>temp[arr[i]]? min = temp[arr[i]]:min =min;
        }
    }
    cout<<min;
    return 0;
}