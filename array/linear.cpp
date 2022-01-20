#include <stdio.h>

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[50]={10,15,3,0,-1};
    
    int key=15;
   
   
    
    for(int i=0; i<5; i++){
        if(arr[i]==key)
        {
            cout<<i;
        }
    }
return 0;
}