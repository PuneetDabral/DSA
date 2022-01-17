#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check(char name[],int n){
    int s=0;
    int e=n-1;
  while(s<e){
      if(name[s]!=name[e]){
          return -1;
      }
      s++;
      e--;
  }
  return 1;
}

int lgt(char name[]){
     int c=0;
   for(int i=0; name[i] !='\0'; i++){
    
      c++;
   }
   return c;
}

int main() {
    char name[20];
    cin>>name;
    int n= lgt(name);
    cout<<check(name,n);
return 0;
}