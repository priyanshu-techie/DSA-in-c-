#include<stdio.h>

struct BankAcc
{
    char aNo[50];
    char name[50];
    float balance;
};

void display(struct BankAcc any){
    printf( "Account Number: %s\n", any.aNo);
        printf( "Account Holder: %s\n", any.name);
        printf( "Balance: $%f\n",any.balance);
}

void deposit(struct BankAcc *any,float amount){
    any->balance+=amount;
    printf("\nDeposit of $%f was successful on Ac.NO %s.\nTotal balance: %f",amount, any->aNo, any->balance);
}

void withdraw(struct BankAcc *any,float amount){
    if(any->balance<amount){
        printf("\nInsuffisient Balance!");
    }
    else{
        any->balance-=amount;
        printf("\nwithdraw successful of $%f",amount);
    }
}

int main(){
    
    struct BankAcc account1={"9031364200","Rajesh Agrawal",0.0};
    struct BankAcc account2={"6201915099","Simran Agrawal",0.0};

    display(account1);
    display(account2);

    deposit(&account1,2000);
    deposit(&account2,1000);


    withdraw(&account2,900);
    printf("\n\n%f",account2.balance);

    // i can change the data
    account2.balance=909090909;

    withdraw(&account2,10000);
    printf("\n\n%f ha ha ha!!",account2.balance);

    

    return 0;
}

// no data hiding 
// no prevension to data access or change 
// too many params in a function
