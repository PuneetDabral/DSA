#include <iostream>
#include <stack>

using namespace std;
int main() {
    //creation of stack 
    stack<int>s;
    s.push(20);
    s.push(15);
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty";
    }

    cout<<s.size();

return 0;
}