#include<iostream> 

using namespace std; 
class reverseNum
{
private:
    int num;
public:
    reverseNum(int n){
        num=n;
    }
    void printReverse(){
        int revNum=0,copy=num,rem;
        while(copy!=0){
            rem=copy%10;
            revNum*=10;
            revNum+=rem;
            copy=copy/10;
        }
        cout<<revNum;
    }

};



int main(){
    reverseNum num(34569984);
    num.printReverse();
    return 0;
}