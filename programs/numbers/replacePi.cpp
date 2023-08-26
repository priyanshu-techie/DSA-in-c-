#include<iostream> 
#include<string>

using namespace std; 

void repalcePi(string str ){
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='p'&&str[i+1]=='i'){
            string start,mid,end;
            start=str.substr(0,i);
            mid="3.14";
            end=str.substr(i+2);
            str="";
            str+=start;
            str+=mid;
            str+=end;
            i++;i++; // making the pointer i 2+1 places forward as 3.14 has used three spaces
        }
    }
    cout<<str;
    }

int main(){
    string randtext="piisTheNaempipiminditpi";
    repalcePi(randtext);
    cout<<randtext;
    return 0;
}