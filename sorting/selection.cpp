#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{   
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
    int n=6;
    int arr[]={1,7,9,2,2,0};
    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

return 0;
}



