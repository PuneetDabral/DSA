#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
       this->next=NULL;

    }
};

void insertAtHead(Node *&head,int d){
    Node *temp= new Node(d);
    temp->next=head;
    head=temp;

}

void insertAtTail(Node *&tail,int d){
 Node *temp = new Node(d);
 tail->next=temp;
 tail=temp;
}

void insertAtPosition(Node *&head,Node *&tail,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }
   
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
     Node *newnode = new Node(d);
     newnode->next=temp->next;
     temp->next=newnode;

}

void deleteAtposition(int position,Node *&head,Node *&tail){
    if(position==1){
        Node *temp= head;
        head =head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;

        int cnt=1;
         while(cnt<position){
         prev = curr;
         curr=curr->next;
         cnt++;

          if(curr->next==NULL){
         tail=prev;
     }
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;
     }

    }

}

void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node *node = new Node(15);
    Node *head = node;
    Node *tail = node;
    // insertAtHead(head,20);
    // insertAtHead(head,25);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    insertAtPosition(head,tail,3,17);
    print(head);

return 0;
}