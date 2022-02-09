#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{

    public:
    int *arr;
    int top;
    int size;
  
  Stack(int s){
      this->size=s;
      arr=new int[size];
      top=-1;
  }

  void push(int element){
      if(size-top>1){
          top++;
          arr[top]=element;
      }
      else{
          cout<<"stack overflow"<<endl;
       
      }

  }

  void pop(){
      if(top>=0){
          top--;
          
      }
      else{
         cout<<"under flow "<<endl;
      }

  }

  int peek(){
      if(top>=0){
      return arr[top];
      }
      else{
          cout<<"stack is empty "<<endl;
             return -1;
      }

  }

  bool isempty(){
      if(top==-1){
          return true;
      }
      else{
          return false;
      }

  }

};


int main() {
Stack s(2);
s.push(22);
// s.push(20);
// s.push(10);
 s.pop();
cout<<s.peek()<<endl;
if(s.isempty()){
    cout<<"empty";
}
else{
    cout<<"not empty";
}
return 0;
}