#include<iostream> 
#include<stack>

using namespace std; 

int main(){
    string arr;
    cin>>arr;

    int n = arr.length()-1,i=0;
    bool flag;

    while(i<=n)
    {   
        if(arr[i]==arr[n]){
            i++;
            n--;
            flag = true;
            continue;
        }
        else{ 
            flag=false;
            break;
        }
    }

    if(flag){cout<<"is palindrome";}
    else cout<<" not a palindrome";
    return 0;
}