#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    deque<int> deque_Init(int arr[], int n) {

        deque<int> d;
        for(int i=0; i<n; i++){
            d.push_back(arr[i]);
        }
        return d;

    }

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        deque<int> res = ob.deque_Init(arr, n);
        for (auto x : res) cout << x << " ";
        cout << endl;
    }
}
