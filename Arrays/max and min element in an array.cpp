#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<long long, long long> getMinMax(long long a[], int n) ;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    long long max, min;
    
    for(int i=0; i<n;i++){
        if(i==0) max=a[i], min=a[i];
        else if(a[i]>max) max=a[i];
        else if(a[i]<min) min=a[i];
        else continue;
    }
    p=make_pair(min, max);
    return p;
}