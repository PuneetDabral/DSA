#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void update(int *p){
  (*p)++;
    cout<<*p<<endl;
}
int main() {
    // int i=5;
    //  int *p = &i;
    //  int **p2 = &p;

    //  //cout<<p<<endl<<&p<<endl<<&i<<endl<<p2<<endl<<&p2<<endl;
    //  cout<<*p2<<endl<<p<<endl;

    //  cout<<i<<endl<<*p<<endl<<**p2;

    // int arr[6]={11,12,13};
    // int *p=arr;
    // cout<<p[0];
    int i=15;
    int *p=&i;
    
    update(p);
    cout<<*p;

return 0;
}