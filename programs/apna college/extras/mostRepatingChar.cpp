#include<iostream> 

using namespace std; 

// used  the array method for this , you could also use object method, but it would be complicated.
// But if the question is most occoring word, then you are majboor to use a map/object.

char mostRepeating(string abc){
    char charStore[26];
    int add,i, max=0,maxIndex=0;
    for(i=0;i<26;i++){ charStore[i]=0;}
    for(i=0;i<abc.length();i++){
        add=int(abc[i])-97;
        charStore[add]++;
    }
    for(i =0 ; i <26 ;i++){
        if(charStore[i]>max){ max= charStore[i];maxIndex=i;}
    }
    return char(maxIndex+97);

}

int main(){
    cout<< mostRepeating("abbgbbbbeheeeechklehed");
    return 0;
}