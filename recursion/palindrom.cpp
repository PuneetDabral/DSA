#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palindrom(string str,int s, int e){
    if(s>e){
        return true ; 
    }

    if(str[s]!=str[e])
    {
        return false;
    }
     
     
    
     return palindrom(str,s+1,e-1);
     

}
int main() {
    string str="abbccbba";
    cout<<palindrom(str,0,str.length()-1);
   
return 0;
}