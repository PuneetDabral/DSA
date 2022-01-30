/****************************************************************
    Following is the Linked List node structure

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

*****************************************************************/


Node* kReverse(Node* head, int k) {
   if(head==NULL){
       return NULL;
   }
    //reverse fisrst k Node 
    Node *next=NULL;
    Node *curr = head;
    Node *prev = NULL;
    
    int count=0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    //step 2 -recurssion
    if(next!=NULL){
       head->next=kReverse(next,k);
    }
    return prev;
}