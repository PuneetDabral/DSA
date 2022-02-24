#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class circularque{
public:
int *arr;
    int rear;
    int front;
    int size;

    circularque(int s){
        this->size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void enque(int ele){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"que is full";
            return;
        }
        else if(rear==size-1 && front !=0){
            rear =0;
        }
        else{
            rear++;
        }
        arr[rear]=ele;
    }

    void deque(){
        if(front==-1){
            cout<<"que is empty";
            return;
        }
       int ans= arr[front];
        arr[front]=-1;
         if(front==rear){ //single element
             front=rear=-1;
         }
        else if(front==size-1){
            front=0; //to maintain cyclcic nature
        }
        else{
            front++;
        }
        cout<<ans;
    }
};
int main() {

return 0;
}
