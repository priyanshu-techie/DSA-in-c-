#include<iostream> 

using namespace std; 

// find the length of biggest word 

int main(){
    string sentence= "hello this is priyanshu agrawal and i love programming.";

    int max = 0,num=0,index=0;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] !=' '){
            num++;
            if(num>max){
                max=num;
                index = i - (num-1);
            }
        }
        else{
            num=0;
        }
    }

    cout<<"Length of biggest word is "<<max<<" and index is "<<index<<endl;

    string ans = "";
    while(index<sentence.length() && sentence[index]!=' '){
        ans += sentence[index]; 
        index++;
    }
    cout<< " largest word is : "<< ans;
    


    return 0;
}