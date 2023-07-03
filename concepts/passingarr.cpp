#include<iostream> 

using namespace std; 

void print(int arr[5]){
    for(int i=0;i<5;i++){
        cout<< endl<< arr[i];
    }
}

int main(){
    int arr[6]={34,53,23,56,23,485};
    print(arr);
    return 0;
}