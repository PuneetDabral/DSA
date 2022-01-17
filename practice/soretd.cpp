#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sorted(int *arr, int n){
    if(n==0 || n==1){
        return true;
    }

  if(arr[0]>arr[1]){
      return false;
  }
   
   return sorted(arr+1,n-1);

}
int main() {
    int arr[5]={10,11,12,20,30};
    cout<<sorted(arr,5);

return 0;
}