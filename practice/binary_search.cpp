#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
           s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() {
    int n=6;
    int arr[]={2,10,15,20,25,32};
    int k=15;
   cout<<binary(arr,n,k);

return 0;
}