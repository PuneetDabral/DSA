#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
       swap(name[s],name[e]);
       s++;
       e--;
    }
cout<<name;
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
   int n=lgt(name);
  reverse(name,n);
   
return 0;
}