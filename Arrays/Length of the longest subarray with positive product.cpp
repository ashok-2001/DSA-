class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
        int positive = 0;
        int res = 0;
        int negative = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                positive = negative = 0;
            }
            else if (arr[i] > 0) {
                positive += 1;
                if (negative != 0) {
                    negative += 1;
                }
                res = max(res, positive);
            }
            else {
                swap(positive, negative);
                negative += 1;
                if (positive != 0) {
                    positive += 1;
                }
                res = max(res, positive);
            }
        }
        return res;
        }
};