#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool search(int arr[],int key,int f , int l){
    if(f>l){
        return false;
    }

int mid=(f+l)/2;
if(arr[mid]==key){
    return true;
}
else if(key>arr[mid]){
   //f=mid+1;
   search(arr,key,mid+1,l);
}
else{
    // l=mid-1;
 search(arr,key,f,mid-1);
}


}



int main() {
    int arr[5]={1,5,10,15,20};
    int size=5;
    int key=20;
   cout<<search(arr,key,0,4);
return 0;
}