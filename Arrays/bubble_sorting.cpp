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
    int arr[5] = {4, 3, 5, 6, 4};
    int n = 5, i;
    cout << "Elements before sorting: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Elements After sorting: " << endl;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            /* code */
        } /* code */
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}