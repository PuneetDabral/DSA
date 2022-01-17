#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindrom(string name, int i ,int j){
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }
    i++,j--;
   return palindrom(name,i,j);

}
int main() {
      string name="nitin";
      cout<<palindrom(name,0,name.length()-1);
return 0;
}