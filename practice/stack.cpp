#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
   int *arr;
   int size;
   int top;


  
  Stack(int s){
     this->size=s;
     arr= new int[size];
     top=-1;
  }

  void push(int element){
      if(size-top>1){
          top++;
          arr[top]=element;  
      }
      else{
          cout<<"stack overflow";
      }
  }

  void pop(){
      if(top>=0){
          top--;
      }
      else{
          cout<<"stack underflow";
      }
  }


  int peak(){
      if(top>=0){
          return arr[top];
      }
      else{
          cout<<"stack is empty";
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
 Stack s(5);
 s.push(10); 
 s.push(30);
 cout<<s.peak()<<endl;

 if(s.isempty()){
     cout<<"empty";
 }else{
     cout<<"non empty";

 }



return 0;
}