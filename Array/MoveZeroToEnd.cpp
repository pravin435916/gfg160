//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        //optimal   Tc:O(N) SC:O(1)
        // int i=0;
        // int n = arr.size();
        // for(int j=0;j<n;j++) {
        //     if(arr[j] != 0) {
        //         swap(arr[i],arr[j]);
        //         i++;
        //     }
        // }
        //Brute Force Tc:O(N) SC:O(N)  Using Temporary array
        //Better Tc:O(N) SC:O(1)
        int idx = 0;
        int n = arr.size();
        for(int j=0;j<n;j++) {
            if(arr[j] != 0) {
                arr[idx] = arr[j]; // fill only non-zero
                idx++;
            }
        }
        while(idx < n) { // now fill remaining space with 0 
            arr[idx] = 0;
            idx++;
        }
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}