#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void change(int arr[]){
    arr[2]={50};
}
int main() {
    // int arr[]={1,2,3,4};
    // int *p=arr;
    // cout<<p[0]; //[] defrance nhi  hai yai ek tra sai * ke tra he h 

    int arr[3]={1,2,3};
    change(arr);
    cout<<arr[2];
return 0;
}