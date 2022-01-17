#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int sum(int *arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int r = sum(arr+1,n-1);
    int realsum=arr[0]+r;
    return realsum;

}
int main() {
    int n=5;
    int arr[n]={10,11,12,20,30};
    int csum=0;
    cout<<sum(arr,5);
return 0;
}