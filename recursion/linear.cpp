#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool search(int arr[],int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaing = search(arr+1, size-1,key);
        return remaing;
    }
}
int main() {
    int arr[5]={10,20,14,1,5};
    cout<<search(arr,5,1);
return 0;
}