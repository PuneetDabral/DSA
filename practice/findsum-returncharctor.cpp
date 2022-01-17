#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findnum(int n){
    int sum=0;
    
    if(n>26){
         while(n!=0){
         int r=n%10;
         sum=sum+r;
         n=n/10;    
    }
      return findnum(sum);
    }

    else {
        return n;
    }

    }
   

int main() {
    int n,sum=0;
    cin>>n;
     while(n!=0){
         int r=n%10;
         sum=sum+r;
         n=n/10;    
    }
   
//    int ans= findnum(sum)+64;
//    cout<<ans;

//explicit (done by human)
// cout<<(char)ans;  

//implicet (done by compiler)
int ans= findnum(sum);

char a= 'A'+ ans-1;
    cout<<a;

return 0;
}