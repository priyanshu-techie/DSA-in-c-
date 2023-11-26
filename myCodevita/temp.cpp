#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5};

    // Remove element at position 2 (0-indexed)
    auto it = next(myList.begin(),1);
    // myList.erase(it);

    // // Print the updated list
    // for (int val : myList) {
    //     cout << val << " ";
    // }
    cout<<*it;
    

    return 0;
}
