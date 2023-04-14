#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<int> vectorName)
    {
        for (int i = 0; i < vectorName.size(); i++)  cout << vectorName.at(i) << " ";
        cout << endl;
    }

    void addElems(vector<int> &vectorName)
    {
        int count, num;
        cout << "enter the no of element you want to enter" << endl;
        cin >> count;
        cout << endl
             << "start entering the values";
        for (int i = 0; i < count; i++)
        {
            cin >> num;
            vectorName.push_back(num);
        }
    }


int main()
{
    vector<int> first;
    addElems(first);
    display(first);
    return 0;
}