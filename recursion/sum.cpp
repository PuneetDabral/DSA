#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int sum(int arr[], int size, int *csum)
// {

//     if (size == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         *csum = *csum + arr[0];

//         sum(arr + 1, size - 1, csum);
//     }
// }

int sum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaing = sum(arr+1,size-1);
    int getsum = arr[0]+remaing;
    return getsum;

}
int main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    //int s = 0;
   // sum(arr, 5, &s);
    //cout << s;
    cout<<sum(arr,5);
    return 0;
}