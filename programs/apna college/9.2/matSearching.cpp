#include<iostream> 

using namespace std;
// we have a matrix in which both rows ans columns are sorted, you need to find an elem 
// one technique of O(n²) would be of linear serch, but the other is strating from top right or bottom left as if you want num leeser then you can go left, if want bigger then go down

bool hasElem(int Arr[][4],int target){
    int r = 0, c=3;
    while (r<4&&c>=0)
    {
        if(Arr[r][c]==target){
            return true;
        }   
        if(Arr[r][c]>target){ // go left
            c--;
        }
        else r++; // go down
    }
    return false;
}

int main(){
    int A[4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    cout<<hasElem(A,20);    
    return 0;
}