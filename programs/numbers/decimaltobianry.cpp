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
string DtoO(int deci){
    int rem;
    string octal="",rStr;
    while(deci!=0){
       rem=deci%8;
       rStr=to_string(rem);
       octal=rStr+octal;
       deci/=8;
    }
    return octal;
}

string DtoHex(int deci){
    int rem;
    char hexArr[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hex="";
    while(deci!=0){
        rem=deci%16;
        hex=hexArr[rem]+hex;
        deci/=16;
    }
    return hex;
    
}

int main(){
    // cout<<DtoB(2482);
    // int abc= stoi(DtoB(2482),0,2);
    // cout<<abc;
    cout<<DtoHex(896);
    return 0;
}