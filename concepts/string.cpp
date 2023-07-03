#include <iostream>
using namespace std;

int main()
{
    
    // char str[100];

    // cout << "Enter a string: ";
    // cin >> str;
    // cout << "You entered: " << str << endl;
    // 👆👆 here you can't have a space in bw 

    // cout << "Enter a string: ";
    // cin.get(str, 100);

    // cout << "You entered: " << str << endl;

    // you could also use stirng object 👇👇

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // cin 👇will terminate when gets a space and keep the remaing in the buffer
    // cin>>str;

    cout << "You entered: " << str << endl;

    return 0;
}