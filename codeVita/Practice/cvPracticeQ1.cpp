#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>

// QUESTION LINK : https://youtu.be/sq1I9imzp4Q?si=6D1CjoqgHVJe1qWn&t=180
using namespace std; 

string doit(string P, string S){
    string ans = "";
    vector<int> indexStore;
    for(int i =0 ;i < S.size();i++){
        for(int j=0 ;j<26; j++){
            if(P[j]==S[i]){
                indexStore.push_back(j);
            }
        }
    }
    // got the list of indexes , now lets sort it;
    sort(indexStore.begin(),indexStore.end());
    for(int i =0 ;i<indexStore.size();i++){
        ans+= P[indexStore[i]];
    }

    return ans;
}

int main(){
    int T; cin>>T;
    string ans[T];
    for(int i =0 ;i<T ;i++){
        string P,S;
        cin>>P; cin>>S;
        ans[i] = doit(P,S);
    }
    for(int i =0 ;i <T ;i++){
        cout<<ans[i]<<endl;
    }

    // example:
    /*
        string P = "qwryupcsfoghjkldezvxbintma",S = "ativedoc";
        cout<<doit(P,S); // output "codevita"
    */
    return 0;
}