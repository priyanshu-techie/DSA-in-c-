#include<iostream> 

using namespace std; 

int main(){
    int arr[5]={2,3,7,5,11};
    for(int i =0;i<5;i++){
        for(int k=i;k<5;k++){
            for(int j=i;j<=k;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
    return 0;
}