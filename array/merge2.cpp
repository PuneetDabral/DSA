#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//home work 
void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[k++] = arr1[i++];
        }
        else
        {
            arr1[k++] = arr2[j++];
        }
    }

    //copy left elemnt of 1 and second arrey
    while (i < n)
    {
        arr1[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr1[k++] = arr2[j++];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr1[6] = {1, 2,3};
    int arr2[3] = {2,5,6};
    

    merge(arr1, 5, arr2, 3);

    print(arr1, 6);
    return 0;
}
