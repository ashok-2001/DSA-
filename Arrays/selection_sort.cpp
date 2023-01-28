#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int arr[10] = {4, 3, 5, 6, 4,21,1,0,32,54};
    int n = 10, min_idx;
    cout << "Elements before sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Elements After sorting: " << endl;
    for (int i = 0; i < n-1; i++)
    {
        min_idx=i;
        for (int j = i+1; j < n; j++)
        {
            // Finding Index of Element having Minimum Value
            if (arr[j] < arr[min_idx])
            {
                min_idx=j;
            }
            /* code */
        }
        if(min_idx!=i){
            swap(&arr[i], &arr[min_idx]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}