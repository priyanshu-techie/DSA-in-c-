#include<iostream> 

using namespace std; 

int main(){
    int m, n , p;
    // looping vars:
    int i,j,x;
    cout<<"Enter the val of m, n and p for creating two matrix of m x n and n x p  :  ";
    // for multiplication mxn and nxp should be the matrix size 
    cin>>m>>n>>p;

    int A[m][n];
    cout<<"Enter your first matrix of "<<m<< " x "<< n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int B[n][p];
    cout<<"Enter your second mat of "<<n<< " x "<< p;
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            cin>>B[i][j];
        }
    }

    // code of mat mul:
    
    // answer matrix will be of order mxp
    int C[m][p];

    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            C[i][j]=0;
            for(x=0;x<n;x++){
                C[i][j]+=A[i][x]*B[x][j];
            }
        }
    }

    // matrix multiplied, printing the val

    cout<<endl<<endl<<"Answer matrix is:"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
    LOGIC:

    I have seen the pattern that 

    C00=a00*b00 + a01*b10 + a02*b20
    C01=a00*b01 + a01*b11 + a02*b21
    C21=a20*b01 + a21*b11 + a22*b21

    hence used 

    C[i][j]=0;
            for(x=0;x<n;x++){
                C[i][j]+=A[i][x]*B[x][j];
            }

    Time complexity is O(n³);

*/