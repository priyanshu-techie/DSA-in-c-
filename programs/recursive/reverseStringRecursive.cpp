#include<iostream>
#include<string> 

using namespace std; 

string revereString(string str){
    if(str.length()==1)return str;
    string rev="";
    char letter= str[str.length()-1];
    rev+=letter;
    string remaing="";
// c++ style 👇
    // str.pop_back();

/* c style 👇*/
    for(int i=0;i<str.length()-1;i++){
        remaing+=str[i];
    }
    rev+=revereString(remaing);
    // rev+=revereString(str);
    return rev;
    
}


int main(){
    string name="jhamela apne atse  ";
    cout<<revereString(name);
    return 0;
}

