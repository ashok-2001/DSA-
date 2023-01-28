#include<bits/stdc++.h>
using namespace std;
void largestThree(int arr[], int size){
    if(size<3){
        return;
    }
    int first,second,third;
    first=second=third=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(first<arr[i]){
            third=second;
            second=first;
            first=arr[i];
        }
        /* code */
    }
    cout<<first<<" "<<second<<" "<<third<<" "<<endl;

    
}
int main(){
    int arr[]={12, 13, 1};
    largestThree(arr,3);


}