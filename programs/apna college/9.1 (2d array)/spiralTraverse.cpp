#include<iostream> 

using namespace std; 

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int row_s=0, col_s=0, row_e=4, col_e=4;

    while(row_s<=row_e&&col_s<=col_e){
        for(int i=col_s;i<=col_e;i++){
            cout<<arr[row_s][i]<<", ";
        }
        cout<<endl;
        row_s++;
        for(int i=row_s;i<=row_e;i++){
            cout<<arr[i][col_e]<<", ";
        }
        cout<<endl;
        col_e--;
        if(row_s<=row_e){
            for(int i=col_e;i>=col_s;i--){
                cout<<arr[row_e][i]<<", ";
            }
        }
        cout<<endl;
        row_e--;
        if(col_s<=col_e){
            for(int i=row_e;i>=row_s;i--){
                cout<<arr[i][col_s]<<", ";
            }
        }
        cout<<endl;
        col_s++;
    }

    return 0;
}