#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>

using namespace std;

bool isTriangular(int num) {
    int sum = 0;
    int i = 1;

    while (sum < num) {
        sum += i;
        if (sum == num) {
            return true; // The number is triangular
        }
        i++;
    }
    return false; // The number is not triangular
}

int calculatePrice(const vector<int>& shifts) {
    int sum = 0;
   vector<int>::size_type i;
    for(i =0 ;i<shifts.size();i++){
        if(!isTriangular(shifts[i])){
            sum += shifts[i];
        }
    }
    return sum;
}

int main() {
    // take input the array
    int input;
    vector<int> inputArr;

    while (cin >> input) {
        inputArr.push_back(input);
    }

    // take input the N and K
    int N, K;
    cin >> N >> K;

    vector<int> shifts;
    int biggestVal;
    unordered_map<int, int> umap;

    while (true) {
        // get the subarray list:
        list<int> subList(inputArr.begin(), inputArr.begin()+N);
        while (subList.size() != 1) {
            auto it1 = subList.begin(), it2 = next(subList.begin(), 1);
            int val1 = *it1, val2 = *it2;
            if (val1 < val2) {
                // remove the smaller and push it to the shift array
                subList.erase(it1);
                shifts.push_back(val1);
            } else {
                subList.erase(it2);
                shifts.push_back(val2);
            }
            biggestVal = *subList.begin();
        }
        // making hash map
        // if elem existed then ++ and check if >=k then break the loop
        if (umap[biggestVal] != 0) {
            umap[biggestVal]++;
            if (umap[biggestVal] == K)
                break;
        }
        // else clear the map and add the new val
        else {
            umap.clear();
            umap[biggestVal] = 1;
            if (K == 1)
                break;
        }
        // recreating the input array
        inputArr.clear();
        inputArr.push_back(biggestVal);
        vector<int>::size_type i;
        for (i = N; i < inputArr.size(); i++) {
            inputArr.push_back(inputArr[i]);
        }
        for (i = shifts.size()-(N-1); i < shifts.size(); i++) {
            inputArr.push_back(shifts[i]);
        }
    }

    cout << calculatePrice(shifts);
    return 0;
}
