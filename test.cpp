#include<iostream> 

using namespace std; 

int * hj(){
    int * arr = new int[6];
    return arr;
}

int main(){
    int *abc=hj();
    abc[0]=6;
    abc[1]=5;
    abc[2]=4;
    abc[3]=2;
    abc[4]=3;
    abc[5]=1;
    abc[6]=1;
    for(int i =0;i<7;i++){
        cout<<abc[i]<<", ";
    }
    return 0;
}