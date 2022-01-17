#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear(int arr[],int n, int k){
    if(n==0){
        return false;
    }
    //zero h to false 
    // one h to true

    if(arr[0]==k){
        return true;
    }

    return linear(arr+1,n-1,k);

}
int main() {
    int arr[5]={5,10,20,25,15};
   cout<< linear(arr,5,1);
return 0;
}