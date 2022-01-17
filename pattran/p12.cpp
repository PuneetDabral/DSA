#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    char start='A';
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            
            cout<<start;
            start++;
        }
        cout<<endl;
    }
return 0;
}