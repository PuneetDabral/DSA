#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void s(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            //swap(arr[i], arr[i + 1]);
            int temp=0;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 7, 8, 5};
    s(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}