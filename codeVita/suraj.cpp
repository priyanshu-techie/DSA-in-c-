#include<iostream> 
#include<unordered_map>
#include<algorithm>
#include<vector>

using namespace std; 

bool checkConflict(int a , int b, int arr[][2],int arr_size){
    for(int i =0 ;i<arr_size;i++){
        if(arr[i][0]==a && arr[i][1]==b) return true;
        if(arr[i][0]==b && arr[i][1]==a) return true;
    }
    return false;
}

int main(){
    int n,c;
    cin>>n>>c;
    int conflict[c][2];
    for(int i =0 ;i<c;i++){
        cin>>conflict[i][0]>>conflict[i][1];
    }
    int strength[n];
    for(int i =0 ;i<n;i++){
        cin>>strength[i];
    }

    // making a map
    unordered_map<int,int> umap;
    for(int i=0 ;i<n;i++){
        umap[strength[i]]= i;
    }
    sort(strength,strength+n);
    vector<int> teamArray;
    int sum=0;

    bool hasConflict = false;
    for(int i = n-1 ;i>=0;i--){
        if(teamArray.size()==0){
            teamArray.push_back(umap[strength[i]]); // index of the largest
            sum+=strength[i];
            continue;
        }
        // the val to add is the emp id of umap[strength[i]];
        for(int k =0 ;k<teamArray.size();k++){
            hasConflict = checkConflict(teamArray[k],umap[strength[i]],conflict, c);
            if(hasConflict) break;
        }
        if(hasConflict) continue;
        else{
            teamArray.push_back(umap[strength[i]]);
            sum+= strength[i];
        }
    }

    cout<<sum;
    
    return 0;
}