#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char acc(string s){
    int arr[26]={0};

    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int n=0;
        if(ch>='a' && ch<='z'){
           n=ch-'a';
        }
        else{
          n=ch-'A';
        }
        arr[n]++;
    }

    int maxi=-1,ans=-1;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
           ans=i;
           maxi=arr[i]; 
        }
       
    }
    char final='a'+ans;
    return final;
}


int main() {
    string s="hello";
    cout<<acc(s);
return 0;
}