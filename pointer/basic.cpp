#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // int a=5;
    //adress of oprator
    // cout<<&a;
    // cout<<endl;
    // int *p=&a;
    // cout<<p;
    // cout<<endl;


    // cout<<sizeof(p);
    // cout<<sizeof(p);
    //another way to inisilize value in pointer 
    // int *p=0;
    // p=&a;
    // cout<<*p;

    int num=5;
    int *ptr=&num;
    cout<<num<<endl;
    //(*ptr)++;
    *ptr=(*ptr)+1;
    cout<<num<<endl;
    cout<<*ptr<<endl;

    int *q=ptr;//copy pointer 
   cout<<ptr<<endl<<q<<endl<<&num<<endl;
    cout<<*ptr<<endl<<*q<<endl;


return 0;
}
