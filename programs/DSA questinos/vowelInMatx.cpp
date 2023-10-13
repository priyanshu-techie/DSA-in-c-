/*
    Three characters { #, *, . } represents a constellation of stars and galaxies in space. Each galaxy is demarcated by # characters. There can be one or many stars in a given galaxy. Stars can only be in the shape of vowels { A, E, I, O, U }. A collection of * in the shape of the vowels is a star. A star is contained in a 3×3 block. Stars cannot be overlapping. The dot(.) character denotes empty space.

Given 3xN matrix comprising of { #, *, . } character, find the galaxy and stars within them.

Note: Please pay attention to how vowel A is denoted in a 3×3 block in the examples section below.

Constraints

3 <= N <= 10^5
Input

Input consists of a single integer N denoting the number of columns.
Output

The output contains vowels (stars) in order of their occurrence within the given galaxy. The galaxy itself is represented by the # character.
Example 1

Input

18

* . * # * * * # * * * # * * * . * .

* . * # * . * # . * . # * * * * * *

* * * # * * * # * * * # * * * * . *

Output

U#O#I#EA
*/


#include<iostream> 
#include<vector>
#include<unordered_map>

using namespace std; 

int main(){
    vector<vector<char>> letter(3,vector<char>(3));
    vector<vector<char>> input = {{'*','.','*','#','*','*','*','#','*','*','*','#','*','*','*','.','*','.'},
                                  {'*','.','*','#','*','.','*','#','.','*','.','#','*','*','*','*','*','*'},
                                  {'*','*','*','#','*','*','*','#','*','*','*','#','*','*','*','*','.','*'}
                                 };
    string ans;
    int N = 18;
    unordered_map<char,vector<vector<char>>> check;
    check['A']={{'.','*','.'},
                {'*','*','*'},
                {'*','.','*'}};

    check['E']={{'*','*','*'},
                {'*','*','*'},
                {'*','*','*'}};

    check['I']={{'*','*','*'},
                {'.','*','.'},
                {'*','*','*'}};

    check['O']={{'*','*','*'},
                {'*','.','*'},
                {'*','*','*'}};

    check['U']={{'*','.','*'},
                {'*','.','*'},
                {'*','*','*'}};
    int row =0,col=0,letCol=0;
    while(col<N){
        row=0;
        if(input[row][col]=='#'){ 
            ans.append("#");
            col++;
            continue;
        }
        for(row=0 ; row <3;row ++){
            letCol=0;
            for(int i = 0;i<3;i++){
                letter[row][letCol]=input[row][col+i];
                letCol++;
            }
        }
        //chceking letter
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                cout<<letter[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<"enld"<<endl;
        col+=3;
        // checking which letter to show;
        unordered_map<char,vector<vector<char>>>::iterator itr;
        for(itr=check.begin();itr!=check.end();itr++){
            bool cj= itr->second ==  letter;
            cout<<cj;
            if(itr->second == letter){
                ans.append(to_string(itr->first));
            }
        }
        letter.clear();
    }

    cout<<"The anser is "<<ans;

    
            
    
    return 0;
}


// nii bna , dekh lo kyu