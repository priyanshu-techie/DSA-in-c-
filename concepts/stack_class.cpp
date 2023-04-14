#include<iostream> 

using namespace std;
class stack
{
private:
    int arr[100];
    int top=-1; 
public:
    void pop(){
        if(top==-1){
            cout<<"The stack is empty"<<endl;
            return;
        }
        top--;
    }
    void push(int data){
        if(top==99){
            cout<<"The stack is full";
            return;
        }
        top++;
        arr[top]=data;
    }
    int Top(){
        if(top==-1){
            cout<<"The stack is empty";
            return -1;  
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1)return true;
        else return false;
    }
    int size(){
        return ++top;
    }
   
};


 

int main(){
    stack stk;
    stk.push(23);
    stk.push(89);
    cout<<stk.Top()<<endl;
    cout<<stk.isEmpty()<<endl;
    cout<<stk.size();
    return 0;
}