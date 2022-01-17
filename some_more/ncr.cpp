#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}

int ncr(int n, int r){
    int num=fact(n);
    int dem=fact(r)*fact(n-r);
    int ans=num/dem;
    return ans;
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);

return 0;
}