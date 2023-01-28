#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={4,3,5,6,4}, k,element,j;
    int n=5;
    cout<<"Elements before insertion: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Enter Position and Value to be updated: ";
    cin>>k>>element;
    for (int i = 0; i < n; i++)
    {
        if(i==k-1){
            arr[i]=element;
        }
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}