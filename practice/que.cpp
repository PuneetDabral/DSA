#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Que{
int *arr;
int qfront;
int rear;
int size;


public:
Que(int s){
   this-> size=s;
    arr=new int[size];
    qfront=0;
    rear=0;
}

void enqueue(int ele){
    if(rear==size){
        cout<<"que is full";
    }else{
        arr[rear]=ele;
        cout<<arr[rear]<<endl;
        rear++;
 
    }
    
}


void dque(){
    if(qfront==rear){
        cout<<"que is empty";
    }
    else{
        int ans=arr[qfront];
        cout<<"ele is deleted :"<<ans<<endl;
        qfront++;
        if(qfront==rear){
            qfront=0;
            rear=0;
        }

    }
}
 void front(){
        if(qfront==rear){
            cout<<"que is empty"<<endl;
        }
        else{
            cout<<arr[qfront];
        }
    }

    void isempty(){
        if(qfront==rear){
            cout<<"empty";
        }
        else{
            cout<<"non empty";
        }
    }


};


int main() {
    Que q(5);
    q.enqueue(15);
    // q.dque();
    q.front();

return 0;
}