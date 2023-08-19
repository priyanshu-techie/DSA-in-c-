#include<iostream> 

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

string addBinary(string bin1,string bin2){
    int num1=stoi(bin1,0,2),num2=stoi(bin2,0,2);
    int ans =num1+num2;
    return DtoB(ans);
}


int main(){
    cout << addBinary("110111","1111001");
    return 0;
}