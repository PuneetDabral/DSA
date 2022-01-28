#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void insertAttail(Node *&tail,int d){
    Node *temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

void insertAtPosition(Node *&head,Node *&tail,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position - 1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
    }
    Node *newnode = new Node(d);
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next->prev=temp;
    temp->next=newnode;
}

void deleteatPosition(int position,Node *&head,Node *&tail){
    if(position == 1){
        Node *temp = head;
       temp->next->prev=NULL;
       head=head->next;
       temp->next=NULL;
        delete temp;
    }
    else{
    Node *curr= head;
    Node *pre=NULL;
    int count =1;
    while(count<position){
        pre=curr;
        curr=curr->next;
        count++;

    }
    if(curr->next==NULL){
        tail=pre;
    }
     curr->prev=NULL;
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}

void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node *node = new Node(20);
    Node *head = node;
    Node *tail= node;
    insertAtHead(head,30);
    insertAttail(tail,10);
    insertAtPosition(head,tail,2,15);
    deleteatPosition(1,head,tail);

    

    print(head);
    

return 0;
}