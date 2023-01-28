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
    cout<<"Enter Position and new element: ";
    cin>>k>>element;
    n=n+1;
    j=n;
    while (j>=k-1)
    {
        arr[j]=arr[j-1];
        j--;
        /* code */
    }
    arr[k-1]=element;
    
    cout<<"Elements after insertion: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}