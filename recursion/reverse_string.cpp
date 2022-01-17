#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(string &name, int s, int e){
    if(s>e){
        return;
    }
    swap(name[s],name[e]);
    s++;
    e--;

   return reverse(name,s,e);

}

void loop(string &str){
    for(int i=0,j=str.length()-1; i<j; i++,j--){
        swap(str[i],str[j]);
    }
}

void single(string &str, int s ){
    int n= str.length();
    if(s>(n-s-1)){
        return ;
    }
    swap(str[s],str[n-s-1]);
    s++;
    single(str,s);


}

int main() {
    string name="PUNEET";
    // reverse(name,0,name.length()-1);
    single(name,0);
    //loop(name);
    cout<<name;


return 0;
}