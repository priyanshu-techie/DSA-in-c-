#include<iostream> 
#include<unordered_map>

using namespace std; 

int main(){
    unordered_map<string,int> umap;

    umap["chemistry"]=90;
    umap["physics"]=55;
    umap["maths"]=39;
    umap["computer"]=100;
    umap["hindi"]=40;
    umap["bio"]=80;
    umap["geography"]=50;
    umap["aec"]=30;

    // cout<< umap["hello"];
    // umap.begin() returns an itarator which is not a pointer, itarator is something that helps to itarate a DS without need to know the internal working of hte DS.

    // creating an iterator
    unordered_map<string,int>::iterator itr;
    for(itr=umap.begin();itr!=umap.end();itr++){
        cout<< itr->first<<": "<<itr->second;
        cout<<endl;
    }

    // you could also decalre itr in this way;

    // auto itr=umap.begin(); // auto automatically assign a type 

    // for(itr;itr!=umap.end();itr++){
    //     cout<< itr->first<<": "<<itr->second;
    //     cout<<endl;
    // }

    // returns 0 val if the unordered_map<any,int> key doesnt has any val
    // and "" empty string if unordered_map<any,string> key doesnt has any val

    return 0;
}