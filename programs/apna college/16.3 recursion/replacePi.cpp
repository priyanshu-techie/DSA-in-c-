#include<iostream> 

using namespace std; 


string changePi(string str){
    for(int i =0 ;i<str.size();i++){
        if(i!=str.size()-1 && str[i]=='p' && str[i+1]=='i'){
            //starting part of the string
            string s1 = str.substr(0,i);
            string s2;
            // if "pi" is the last two chars, check it
            if(i+2<str.size())
                s2 = changePi(str.substr(i+2));
            else
                s2 ="";
            return s1+"3.14"+ s2;
        }
    }
    // if no 'pi' found return the string as it is
    return str;
}

int main(){
    string str = "pippxxppiixipipipiabc";
    cout<<changePi(str);
    return 0;
}
