#include<iostream> 
#include<vector>

using namespace std; 

vector<int> swapElems(vector<int> array){
    int size=array.size();
    if (size%2!=0)// odd
    {
        for(int i=0;i<size-2;i+=2){
            int a =array[i];
            int b=array[i+1];
            array[i]=b;
            array[i+1]=a;
        }
    }
    else{
        for(int i=0;i<size-1;i+=2){
            int a =array[i];
            int b=array[i+1];
            array[i]=b;
            array[i+1]=a;
        }
    }
    return array;
}

int main(){
    vector<int> v={1,2,3,4,5,6,7};
    vector<int> v2={1,2,3,4,5,6};

    vector<int> v_rev=swapElems(v);
    vector<int> v2_rev=swapElems(v2);

    for(int i =0;i<v_rev.size();i++){
        cout<<v_rev[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<v2_rev.size();i++){
        cout<<v2_rev[i]<<" ";
    }
    return 0;
}