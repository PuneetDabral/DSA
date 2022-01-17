#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

   
    int min=0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[min]){
            min=i;
        }
        
    }
    swap(arr[min],arr[0]);

    selectionSort(arr+1,n-1);
}



int main()
{
    int n = 6;
    int arr[] = {1, 7, 9, 2, 2, 0};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
