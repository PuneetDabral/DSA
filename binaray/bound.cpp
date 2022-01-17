#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int total(int first ,int last){
   int ans=(last-first)+1;
   return ans;
}
int firstac(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { //right
            s = mid + 1;
        }
        else if (key < arr[mid])
        { //left
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int lastac(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { //right
            s = mid + 1;
        }
        else if (key < arr[mid])
        { //left
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[7] = {1, 2,3,3, 3, 3, 5,};
    int f=firstac(even,7,3);
    int l=lastac(even,7,3);
    int t=total(f,l);
    cout <<f<<"  "<<l<<" "<<t;

    return 0;
}