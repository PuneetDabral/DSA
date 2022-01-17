#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string name,int i,int j){
    cout<<name<<endl;
    if(i>j){
        return;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}
int main() {
    string name ="Puneet";
    reverse(name,0,name.length()-1);

   
    
return 0;
}