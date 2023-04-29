#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CUSTOMERS 100
typedef struct 
{
    int account_number;
    char name[100];
    float balance;
    char password[50]
}customer;
 
 customer customers[MAX_CUSTOMERS];
int num_customers = 0;
void open_account()
{
     customer c;
    printf("Enter account number: ");
    scanf("%d", &c.account_number);
    printf("Enter name: ");
    scanf("%s", c.name);
    printf("Enter initial balance: ");
    scanf("%f", &c.balance);
    printf("Set a password:");
    scanf("%s",c.password);
    customers[num_customers++] = c;
    printf("Account created successfully!\n");
}
void deposit()
{
    int account_number;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            customers[i].balance += amount;
            printf("Deposit successful!\n");
            return;
        }
    }
    printf("Account not found!\n");
}
void withdrawal()
{
    int account_number;
    float amount;
    char pass[50];
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Enter the password to withdraw");
            scanf("%s",pass);
            if(pass==customers[i].password){
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > customers[i].balance)
                {
                    printf("Insufficient balance!\n");
                    return;
                }
                customers[i].balance -= amount;
                printf("Withdrawal successful!\n");
                return;
            }
            else{
                printf("Invalid pass, try again");
            }
        }
    }
    printf("Account not found!\n");
}
void view_details()
{
    int account_number;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Account number: %d\n", customers[i].account_number);
            printf("Name: %s\n", customers[i].name);
            printf("Balance: %f\n", customers[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}
void modify_account()
{
    int account_number;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < num_customers; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Enter new name: ");
            scanf("%s", customers[i].name);
            printf("Enter new balance: ");
            scanf("%f", &customers[i].balance);
            printf("Account modified successfully!\n");
            return;
        }
    }
    printf("Account not found!\n");
}
void display_all()
{
    printf("Account Number\tName\tBalance\n");
    for (int i = 0; i < num_customers; i++)
    {
        printf("%d\t\t%s\t%f\n", customers[i].account_number, customers[i].name, customers[i].balance);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n\nBank Management System\n");
        printf("1. Open Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. View Account Details\n");
        printf("5. Modify Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            open_account();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            view_details();
            break;
        case 5:
            modify_account();
            break;
        case 6:
            printf("\nThank you for using our system!\n");
            exit(0);
            break;
        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 6);
    return 0;
}