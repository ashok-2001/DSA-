class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr, arr + r+1);
        int cnt=0;
        for(int i=l; i<=r; i++) {
            cnt++;
            if(cnt==k) return arr[i];
        }
        
        return -1;
    }
};