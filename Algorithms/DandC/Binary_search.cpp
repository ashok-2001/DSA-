#include<bits/stdc++.h>
using namespace  std;
bool binary_search(int arr[], int n, int key){
    int l=0, h=n, mid;
    // for (; l <= h;)
    // {
    //     mid=(l+h)/2;
    //     if(arr[mid]==key) return true;
    //     else if(key>arr[mid]) l=mid+1;
    //     else h=mid-1;
    // }
    return false;
    
}
int main(){
    int arr[]={8,9,23,34,37,39,45,47,57,68,69,78,80,98};
    if(binary_search(arr, 13, 1)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
}