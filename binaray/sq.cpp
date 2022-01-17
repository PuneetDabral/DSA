
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int binary(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        if(sq<n){
          ans=mid;
            s=mid+1;
    }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    
}
    return ans;
}






int main(){

    int n;
    cin>>n;
    int temp=binary(n);
}

