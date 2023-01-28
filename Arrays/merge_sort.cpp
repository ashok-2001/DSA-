#include<bits/stdc++.h>
using namespace std;
void merge_sort(int arr[], int l, int r){
    int mid=(l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr, mid+1, r);
    // merge();
}
int main(){

}