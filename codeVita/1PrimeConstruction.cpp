#include<iostream> 
#include<vector>
#include<climits>

using namespace std;

// Function to calculate GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate LCM of a list of numbers
int findLCM(vector<int> numbers) {
    int result = numbers[0];
    for (int i = 1; i < int(numbers.size()); i++) {
        result = lcm(int(result), int(numbers[i]));
    }
    return result;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    
    if (num <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Numbers divisible by i or i+2 are not prime
        }
    }
    
    return true; // If none of the above conditions met, the number is prime
}

void smallestPrime(vector<int> input){
    int  q= INT_MAX;
    int q_index = 0;
    for(int i= 0;i<int(input.size());i++){
        if(input[i]<q){ q = input[i]; q_index= i;}
    }
    // find the lcm of the numbers 
    vector<int> numbers;
    for(int i= 0;i<int(input.size());i++){
        if(i==q_index) continue;
        numbers.push_back(input[i]);
    }
    int lcm = findLCM(numbers);
    if(lcm%2==0&& q%2==0){
        if((lcm+q)==2){ cout<<2; return;}
        cout<<"NONE";
        return;
    }
    else{
        long long int p = lcm+q;
        while (true)
        {
            if(isPrime(p)){
                cout<<p;
                return;
            }
            p+=lcm;
            if(p>10000000000){
                cout<<"NONE";
                return;
            }
        }
    }
}

int main(){
    int n,setval;
    cout<<"Enter the number of nums you wants in the set.";
    cin>>n;
    vector<int> input;
    for(int i =0 ;i<n;i++){
        cout<<"enter the set val";
        cin>>setval;
        input.push_back(setval);
        cout<<endl;
    }
    smallestPrime(input);
    return 0;
}
