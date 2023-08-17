#include<iostream> 

using namespace std; 

int main(){
    int i, j, k;
    for(i=1;i<=5;i++){
        // for space 
        for(j=5-i;j>0;j--){
            cout<<" ";
        }
        // for reverse number
        for(k=i;k>=1;k--){
            cout<<k;
        }
        // for forward number
        for(k=2;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    
    return 0;
}