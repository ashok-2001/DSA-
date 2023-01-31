// Dynamically
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code 
        // if(n==0 || n==1) return n;
        int m=1000000007;
        long long dp[n];
        dp[0]=0,dp[1]=1;
        for(int i=2; i<=n;i++) dp[i]=((dp[i-1]%m)+(dp[i-2]%m))%m;
        return dp[n];
        
    }
};
//Iterative


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> v;
        long long prev1=1, prev2=1,m=0;
        for(int i=1; i<=n;i++) 
        {
            if(i==1||i==2) v.push_back(1);
            else {
                m=prev1+prev2;
                prev1=prev2;
                prev2=m;
                v.push_back(m);
            }
        }
        return v;
    }
};