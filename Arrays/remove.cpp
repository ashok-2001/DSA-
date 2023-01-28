#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        // map<int, int> mp;
        // for(auto it=nums.begin(); it!=nums.end(); it++){
        //     mp[*it]++;
        // }
        // for(auto it=nums.begin(); it!=nums.end(); it++){
        //     cnt++;
        // }
        for(auto it=nums.begin(); it!=nums.end(); it++){
            if(*it==val) {
                nums.erase(it);
            }
        }
        for(auto it=nums.begin(); it!=nums.end(); it++){
            cout<<*it<<" ";
            cnt++;
        }
        cout<<endl;
        return cnt;
    }
};
int main(){
    Solution s;
    vector<int> arr={6,4,6,5,3,6,5,3,2,4,3,5,3,4,5,5};
    int a=s.removeElement(arr,5);
    cout<<a<<endl;
}