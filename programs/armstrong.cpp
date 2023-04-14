
#include <iostream>

using namespace std;

bool isArm(int num)
{
    int newNum=0, r, rcube, copy = num;
    while (copy != 0)
    {
        r = copy % 10;
        rcube = r * r * r;
        newNum += rcube;
        copy = copy/10;
    }
    if (num == newNum)
        return true;
    else
        return false;
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
        if (isArm(i))
            cout << i << " is an armstrong num" << endl;
    }

    return 0;
}