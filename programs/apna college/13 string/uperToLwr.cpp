#include<iostream>
#include<algorithm>

using namespace std; 

int main(){
    string abc = "BabcdEfg";

    // for(int i=0 ;i<abc.size();i++){
    //     // if is lower case
    //     if(int(abc[i])>=97 && int(abc[i])<123){
    //         int temp = int(abc[i]) - 32;
    //         abc[i]= char(temp);
    //     }
    // }

    // cout<< abc;

    // in built fucntins

    transform(abc.begin(),abc.end(),abc.begin(),::toupper);
    cout<<abc;

    return 0;
}