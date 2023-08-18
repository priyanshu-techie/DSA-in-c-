#include<iostream> 
#include<string>

using namespace std; 

string DtoB(int deci){
    int rem;
    string bin="",rStr;
    while(deci!=0){
       rem=deci%2;
       rStr=to_string(rem);
       bin=rStr+bin;
       deci/=2;
    }
    return bin;
}
int main(){
    // cout<<DtoB(2482);
    int abc= stoi(DtoB(2482),0,2);
    cout<<abc;
    return 0;
}