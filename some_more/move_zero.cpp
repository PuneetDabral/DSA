#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sorted(int arr[], int n){
    int i=0;
    int s=0; //non zero value 
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
int main() {
    int n=6;
    int arr[6]={0,1,2,0,3,5};
    sorted(arr,n);
    print(arr,n);
return 0;
}