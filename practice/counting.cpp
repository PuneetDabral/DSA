#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void counting(int n){
if(n==0){
    return;
}
cout<<n;
return counting(n-1);

};

void loopcounting(int n){
    for(int i=1; i<=n; i++)
    {
        cout<<i;
    }
    cout<<endl;

    for(int j=n; j>0; j-- ){
        cout<<j;
    }

}
int main() {
    int n=5;
 
   counting(n);
return 0;
}