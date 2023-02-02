#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int start, back, temp;
        for(int i=0; i<n; i+=k){
            start=i;
            back=min(i+k-1, n-1); //Handling back if n%k != 0
            while(start<back) {
                temp=arr[start];
                arr[start]=arr[back];
                arr[back]=temp;
                back--, start++;
            }
        }
    }
};
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}