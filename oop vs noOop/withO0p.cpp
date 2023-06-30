#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(const string& number, const string& holder)
        : accountNumber(number), accountHolder(holder), balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create two bank accounts
    BankAccount account1("123456789", "John Doe");
    BankAccount account2("987654321", "Jane Smith");

    // Perform operations on the accounts
    account1.deposit(1000.0);
    account2.deposit(500.0);

    account1.withdraw(200.0);
    account2.withdraw(1000.0);

    // Display account details
    account1.display();
    account2.display();

    return 0;
}
