#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
   int ans = fib(n-1)+fib(n-2);
   return ans;


}
int main() {
    

    cout<< fib(2);

return 0;
}