#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
    string num = "384789";
    //  more easier and simpler solution

    sort(num.begin(),num.end(),greater<int>());
    cout<<num;

    // my very complex sol
    // int numInInt= stoi(num);
    // vector<int> arr;
    // int ans=0;

    // while(numInInt>0){
    //     arr.push_back(numInInt%10);
    //     numInInt/=10;
    // }

    // for(int i =0;i<arr.size();i++){
    //     cout<<arr[i]<< ", ";
    // }

    // cout<<endl;
    // sort(arr.begin(),arr.end());
    // // after sorting
    // for(int i =0;i<arr.size();i++){
    //     cout<<arr[i]<< ", ";
    // }

    // // for(int i = arr.size()-1;i>=0;i--){
    // //     ans=ans*10 +arr[i];
    // // }

    // // LOOPING USING ITERATOR

    // vector<int>::iterator itr=arr.end();
    // while (itr!=arr.begin())    
    // {
    //     itr--;
    //     ans=ans*10+ *itr;
    // }
    
    
    // cout<<endl<<to_string(ans);







    return 0;
}