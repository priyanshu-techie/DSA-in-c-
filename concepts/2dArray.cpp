#include<iostream> 

using namespace std;


int main(){
    int arr[2][3];
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==43){
                cout<<"element found at: "<<i<<", "<<j;
                return 0;
            }
        }
    }
    cout<<"Element not found";

    return 0;
}