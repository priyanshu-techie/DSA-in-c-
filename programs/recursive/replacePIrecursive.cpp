#include<iostream> 
#include<string>

using namespace std; 

void replacePi(string str){
// this 👇 wont be corect as i am using for loop without any reason

    // for(int i=0;i<str.length();i++){
    //     if(str[i]=='p'&&str[i+1]=='i'){
    //         cout<<str.substr(0,i)<<"3.14";
    //         replacePi(str.substr(i+2));
    //         break;
    //     }
    // }
    if(str.length()==0)return;
    if(str[0]=='p'&&str[1]=='i'){
        cout<<"3.14";
        replacePi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacePi(str.substr(1));
    }

}

int main(){
    string str="helpijusmpipi";
    replacePi(str);
    return 0;
}