#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1; 

    // optimal in only 1 loop
    int first = -1, second = -1;
    for (int num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }
    return second == -1 ? -1 : second;
    // Better   first find first largest and then second largest
    // int first = INT_MIN, second = INT_MIN;
    // for (int num : arr) {
    //     if (num > first) {
    //         first = num;
    //     }
    // }
    // for (int num : arr) {
    //     if (num > second && num < first) {
    //         second = num;
    //     }
    // }
    // return (second == INT_MIN) ? -1 : second;

    //Brute Force : Sort it in descending and find the eleement from starting which is not same 
    // eg. 10 10 8 7 
    // so 10 is first but second 10 is not second so if arr[i] != arr[0]    then return arr[i]
    }
    
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
