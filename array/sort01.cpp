#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort1(int arr[], int n){
    int s=0,e=n-1;
    while(s<e){
        while (arr[s]==0 && s<e )
        {
           s++;
        }
        while(arr[e]==1 && s<e)
        {
            e--;
        }

        //if both condtion oppose
        swap(arr[s],arr[e]);
        s++;
        e--;                           //two pointer approch
        

    }

}
int main() {
    int n=5;
    int arr[n]={0,1,0,1,0};
    sort1(arr,5);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}