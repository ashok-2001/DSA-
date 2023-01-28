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
    cout<<"Enter Value to be searched: ";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        if(k==arr[i]){
            cout<<"Value "<<k<<" Found on position "<<i+1<<endl;
        }
        /* code */
    }
    

}