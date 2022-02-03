/********************************
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

********************************/
//create seprate list
 void insertAttail(Node *&tail, Node *&curr){
     tail->next=curr;
     tail=curr;
 }

Node* sortList(Node *head)
{
    
    Node *zerohead= new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead=new Node(-1);
    Node *onetail=onehead;
    Node *twohead= new Node(-2);
    Node *twotail=twohead;
    
    Node *curr=head;
    
    while(curr!=NULL)
    {
        int value = curr->data;
        if(value==0){
            insertAttail(zerotail,curr);
        }
        else if(value==1){
            insertAttail(onetail,curr);
        }
         else if(value==2){
            insertAttail(twotail,curr);
        }
        curr=curr->next;
    }
    
    //merge 3 sub list
    if(onehead->next!=NULL) //list is non empty 
    {
        zerotail->next=onehead->next;
    }
    else{
        //one lst empty
        zerotail->next=twohead->next;
        
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    
    //setup head
    head=zerohead->next;
    
    //delete dummy node 
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;
    
}
