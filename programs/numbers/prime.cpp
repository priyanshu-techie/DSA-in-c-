#include <iostream>

using namespace std;

bool isPrime(int num)
{

    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int start, end;
    cout << "enter the starting of the range of number";
    cin >> start;
    cout << "enter the end of the range of number";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            cout << i << " is a prime num" << endl;
    }

    return 0;
}