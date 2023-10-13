#include<iostream> 

using namespace std; 

int main(){

    int a = 2, b =3,c;
    // a = 10 b=11
    // a & b = 10, a|b= 11
    // ~a, if number is 8 bit(let) a=00000010 , ~a = 11111101,
    // to print it take 1s complement (not the sign bit ) 1 0000010, now take 2s complement(add 1 to 1s) ~a = 1 0000011 , or (-)3
    c= ~a;
    cout<<c;
    // another exaplem
    a =34; // (00100010)
    c = ~a;// ~a = 11011101, 1s=1 0100010 2s=1 0100011 , (-)35
    cout<<endl<<c<<endl;

    // << = left shift , >> = right shift
    // 5 = 000...00101 ,
    // 5<<2 , left shift 5 to 2 steps, new num = 000...010100 i.e 20
    cout<<(5<<2)<<endl;
    // 12 = 00..01100, 12>>2, new num = 000...0011 i.e 3
    cout<<(12>>2)<<endl;

    // -13 = 100...001101
    // -13<<3 , new = 00...1101000 (104) ❌ what bit will be inserted will be dependent on compiler
    cout<<(-13<<3)<<endl;
    // -13>>2, new = 001....00110 (what bit will be inserted will be dependent on compiler)
    cout<<(-13>>2);
    return 0;
}