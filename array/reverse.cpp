#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={2,7,5,9};
    int n=4;
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }


        
    
return 0;
}