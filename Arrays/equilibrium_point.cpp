#include <iostream>
using namespace std;
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0, m=0;
        for(int i=0; i<n; i++) sum+=a[i];
        for(int i=0; i<n; i++){
            m+=a[i];
            if(m-a[i]==sum-m) return i+1;
        }
        return -1;
    }
};
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        //taking input n
        cin >> n;
        long long a[n];
        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}