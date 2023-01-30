#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0,sum2=0;
        for(int i=0; i<n-1; i++) sum+=array[i];
        for(int i=1; i<=n; i++) sum2+=i;
        return sum2-sum;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}