#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int size){
    if(size==0 || size==1){
        return true ;
    }

    if(*arr > *(arr+1)){
        return false;
    }

    else{
        bool remaningpart = issorted(arr+1,size-1);
    }

}
int main() {
    int arr[5]={10,15,20,25,30};
   cout<< issorted(arr,5);
   

return 0;
}