#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n){
    int max=INT_MIN;
     for(int i=0; i<4; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }

        
    }
 return max;

}

int min(int arr[], int n){
    int min=INT_MAX;
      for(int i=0; i<4; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }

        
    }
 return min;
}
int main() {
    int arr[]={1,12,3,10};
    cout<<min(arr,4);
    
   
    
return 0;
}