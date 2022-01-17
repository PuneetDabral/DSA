#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s, int e){
    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

//place pivot at right position
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left or right 
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
       
       if(i<pivotIndex &&  j>pivotIndex){
           swap(arr[i++],arr[j--]);
           
       }
    }
    return pivotIndex;
}

void Quicksort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);

    //left part
    Quicksort(arr,s,p-1);

    //right
    Quicksort(arr,p+1,e);


}
int main() {
    int arr[5]={2,4,1,6,9};
    int n=5;
   
   Quicksort(arr,0,n-1);

   for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
return 0;
}