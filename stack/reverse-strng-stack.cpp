#include <iostream>
using namespace std;

#include <bits/stdc++.h>




int main(){

string str ="puneet";
stack<char>s;

for(int i=0; i<str.length(); i++){
    char ch=str[i];
    s.push(ch);

}
string ans="";

while(!s.empty()){
    char ch= s.top();
    ans.push_back(ch);
    s.pop();

}
cout<<ans;


    return 0;
}