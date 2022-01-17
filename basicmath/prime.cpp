 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

    bool isprime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<n; i++){
             if(n%i==0){
                 return false;
             }
        }
        return true;
       
        
    }

   int main() {
       int n;
       cin>>n;
       if(isprime(n)==true){
         cout<<"prime";
       }
       else{
           cout<<"not prime";
       }
// int n=50;
// for(int i=2; i<n; i++){
//     //cout<<i<<" ";
//     for(int j=2*i; j<n; j=j+i){
//                     cout<<j<<" ";
//                 }
//                 cout<<endl;
// }
   return 0;
   }