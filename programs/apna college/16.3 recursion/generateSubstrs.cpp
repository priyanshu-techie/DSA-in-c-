#include<iostream> 

using namespace std; 
// tutorial = https://youtu.be/j9RG18jfnRY?si=TQ2LgcGfFMoj72hv&t=1280


void generateSubs(string str, string ans){
    if(str.length()==0){
        cout<<ans<<"\n";
        return;
    }
    char first = str[0];
    string ros = str.length()>1?str.substr(1):"";
    generateSubs(ros,ans);
    generateSubs(ros,first+ans);

}

int main(){
    generateSubs("abc","")   ;
    return 0;
}