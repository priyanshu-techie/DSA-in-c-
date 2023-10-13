#include<iostream> 

using namespace std;

int getBit(int num , int pos){
    // GET BIT at a position
    // 13= 1101 , to get the bit at 1 index (from back)
    return (num & (1<<pos))!=0;
}
int setBit(int num , int pos){
    // 0101
    return (num|(1<<pos));
}
int resetBit(int num, int pos){
    // 0101 will be 0001
    return (num & (~(1<<pos)));
}

int updateBit(int num, int pos){
    // 0101 
    int bit = getBit(num,pos);
    if(bit){
        return resetBit(num,pos);
    }
    else return setBit(num,pos);
}


int main(){
    cout<<updateBit(5,2); // 0101=> 0001 (1)
    cout<<updateBit(5,3); // 0101=> 1101 (13)
    return 0;
}