#include<iostream>
#include<unordered_map>
#include<algorithm>
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

void sieveOfEratosthenes1(int n) {
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


// hash map implementation
void seiveOfEratosthenes2(int n){
    unordered_map<int,bool> list;
    for(int i =2;i<=n;i++){
        list[i]= false;
    }
    int num = 2;
    int multiple,prod;
    while(num*num <= n){
        if(list[num]){
            num++;
            continue;
        }
        multiple = num;
        // start with the square of the number to optimeise more.
        prod = num * multiple;
        while(prod<=n){
            list[prod] = true;
            multiple++;
            prod = num* multiple;
        }
        num++;
    }
    unordered_map<int,bool>::iterator itr;
    vector<int> ans;
    for(itr= list.begin();itr!=list.end();itr++){
        if(!itr->second){
            ans.push_back(itr->first);
        }
    }
    sort(ans.begin(),ans.end());
    for(int val: ans){
        cout<<val <<" ";
    }
}


int main(){
    seiveOfEratosthenes(205);
    return 0;
}