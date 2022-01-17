#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bin(int *arr,int s,int e,int k){
    if(s<e){
        return -1;
    }
    int mid=s+(e-s)/2;
   
        if(arr[mid]==k){
            return mid;
        }
        if(k>arr[mid]){
         return bin(arr,s=mid+1,e,k);
        }
        else{
         return bin(arr,s,e=mid-1,k);
        }
        
    
    
}

int main() {
    int arr[5]={1,2,3,4,5};
    int s=0, e=5,k=10;
   cout<< bin(arr,s,e,k);
return 0;
}