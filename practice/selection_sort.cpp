#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int selection(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
        swap(arr[min],arr[i]);
    }
}
int main() {
    int arr[]={10,5,2,7,15};
    int n=5;
    selection(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}