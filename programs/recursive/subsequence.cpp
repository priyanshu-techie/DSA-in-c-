#include<iostream> 
#include<vector>

using namespace std; 

void helper(string str, string output, int index){
    // base case 
    if(index>=str.length()){
        // dont want to print empty
        if(output =="") return;
        cout<<output<<endl;
        return;
    }


    // exclude 
    helper(str,output,index+1);

    // include
    output+= str[index];
    helper(str,output,index+1);


}

//prints all the sub sequences
void subsequences(string str){
    helper(str,"",0);
}

int main(){
    string str = "abcdef";
    subsequences(str);
    return 0;
}