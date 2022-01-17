#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_sum(int arr[][4],int r, int c){
 for(int i=0; i<3; i++){
     int sum=0;
     for(int j=0; j<4; j++){
         sum=sum+arr[i][j];
     }
     cout<<sum<<" ";
 }
}

int largest_sum(int arr[][4],int r, int c){
  int maxi=INT_MIN;
  int num=-1;
   for(int i=0; i<3; i++){
     int sum=0;
     for(int j=0; j<4; j++){
         sum=sum+arr[i][j];
     }
    if(sum>maxi){
        maxi=sum;
        num=i;
    }
 }
 cout<<"row"<<num<<endl<<"max"<<maxi;

 }
int main() {
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
// print_sum(arr,3,4);
largest_sum(arr,3,4);

return 0;
}