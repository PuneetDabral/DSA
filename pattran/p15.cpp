#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
   int  count=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            char ch='A'+ count;
            cout<<ch;
            count++;
        }
        cout<<endl;
    }
return 0;
}