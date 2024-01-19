#include<iostream> 
#include<vector>

using namespace std; 
void solve(vector<int> nums ,vector<int> output, int i, vector<vector<int>> & ans){
        // base case 
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }

        // exclude 
        solve(nums,output, i+1, ans);

        // include
        output.push_back(nums[i]);
        solve(nums,output, i+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output ;
        int index = 0 ;
        solve(nums,output,index, ans );
        return ans;
    }

int main(){
    vector<int> abc = {3,4,5,2,1};
    vector<vector<int>> out = subsets(abc);
    for(vector<int> val : out){
        for(int v: val){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}