#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int b[3], k=0;
        b[0]=0,b[1]=0,b[2]=0;
        for(int  i=0; i<n; i++){
            if(a[i]==0) b[0]++;
            else if(a[i]==1) b[1]++;
            else b[2]++;
        }
        for(int i=0; i<b[0];i++) a[k++]=0;
        for(int i=0; i<b[1];i++) a[k++]=1;
        for(int i=0; i<b[2];i++) a[k++]=2;
    }
};
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        ob.sort012(a, n);
        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
    }
    return 0;
}
