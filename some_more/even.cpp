#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void even(int n){
     if(n&1){
        cout<<"odd";
    }
    else{
    cout<<"even";
    }
}
int main() {
    int n;
    cin>>n;
    even(n);
   
return 0;
}