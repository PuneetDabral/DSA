#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
//create a queue
queue<int>q;

q.push(10);

cout<<q.front()<<endl;
q.push(10);
q.push(100);
cout<<q.front()<<endl;

cout<<"size of quee :"<<q.size()<<endl;

q.pop();

cout<<"size of quee :"<<q.size()<<endl;

if(q.empty())
{
    cout<<"que is empty";
}
else{
    cout<<"que is not empty";
}
return 0;
}