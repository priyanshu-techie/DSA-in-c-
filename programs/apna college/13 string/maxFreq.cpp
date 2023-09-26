#include<iostream> 

using namespace std; 

int main(){
    string str = "akjkjekjekdjjdanan";

    // USING AN ARRAY  
    int arr[26],i;
    for(i=0;i<26;i++){arr[i]=-1;}
    for(i =0 ;i<str.length();i++){
        int index = str[i]-'a';
        if(arr[index]==-1) arr[index]= 1;
        else arr[index]++;
    }
    int max=0,maxIndex=0;
    for(i=0;i<26;i++){ if(arr[i]>max){ max = arr[i]; maxIndex = i;}}
    cout<<"Maximum repeating elem is: "<<char(maxIndex+'a')<<endl<<"It repeated "<<max<<" times.";

    // USING HASH_MAP
    return 0;
}