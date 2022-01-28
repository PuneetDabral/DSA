/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev=NULL;
    Node *curr =head;
    Node *forword = NULL;
    
    
    while(curr!=NULL){
        forword=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forword;
        
    }
    return prev;
    
}