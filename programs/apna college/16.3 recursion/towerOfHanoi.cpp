#include<iostream> 

using namespace std; 

void towerOfHanoi(int n, char src, char dest, char help){
    if(n==0) return;
    // move n-1 blocks from source to helper  using destination as helper
    towerOfHanoi(n-1, src, help, dest);
    cout<<"Move "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1, help, dest, src);
}

int main(){
    towerOfHanoi(5,'A','C','B');
    return 0;
}