#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
int data;
Node *next;
Node *prev;
//constructor
Node(int d){
    this->data = d;
    this->prev =NULL;
    this->next =NULL;
  
}
};

void print(Node *&head){
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//give the length
int getLength(Node *&head){
    Node *temp = head;
    int len=0;

    while(temp != NULL)
    {
       len++;
        temp=temp->next;

    }
  return len;
}

void insertAtHead(Node *&head,Node *&tail,int d){
    if(head==NULL){
        Node *node1 = new Node(d);
        head=node1;
        tail=node1;
    }
   else{
        Node *temp = new Node(d);
    // (*temp).next=head;
    temp->next=head;
    head->prev=temp;
    head=temp;
   }
}



void insertAtTail(Node *&tail,Node *&head,int d){
     if(tail==NULL){
        Node *node1 = new Node(d);
        tail=node1;
        head=node1;
    }
    else{
    Node *temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    //for first position
    if (position == 1)
    {
        insertAtHead(head,tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
     //for last position
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }
    Node *newnode = new Node(d);
   newnode->next=temp->next;
   temp->next->prev=newnode;
   temp->next=newnode;
   newnode->prev=temp;
}

void deleteNode(int position,Node *&head,Node *&tail){
    //delete first node 
    if(position==1){
      Node *temp=head;
      temp->next->prev=NULL;
      head = temp->next;
      temp->next=NULL;
      delete temp;

    }
    else{
        //delete any middle node or last node 
        Node *curr = head;
        Node *prev = NULL;

        int cnt =1;
     while(cnt<position){
         prev = curr;
         curr=curr->next;
         cnt++;
     }
     
     if(curr->next==NULL){
         tail=prev;
     }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next=NULL;
    delete curr;


    }

}



int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout<<getLength(head)<< endl;

    insertAtHead(head,tail,11);
    print(head);

   insertAtTail(tail,head,15);
    print(head);

    insertAtPosition(tail,head,4,20);
    print(head);

    deleteNode(4,head,tail);
    print(head);

    
   cout<<tail->data;


return 0;
}
