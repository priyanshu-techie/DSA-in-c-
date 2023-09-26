#include <iostream>
#include<algorithm>
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

    // string str;
    // cout << "Enter a string: ";
    // getline(cin, str);

    // cin 👇will terminate when gets a space and keep the remaing in the buffer
    // cin>>str;

    // cout << "You entered: " << str << endl;


    // clearing the buffer
    // int a;
    // cin>>a;
    // cout<<"the num "<<a;
    // cin.clear();
    // fflush(stdin);
    // string str;
    // getline(cin,str);
    // cout<<str;

    // APPENDING

    // string st1,st2,appen;
    // st1= "fam";
    // st2 = "ily";
    // appen = st1+ st2;
    // // or
    // st1.append(st2);
    // cout<<appen<<endl;
    // cout<<st1;

    // COMPARISION
    // string s1="abc",s2="abc",s3="xyz";
    // cout<<s1.compare(s2)<<endl; // 0
    // cout<<s1.compare(s3); // -1

    // FIND & INSERT
    // string s1 = "akldjfkandn akjej";
    // cout<<s1.find("jej"); // returns index of teh foudn
    // cout<<s1.find("z");

    // s1.insert(2,"xxx");
    // cout<<s1;


    // string s1 = "453";
    // int x = stoi(s1)+47;
    // cout<<x;

    // int y = 345;
    // string s1 ="av" ,s2 = to_string(y),s3 = s1+s2;
    // cout<<s3;


    string s1 = " aljktjtncmnkrjnncke";
    sort(s1.begin(),s1.end());
    cout<<s1;

    cout<<endl<< *s1.begin();


    



    return 0;
}