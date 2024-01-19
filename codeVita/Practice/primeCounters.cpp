#include <iostream>
#include<vector>

using namespace std;

// a number is a prime counter if the number of prime before it (inclusive of the number) is a prime number.

bool isPrime(int num){
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<bool> noOfPrimes(int num){
    vector<bool> numList(num + 1, true);

    for (int p = 2; p * p <= num; p++) {
        if (numList[p]) {
            for (int i = p * p; i <= num; i += p) {
                numList[i] = false;
            }
        }
    }
    numList[0]= false;
    numList[1]=false;
    return numList;
}



int noOfCP(int high)
{
    int counter;
    vector<bool> seiveArr = noOfPrimes(high);
    vector<int> cpArr(high+1,0);
    cpArr[2]=1;
    for (int i = 3; i <= high; i++)
    {
        if(seiveArr[i]){
            cpArr[i]=cpArr[i-1]+1;
        }
        else cpArr[i] = cpArr[i-1];
    }
    return cpArr[high];
}

int main()
{
    /*
        1. loop through the numbers
        2. for each number get the number of primes (from 1-N inclusive of N)
        3. check if the number is a prime
        4. if yes counter ++;
        5. return the counter
    */
    int high;
    cin>>high;
    cout<<noOfCP(high);

    /*
        CHANGED APPROACH
            Why to run the seive function all the time , 
            just run it once , return the array 
            and on each number count the number of primes before it.
            Also use the same array to check wheather the number is prime or not.
    */
    return 0;
}