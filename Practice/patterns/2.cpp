#include<iostream> 

using namespace std; 
/*
    *
    **
    ***
    ****
    *****
    ******
    *******
*/
void pat1(){
    int i=0,j=1,k;
    for(i;i<6;i++){
        for(k=0;k<j;k++){
            cout<<"* ";
        }
        cout<<endl;
        j++;
    }
}
/*
    ******
    ****
    ***
    **
    *
*/
void pat2(){
    int i=0,j=5,k;
    for(i;i<6;i++){
        for(k=0;k<j;k++){
            cout<<"* ";
        }
        cout<<endl;
        j--;
    }
}
/*
    * * *
     * *
      *
*/
void pat3(){
    int i=0,j=5,k;
    for(i;i<6;i++){
        for(int z=0;z<i;z++){
            cout<<" ";
        }
        for(k=0;k<j;k++){
            cout<<"* ";
        }
        cout<<endl;
        j--;
    }
}
/*
    ****
     ***
      **
       *
*/
void pat4(){
    int i=0,j=5,k;
    for(i;i<6;i++){
        for(int z=0;z<i;z++){
            cout<<" ";
        }
        for(k=0;k<j;k++){
            cout<<"*";
        }
        cout<<endl;
        j--;
    }
}
/*
    AAAA
    BBBB
    CCCC
    DDDD
*/
void pat5(){
    char b='A'+10;
    cout<<b;
}
/*
    E
    DE
    CDE
    BCDE
    ABCDE
*/
void pat6(){
    int k=0,letter=25;
    for(int i=0;i<letter;i++){
        for(int j=k;j>=0;j--){
            cout<<char(char(64+letter)-j);
        }
        cout<<endl;
        k++;
    }
}

/*
    1
   212
  32123
 4321234
543212345
*/
void pat7(){
    int i, j, k;
    for(i=1;i<=5;i++){
        // for space 
        for(j=5-i;j>0;j--){
            cout<<" ";
        }
        // for reverse number
        for(k=i;k>=1;k--){
            cout<<k;
        }
        // for forward number
        for(k=2;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}

/*

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
void pat8(){
    // take two loops,print space, print star
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>0;j--){
            cout<<" ";
        }
        for(int k =0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=5;i>=1;i--){
        for(int j=5-i;j>0;j--){
            cout<<" ";
        }
        for(int k =0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pat9(){
    int i , j, k;
    for(i =0;i<5;i++){
        // for printing the space
        for(j=4;j>i;j--){
            cout<<" ";
        }
        cout<<"*";
        for(k=0;k<i*2-1;k++){
            cout<<" ";
        }
        if(i>0) cout<<"*";
        cout<<endl;
    }
    for(i =4;i>=0;i--){
        // for printing the space
        for(j=4;j>i;j--){
            cout<<" ";
        }
        cout<<"*";
        for(k=0;k<i*2-1;k++){
            cout<<" ";
        }
        if(i>0) cout<<"*";
        cout<<endl;
    }
}

int main(){
    // pat1();
    // pat2();
    // pat3();
    // pat4();
    // pat5();
    // pat6();
    // pat8();
    pat9();
    
    return 0;
}