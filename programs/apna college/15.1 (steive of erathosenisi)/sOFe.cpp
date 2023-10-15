#include<iostream>
#include<vector> 

// The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller
// than N when N is smaller than 10 million or so
using namespace std; 

void seiveOfEratosthenes(int end){
    // STEPS
    // 1.have a list of numbers 
    // 2.unmarke (not zero) means number is prime
    // 3.p= first unmarked(2)
    // 4.mark every multiple of p
    // 5.take p to the next unmarked and mark all the multiples, starting from p²(since prev are already marked)
    // 6.move p untill p²<upperLimit 
    // 7.print all the unmarked nos
    vector<int> temp;
    // create a list
    for(int i =2;i<end;i++){
        temp.push_back(i);
    }

    int p=temp[0] , a=0;
    while ( p*p<end){
        for(int i=p*p;i<end;i+=p){
            temp[i-2]=0;
        }
        a++;
        while (temp[a]==0) a++;
        p=temp[a];        
    }

    for(int i =0 ;i<temp.size();i++){
        if(temp[i]!=0) {
            cout<<temp[i]<<" ";
        }
    }
}

// chat gpt code 

/*void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << " are:" << endl;
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            cout << p << " ";
        }
    }
}

*/

int main(){
    seiveOfEratosthenes(205);
    return 0;
}