/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    // cout<<"Hello World";
     unordered_map<int,int>count;
     int arr[]={1,2,3,4,1};
     
     for(int i=0; i<5; i++){
        count[arr[i]]++;
        
        

    }
    
    for(auto i:count){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}