class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        int j=0, k=n-1, temp;
        for(int i=0; i<n/2; i++){
            temp=b[j];
            b[j]=b[k];
            b[k]=temp;
            j++, k--;
        }
        long long sum=0;
        for(int i=0; i<n; i++) sum+=(a[i]*b[i]);
        return sum;
    }
};