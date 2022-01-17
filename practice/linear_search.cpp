#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main() {
    int n=4;
   int arr[]={50,70,15,20};
   int k=100;
   cout<<linear(arr,n,k);
return 0;
}
