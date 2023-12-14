#include<iostream> 

using namespace std; 
void revString(string s){
    if(s=="") return;
    revString(s.substr(1));
    cout<<s[0];

}

int main(){
    string ac = "hello";
    revString(ac);
    return 0;
}