// Binary Search  Using Recursive method

#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x){
    int mid;
    if(r>=l){
        mid=(l+r)/2;
        if(arr[mid]==x) return mid;
        else if(x>arr[mid]) l=mid+1, binarySearch(arr,l,r,x);
        else r=mid-1, binarySearch(arr,l,r,x);
    }
    else return -1;
    }
int main(){
    int arr[]={8,9,23,34,37,39,45,47,57,68,69,78,80,98};
    if(binarySearch(arr, 0, 13, 98)==-1) cout<<"Not Found"<<endl;
    else cout<<"Found at "<<binarySearch(arr, 0, 13, 98)<<endl;

}