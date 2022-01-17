#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reachHome(int des,int src){
    if(src==des){
        cout<<"ok";
        return ;
    }
    cout<<src<<" ";
    
    return reachHome(des,src=src+1);
}
int main() {
    int des=10;
    int src=1;

    reachHome(des,src);
return 0;
}
