#include<iostream>
#include<vector>

// ✨ SNAKE AND LADDERS✨

using namespace std;
// 0 = start 
// 100 = end
// num.00 means board num
// -1.45 means snake which takes at 45
// 1.45 means ladder which takes at 45
// the structure of the board is as follows :
/*{
        {100,-1.00,98,97,96,95,94,93,92,91},
        {81,82,83,84,1.98,86,87,88,89,90},
        {80,79,-1.46,77,76,75,74,73,72,71},
        {61,62,63,64,65,66,67,68,69,70},
        {60,59,58,57,56,55,-1.25,53,52,51},
        {41,42,43,1.62,45,46,47,48,49,50},
        {40,39,38,37,36,35,34,33,32,31},
        {21,22,23,1.74,25,26,27,28,29,30},
        {20,19,18,17,-1.02,15,14,13,12,11},
        {0,2,3,4,5,6,7,8,9,10}
    };
*/

int snakeCount =0, ladderCount = 0;


void findRowAndCol(int &row,int&col,int val ){
    int var1,var2;
    // finding the new row num 
        var1 = val/10;
        var2 = val%10;
        // if the number is 20,30,...
        if(var2==0) var1--;
        row = 9-var1; // sub with 9 Bcaz teh bottom row index is 9 and board starts from bottom
    // finding the new col num
        if(var2==0) var2=10;
        // if row is odd then start from left 
        if(row % 2 !=0 ) col= var2-1;
        // else start from right 
        else col= 9-var2+1; 
}
void move(int &row,int & col ,int boardVal, int dice){
// here i am updating the val of row and col to a new val
    int newVal = boardVal+ dice;
    // if getting greater than 100 then waste the move and do nothing
    if(newVal>100) return;
    findRowAndCol(row,col,newVal);
}

void updateIfSnakeOrLadder(vector<vector<float>> & board,int &row , int &col ){
    float boardVal = board[row][col];
    // if not a snake or ladder the return
        if(int(boardVal)== boardVal) return;
    // if snake val<-1
        if(boardVal <= -1 ){
            snakeCount++;
            // if bV = -1.45 , bV*100=145.00 , int(bV)%100 == 45
            int newPos = int(boardVal*100*(-1))%100;
            // if will update the rows and cols to where the snake took 
            findRowAndCol(row,col,newPos);
        }
    // if ladder
        if(boardVal>1 && boardVal<2){
            ladderCount++;
            // if bV = 1.45 , bV*100=145.00 , int(bV)%100 == 45
            int newPos = int(boardVal*100)%100;
            // if will update the rows and cols to where the ladder took 
            findRowAndCol(row,col,newPos);
        }
    // check if agian snke or ladder 
    boardVal = board[row][col];
    if(boardVal<=-1||(boardVal>1 && boardVal<2)){
        updateIfSnakeOrLadder(board,row,col);
    }
}

void sankeAndLadder(vector<vector<float>>board, vector<int> dice){
    int currRow = 9, currCol = 0, position = 0 ;
    // loop through the dice elems 
    for(int i =0 ; i<dice.size();i++){
        move(currRow, currCol, board[currRow][currCol], dice[i]);
        updateIfSnakeOrLadder(board,currRow,currCol);
    }
    // now check if you are standing at 100 or anywhere else
    if(board[currRow][currCol]==100){
        cout<<"You won";
        cout<<endl<<"Snakes Encountered: "<<snakeCount;
        cout<<endl<<"ladderes Encountered: "<<ladderCount;
    }
    else{
        cout<<"You lost! Your final position was : "<< board[currRow][currCol];
        cout<<endl<<"Snakes Encountered: "<<snakeCount;
        cout<<endl<<"ladderes Encountered: "<<ladderCount;
    }

}

int main(){
    vector<vector<float>>board= {
        {100,-1.00,98,97,96,95,94,93,92,91},
        {81,82,83,84,1.98,86,87,88,89,90},
        {80,79,-1.46,77,76,75,74,73,72,71},
        {61,62,63,64,65,66,67,68,69,70},
        {60,59,58,57,56,55,-1.25,53,52,51},
        {41,42,43,1.62,45,46,47,48,49,50},
        {40,39,38,37,36,35,34,33,32,31},
        {21,22,23,1.74,25,26,27,28,29,30},
        {20,19,18,17,-1.02,15,14,13,12,11},
        {0,2,3,4,5,6,7,8,9,10}
    };
    vector<int> dice = {6,6,6,6,6,5,2};
    sankeAndLadder(board,dice);

    return 0;
}

// since i am playing with indexes of rows and cols, my code has got too messy , instead try the second method 