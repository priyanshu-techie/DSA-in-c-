#include<iostream> 

using namespace std; 
int fact(int num){
    if(num==1||num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
// using static variable

int staticFact(int num){
    static int ans=1;
    if(num==1||num==0) return ans;
    else{
        ans=num*ans;
        return fact(--num);
    }
}

int main(){
    int num;
    cout<<"enter a positive number"<<endl;
    cin>>num;
    if (num>0)
    {
        cout<<"the factorial is :"<<fact(num);
    }
    cout<<"please enter a positive number";
    return 0;
}

