#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
return 0;
}

bool ispossible(vector<int> arr, int n, int m,int mid){
    int count=1;
    int pagesum=0;
    for(int i=0; i<n; i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            count++;
            if(count>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
    
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
    
    
}