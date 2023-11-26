#include<iostream> 
#include<vector>

using namespace std; 
int snake =0 , ladder =0 ;

void move(vector<float>board, int dice, int & index){
    // update the index
    if(index==0) index= index+dice-1;
    else index+=dice;
    // check if snake or ladder and move
    float val = board[index];
    cout<<endl<<val<<endl;
    // if nothing (13.00==13)
        if(int(val)==val) return;
    // if snake 
        if(val<=-1){
            snake++;
            val = (int(val*(-1)*100))%100;
            index=val-1;
        }
    // if ladder 
        if(val>1&&val<2){
            ladder++;
            val = (int(val*100))%100;
            index=val-1;
        }
    // if again snake or ladder again call the move functon
        if(val<=-1||(val>1&&val<2)){
            move(board,0,index);
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
    vector<float> straight;
    int row = 9 ,col=0;
    // making the board in a straight line
    while(!(row==0 && col==0)){
        if(col==0){
            while(col<=9){
                straight.push_back(board[row][col]);
                col++;
            }
            col--;
            row--;
            continue;
        }
        if(col==9) {
            while(col>=0){
                straight.push_back(board[row][col]);
                col--;
            }
            col++;
            row--;
        }
        if(row==-1) row++;     
    }
    vector<int> dice={6,6,6,6,6,5,2};
    int index = 0;
    for(int i = 0 ;i<dice.size();i++){
        move(straight,dice[i],index);
    }

    if(straight[index]==100){
        cout<<"you won!";
    }
    else{
        cout<<"you lost! last val is :"<<straight[index];
    }
    cout<<endl<<"snake encountered :"<<snake;
    cout<<endl<<"ladder encountered :"<<ladder;

    return 0;
}