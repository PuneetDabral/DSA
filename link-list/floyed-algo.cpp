#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    //nre node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    //  tail=tail->next;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    //for first position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newnode = new Node(d);
    //for last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void deleteNode(int position,Node *&head,Node *&tail){
    //delete first node 
    if(position==1){
        Node *temp = head;
        head=head->next;
        temp->next = NULL;
        //memory free 
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
     prev->next= curr->next;
     curr->next=NULL;
     delete curr;



    }

}








void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool detectloop(Node *&head){
    if(head==NULL) 
    { return false; }
    map<Node *, bool>visited;
    Node *temp =head;

    while(temp != NULL){
        if(visited[temp]==true){
            cout<<"present at element "<<temp->data;
            return true;
        }
        
        visited[temp] = true;
        temp=temp->next;

        
    }
    return false;
}

Node * floyedloopdetect(Node *&head){
    if(head==NULL){
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<slow->data<<endl;
            return slow;
        }

    }
    return NULL;
}

int main()
{
    //create an new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
   
    insertAtTail(tail, 12);
   
    insertAtTail(tail, 15);
   
    // print(head);
    //  cout<<tail->next;
     tail->next = head->next;
    // detectloop(head);
    cout<< floyedloopdetect(head);
    


    return 0;
}