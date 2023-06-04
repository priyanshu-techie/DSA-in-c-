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


int main(){
    // pat1();
    // pat2();
    // pat3();
    // pat4();
    // pat5();
    pat6();
    return 0;
}