class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
        vector<long long int> res(k, 0);
        unordered_set<int> r;
        unordered_set<int> c;
        
        // long long int n = N;
        long long int total = n*n;
        long long int ones;
        long long int r_total, c_total;
        
        for(int i = 0; i < k; i++) {
            r.insert(arr[i][0]);
            c.insert(arr[i][1]);
            
            r_total = r.size();
            c_total = c.size();
            
            ones = (((r_total + c_total)*n) - (r_total*c_total));
            
            res[i] = total - ones;
        }
        return res;
  }
};
