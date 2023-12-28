#include<iostream> 

using namespace std; 

string moveXs(string str){
    if(str.size()==0) return "";
    for(int i=0;i<str.size();i++){
        string s1,s2;
        if(str[i]=='x'){
            s1 = str.substr(0,i);
            if(i!=str.size()-1)
                s2 = moveXs(str.substr(i+1));
            else 
                s2 = "";
            return s1+s2+'x';
        }
    }
    return str;
}

int main(){
    string str = "xeithxkeyhxkhxxkhx";
    cout<<moveXs(str);
    return 0;
}